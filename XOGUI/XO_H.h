
#pragma once
#define symX "X"
#define symO "O"


/*
    Converting from Row & Coloumn [0:2] --> to --> integer button position from 1 to 9
                    Row *3 + Coloumn + 1
    Ex... -->   mainboard[2][1] = ( (2*3) + 1 + 1 )  = 8
*/


#ifndef  XO_HEADER
#define XO_HEADER

#define inf 1000


class tictactoe
{
private:

    char mainboard[3][3];
    bool opTurn;            // isMax
    bool over;

    struct Move
    {
        int col, row;
    };

    int max(int first, int second);
    int min(int first, int second);
    int evaluate(char b[3][3]);
    int minimax(char board[3][3], int depth, bool isMax);   
    Move findBestMove(char board[3][3]);
    bool isMovesLeft(char board[3][3]);

public:

    char computer;          // Computer's Symbol
    char opponent;          // Player's Symbol
    tictactoe();
    int Over();
    void Empty();                // To empty the board after restarting.
    void select(char select);
    int computer_turn();
    void input(int row, int col);       // ?
};
#endif