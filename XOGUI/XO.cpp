
#define inf 1000
#include "XO_H.h"

tictactoe::tictactoe()
    {
        for (int r = 0; r < 3; r++)
            for (int c = 0; c < 3; c++)
                mainboard[r][c] = '_';

                   // True for Player's Turn.
        over = false;                               // Game is over.
    }

void tictactoe::select(char select)                 
{
    // Choosing the user's X or O
    if (select == 'X' || select == 'x') {       // The user goes with [ X ]
        computer = 'O';
        opponent = 'X';
        opTurn = true;
    }
    else if (select == 'O' || select == 'o')    // The user goes with [ O ]
    {
        computer = 'X';
        opponent = 'O';
        opTurn = false;
    }
}
    // return max & used in maximizer turn
    int tictactoe::max(int first, int second)
    {
        if (first > second)
            return first;
        return second;
    }
    // return min & used in minimizer turn
    int tictactoe::min(int first, int second)
    {
        if (first < second)
            return first;
        return second;
    }
    // Check endgame
    int tictactoe::Over() {
        if (!isMovesLeft(mainboard) && evaluate(mainboard) == 0)  
            return inf;
        return evaluate(mainboard);
    }
    // return the play of the computer & modify array with computer's play
    int tictactoe::computer_turn() {
        Move bestMove = findBestMove(mainboard);
        mainboard[bestMove.row][bestMove.col] = computer;
        return bestMove.row * 3 + bestMove.col + 1;
    }
    // return the best play for the computer
    tictactoe::Move tictactoe::findBestMove(char board[3][3])
    {
        int bestVal = -inf;
        Move bestMove;
        bestMove.row = -1;
        bestMove.col = -1;

        // Traverse all cells, evaluate minimax function for
        // all empty cells. And return the cell with optimal
        // value.
        
        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < 3; col++)
            {
                // Check if cell is empty
                if (board[row][col] == '_')
                {
                    // Make the move
                    board[row][col] = computer;

                    // compute evaluation function for this
                    // move.
                    int moveVal = minimax(board, 0, false);

                    // Undo the move
                    board[row][col] = '_';

                    // If the value of the current move is
                    // more than the best value, then update
                    // best/
                    if (moveVal > bestVal)
                    {
                        bestMove.row = row;
                        bestMove.col = col;
                        bestVal = moveVal;
                    }
                }
            }
        }
        return bestMove;
    }
    // evaluating game state (win or lose or no one wins)
    int tictactoe::evaluate(char b[3][3])
    {
        // Checking for Rows for X or O victory.
        for (int row = 0; row < 3; row++)
        {
            if (b[row][0] == b[row][1] &&
                b[row][1] == b[row][2])
            {
                if (b[row][0] == computer)
                    return +10;
                else if (b[row][0] == opponent)
                    return -10;
            }
        }

        // Checking for Columns for X or O victory.
        for (int col = 0; col < 3; col++)
        {
            if (b[0][col] == b[1][col] &&
                b[1][col] == b[2][col])
            {
                if (b[0][col] == computer)
                    return +10;

                else if (b[0][col] == opponent)
                    return -10;
            }
        }

        // Checking for Diagonals for X or O victory.
        if (b[0][0] == b[1][1] && b[1][1] == b[2][2])
        {
            if (b[0][0] == computer)
                return +10;
            else if (b[0][0] == opponent)
                return -10;
        }

        if (b[0][2] == b[1][1] && b[1][1] == b[2][0])
        {
            if (b[0][2] == computer)
                return +10;
            else if (b[0][2] == opponent)
                return -10;
        }

        // Else if none of them have won then return 0
        return 0;
    }

    // This is the minimax function. It considers all
    // the possible ways the game can go and returns
    // the value of the board & it is used by findBestMove function to evaluate each available move
    int tictactoe::minimax(char board[3][3], int depth, bool isMax)
    {
        int score = evaluate(board);

        // If Maximizer has won the game return his/her
        // evaluated score
        if (score == 10)
            return score - depth;    // use to determine the shortest win for maximizer

        // If Minimizer has won the game return his/her
        // evaluated score
        if (score == -10)
            return score + depth;   // use to determine the shortest win for minimizer

        // If there are no more moves and no winner then
        // it is a tie
        if (isMovesLeft(board) == false)
            return 0;

        // If this maximizer's move
        if (isMax)
        {
            int best = -inf;

            // Traverse all cells
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    // Check if cell is empty
                    if (board[i][j] == '_')
                    {
                        // Make the move
                        board[i][j] = computer;

                        // Call minimax recursively and choose
                        // the maximum value
                        best = max(best, minimax(board, depth + 1, !isMax));

                        // Undo the move
                        board[i][j] = '_';
                    }
                }
            }
            return best;
        }

        // If this minimizer's move
        else
        {
            int best = inf;

            // Traverse all cells
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    // Check if cell is empty
                    if (board[i][j] == '_')
                    {
                        // Make the move
                        board[i][j] = opponent;

                        // Call minimax recursively and choose
                        // the minimum value
                        best = min(best, minimax(board, depth + 1, !isMax));

                        // Undo the move
                        board[i][j] = '_';
                    }
                }
            }
            return best;
        }
    }

    // This function returns true if there are moves
    // remaining on the board. It returns false if
    // there are no moves left to play.
    bool tictactoe::isMovesLeft(char board[3][3])
    {
        for (int row = 0; row < 3; row++)
            for (int col = 0; col < 3; col++)
                if (board[row][col] == '_')
                    return true;
        return false;
    }
    // used to input the play of the user
    void tictactoe::input(int row, int col)
    {
        mainboard[row][col] = opponent;                 // Opponent plays            
    }

    // check if the board is empty
    void tictactoe::Empty()
    {
        for (int r = 0; r < 3; r++)
            for (int c = 0; c < 3; c++)
                mainboard[r][c] = '_';
    }
