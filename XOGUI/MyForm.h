#pragma once
#include "XO_H.h"

/*
	 button->Enabled = false     ----  To turn off the button for the user so that computer wont play.




*/

                              //// Gui Header////




namespace XOGUI {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

    tictactoe game;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:

		void restart_Game()
		{
			Restart->Visible = false;
			label1->Text = "";
			but1->Text = "";
			but2->Text = "";
			but3->Text = "";
			but4->Text = "";
			but5->Text = "";
			but6->Text = "";
			but7->Text = "";
			but8->Text = "";
			but9->Text = "";
			Symbol->Visible = true;
			game.Empty();
		}


		void setButton(int button_no) {
			switch (button_no)
			{
			case 1:
				if (game.computer == 'X')
					but1->Text = symX;
				else
					but1->Text = symO;
				but1->Enabled = false;				// To turn off the button for the user so that computer wont play.
				break;

			case 2:
				if (game.computer == 'X')
					but2->Text = symX;
				else
					but2->Text = symO;
				but2->Enabled = false;
				break;

			case 3:
				if (game.computer == 'X')
					but3->Text = symX;
				else
					but3->Text = symO;
				but3->Enabled = false;
				break;

			case 4:
				if (game.computer == 'X')
					but4->Text = symX;
				else
					but4->Text = symO;
				but4->Enabled = false;
				break;

			case 5:
				if (game.computer == 'X')
					but5->Text = symX;
				else
					but5->Text = symO;
				but5->Enabled = false;
				break;

			case 6:
				if (game.computer == 'X')
					but6->Text = symX;
				else
					but6->Text = symO;
				but6->Enabled = false;
				break;

			case 7:
				if (game.computer == 'X')
					but7->Text = symX;
				else
					but7->Text = symO;
				but7->Enabled = false;
				break;

			case 8:
				if (game.computer == 'X')
					but8->Text = symX;
				else
					but8->Text = symO;
				but8->Enabled = false;
				break;

			case 9:
				if (game.computer == 'X')
					but9->Text = symX;
				else
					but9->Text = symO;
				but9->Enabled = false;
				break;
			}
			if (( game.Over() == 10 ) || ( game.Over() == inf ) || ( game.Over() == -10 ))
			{
				Restart->Visible = true;
				button_State(false);
			
				if (game.Over() == 10)
				{
					label1->Text = "Computer won !!!";
				}
				else if (game.Over() == inf)
				{
					label1->Text = "Tie !!!";
				}
				else if(game.Over() == -10)
				{
					label1->Text = "Wooow !!! ... You Won";
				}
			}
		}

		void button_State(bool state)		// Shift + Alt
		{
			but1->Enabled = state;
			but2->Enabled = state;
			but3->Enabled = state;
			but4->Enabled = state;
			but5->Enabled = state;
			but6->Enabled = state;
			but7->Enabled = state;
			but8->Enabled = state;
			but9->Enabled = state;
		}


		MyForm(void)								// GUI Form Constructor
		{

			InitializeComponent();
			button_State(false);
			label1->Text = "";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ but1;
	private: System::Windows::Forms::Button^ but4;
	private: System::Windows::Forms::Button^ but7;
	private: System::Windows::Forms::Button^ but8;
	protected:

	protected:



	private: System::Windows::Forms::Button^ but5;

	private: System::Windows::Forms::Button^ but2;
	private: System::Windows::Forms::Button^ but9;


	private: System::Windows::Forms::Button^ but6;

	private: System::Windows::Forms::Button^ but3;
	private: System::Windows::Forms::RadioButton^ X;
	private: System::Windows::Forms::RadioButton^ O;
	private: System::Windows::Forms::GroupBox^ Symbol;
private: System::Windows::Forms::Button^ Ready;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ Restart;







	private:

		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
	
		void InitializeComponent(void)
		{
			this->but1 = (gcnew System::Windows::Forms::Button());
			this->but4 = (gcnew System::Windows::Forms::Button());
			this->but7 = (gcnew System::Windows::Forms::Button());
			this->but8 = (gcnew System::Windows::Forms::Button());
			this->but5 = (gcnew System::Windows::Forms::Button());
			this->but2 = (gcnew System::Windows::Forms::Button());
			this->but9 = (gcnew System::Windows::Forms::Button());
			this->but6 = (gcnew System::Windows::Forms::Button());
			this->but3 = (gcnew System::Windows::Forms::Button());
			this->X = (gcnew System::Windows::Forms::RadioButton());
			this->O = (gcnew System::Windows::Forms::RadioButton());
			this->Symbol = (gcnew System::Windows::Forms::GroupBox());
			this->Ready = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Restart = (gcnew System::Windows::Forms::Button());
			this->Symbol->SuspendLayout();
			this->SuspendLayout();
			// 
			// but1
			// 
			this->but1->AutoSize = true;
			this->but1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->but1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->but1->FlatAppearance->BorderSize = 0;
			this->but1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but1->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->but1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->but1->Location = System::Drawing::Point(1, 0);
			this->but1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->but1->Name = L"but1";
			this->but1->Size = System::Drawing::Size(102, 90);
			this->but1->TabIndex = 1;
			this->but1->UseVisualStyleBackColor = false;
			this->but1->Click += gcnew System::EventHandler(this, &MyForm::but1_Click);
			// 
			// but4
			// 
			this->but4->AutoSize = true;
			this->but4->BackColor = System::Drawing::Color::White;
			this->but4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->but4->FlatAppearance->BorderSize = 0;
			this->but4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but4->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->but4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->but4->Location = System::Drawing::Point(1, 90);
			this->but4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->but4->Name = L"but4";
			this->but4->Size = System::Drawing::Size(102, 91);
			this->but4->TabIndex = 4;
			this->but4->UseVisualStyleBackColor = false;
			this->but4->Click += gcnew System::EventHandler(this, &MyForm::but4_Click);
			// 
			// but7
			// 
			this->but7->AutoSize = true;
			this->but7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->but7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->but7->FlatAppearance->BorderSize = 0;
			this->but7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but7->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->but7->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->but7->Location = System::Drawing::Point(1, 181);
			this->but7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->but7->Name = L"but7";
			this->but7->Size = System::Drawing::Size(102, 91);
			this->but7->TabIndex = 7;
			this->but7->UseVisualStyleBackColor = false;
			this->but7->Click += gcnew System::EventHandler(this, &MyForm::but7_Click);
			// 
			// but8
			// 
			this->but8->AutoSize = true;
			this->but8->BackColor = System::Drawing::Color::White;
			this->but8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->but8->FlatAppearance->BorderSize = 0;
			this->but8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but8->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->but8->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->but8->Location = System::Drawing::Point(103, 182);
			this->but8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->but8->Name = L"but8";
			this->but8->Size = System::Drawing::Size(102, 91);
			this->but8->TabIndex = 10;
			this->but8->UseVisualStyleBackColor = false;
			this->but8->Click += gcnew System::EventHandler(this, &MyForm::but8_Click);
			// 
			// but5
			// 
			this->but5->AutoSize = true;
			this->but5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->but5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->but5->FlatAppearance->BorderSize = 0;
			this->but5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but5->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->but5->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->but5->Location = System::Drawing::Point(103, 91);
			this->but5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->but5->Name = L"but5";
			this->but5->Size = System::Drawing::Size(102, 91);
			this->but5->TabIndex = 9;
			this->but5->UseVisualStyleBackColor = false;
			this->but5->Click += gcnew System::EventHandler(this, &MyForm::but5_Click);
			// 
			// but2
			// 
			this->but2->AutoSize = true;
			this->but2->BackColor = System::Drawing::Color::White;
			this->but2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->but2->FlatAppearance->BorderSize = 0;
			this->but2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but2->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->but2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->but2->Location = System::Drawing::Point(103, 0);
			this->but2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->but2->Name = L"but2";
			this->but2->Size = System::Drawing::Size(102, 91);
			this->but2->TabIndex = 8;
			this->but2->UseVisualStyleBackColor = false;
			this->but2->Click += gcnew System::EventHandler(this, &MyForm::but2_Click);
			// 
			// but9
			// 
			this->but9->AutoSize = true;
			this->but9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->but9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->but9->FlatAppearance->BorderSize = 0;
			this->but9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but9->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->but9->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->but9->Location = System::Drawing::Point(205, 181);
			this->but9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->but9->Name = L"but9";
			this->but9->Size = System::Drawing::Size(102, 91);
			this->but9->TabIndex = 13;
			this->but9->UseVisualStyleBackColor = false;
			this->but9->Click += gcnew System::EventHandler(this, &MyForm::but9_Click);
			// 
			// but6
			// 
			this->but6->AutoSize = true;
			this->but6->BackColor = System::Drawing::Color::White;
			this->but6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->but6->FlatAppearance->BorderSize = 0;
			this->but6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but6->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->but6->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->but6->Location = System::Drawing::Point(205, 90);
			this->but6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->but6->Name = L"but6";
			this->but6->Size = System::Drawing::Size(102, 91);
			this->but6->TabIndex = 12;
			this->but6->UseVisualStyleBackColor = false;
			this->but6->Click += gcnew System::EventHandler(this, &MyForm::but6_Click);
			// 
			// but3
			// 
			this->but3->AutoSize = true;
			this->but3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->but3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->but3->FlatAppearance->BorderSize = 0;
			this->but3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->but3->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->but3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->but3->Location = System::Drawing::Point(205, 0);
			this->but3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->but3->Name = L"but3";
			this->but3->Size = System::Drawing::Size(102, 90);
			this->but3->TabIndex = 11;
			this->but3->UseVisualStyleBackColor = false;
			this->but3->Click += gcnew System::EventHandler(this, &MyForm::but3_Click);
			// 
			// X
			// 
			this->X->AutoSize = true;
			this->X->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->X->Location = System::Drawing::Point(30, 37);
			this->X->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->X->Name = L"X";
			this->X->Size = System::Drawing::Size(93, 20);
			this->X->TabIndex = 14;
			this->X->TabStop = true;
			this->X->Text = L"Play as X";
			this->X->UseVisualStyleBackColor = true;
			this->X->CheckedChanged += gcnew System::EventHandler(this, &MyForm::X_CheckedChanged);
			// 
			// O
			// 
			this->O->AutoSize = true;
			this->O->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->O->Location = System::Drawing::Point(30, 64);
			this->O->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->O->Name = L"O";
			this->O->Size = System::Drawing::Size(95, 20);
			this->O->TabIndex = 15;
			this->O->TabStop = true;
			this->O->Text = L"Play as O";
			this->O->UseVisualStyleBackColor = true;
			this->O->CheckedChanged += gcnew System::EventHandler(this, &MyForm::O_CheckedChanged);
			// 
			// Symbol
			// 
			this->Symbol->AutoSize = true;
			this->Symbol->Controls->Add(this->Ready);
			this->Symbol->Controls->Add(this->X);
			this->Symbol->Controls->Add(this->O);
			this->Symbol->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Symbol->Location = System::Drawing::Point(313, 106);
			this->Symbol->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Symbol->Name = L"Symbol";
			this->Symbol->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Symbol->Size = System::Drawing::Size(173, 167);
			this->Symbol->TabIndex = 16;
			this->Symbol->TabStop = false;
			this->Symbol->Text = L"Choose Symbol";
			// 
			// Ready
			// 
			this->Ready->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Ready->Location = System::Drawing::Point(30, 102);
			this->Ready->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ready->Name = L"Ready";
			this->Ready->Size = System::Drawing::Size(87, 43);
			this->Ready->TabIndex = 16;
			this->Ready->Text = L"Start";
			this->Ready->UseVisualStyleBackColor = true;
			this->Ready->Click += gcnew System::EventHandler(this, &MyForm::Ready_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(308, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 27);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Computer Won";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// Restart
			// 
			this->Restart->AutoSize = true;
			this->Restart->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Restart->Location = System::Drawing::Point(343, 53);
			this->Restart->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Restart->Name = L"Restart";
			this->Restart->Size = System::Drawing::Size(107, 37);
			this->Restart->TabIndex = 17;
			this->Restart->Text = L"Restart";
			this->Restart->UseVisualStyleBackColor = true;
			this->Restart->Visible = false;
			this->Restart->Click += gcnew System::EventHandler(this, &MyForm::Restart_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(487, 275);
			this->Controls->Add(this->but9);
			this->Controls->Add(this->but6);
			this->Controls->Add(this->but3);
			this->Controls->Add(this->but8);
			this->Controls->Add(this->but5);
			this->Controls->Add(this->but2);
			this->Controls->Add(this->but7);
			this->Controls->Add(this->but4);
			this->Controls->Add(this->but1);
			this->Controls->Add(this->Restart);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Symbol);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"XO Game";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Symbol->ResumeLayout(false);
			this->Symbol->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		}
private: System::Void but1_Click(System::Object^ sender, System::EventArgs^ e) {
	game.input(0,0);

	
	if (game.opponent == 'X')
		but1->Text = symX;
	else
		but1->Text = symO;
	setButton(game.computer_turn());
	but1->Enabled = false;				// To turn off the button for the user so that computer wont play.

}
private: System::Void but2_Click(System::Object^ sender, System::EventArgs^ e) {
	game.input(0, 1);
	
	if (game.opponent == 'X')
		but2->Text = symX;
	else
		but2->Text = symO;
	setButton(game.computer_turn());
	but2->Enabled = false;

}
private: System::Void but3_Click(System::Object^ sender, System::EventArgs^ e) {
	game.input(0, 2);
	
	if (game.opponent == 'X')
		but3->Text = symX;
	else
		but3->Text = symO;
	setButton(game.computer_turn());
	but3->Enabled = false;				// To turn off the button so that computer wont play.

}
private: System::Void but4_Click(System::Object^ sender, System::EventArgs^ e) {
	game.input(1, 0);
	 
	if (game.opponent == 'X')
		but4->Text = symX;
	else
		but4->Text = symO;
	setButton(game.computer_turn());
	but4->Enabled = false;
}
private: System::Void but5_Click(System::Object^ sender, System::EventArgs^ e) {
	game.input(1, 1);
	if (game.opponent == 'X')
		but5->Text = symX;
	else
		but5->Text = symO;
	setButton(game.computer_turn());
	but5->Enabled = false;
}
private: System::Void but6_Click(System::Object^ sender, System::EventArgs^ e) {
	game.input(1, 2);
	if (game.opponent == 'X')
		but6->Text = symX;
	else
		but6->Text = symO;
	setButton(game.computer_turn());
	but6->Enabled = false;
}
private: System::Void but7_Click(System::Object^ sender, System::EventArgs^ e) {
	game.input(2, 0);
	if (game.opponent == 'X')
		but7->Text = symX;
	else
		but7->Text = symO;
	setButton(game.computer_turn());
	but7->Enabled = false;
}
private: System::Void but8_Click(System::Object^ sender, System::EventArgs^ e) {
	game.input(2, 1);
	if (game.opponent == 'X')
		but8->Text = symX;
	else
		but8->Text = symO;
	setButton(game.computer_turn());
	but8->Enabled = false;
}
private: System::Void but9_Click(System::Object^ sender, System::EventArgs^ e) {
	game.input(2, 2);
	if (game.opponent == 'X')
		but9->Text = symX;
	else
		but9->Text = symO;
	setButton(game.computer_turn());
	but9->Enabled = false;
}

private: System::Void X_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	game.select('X');
}
private: System::Void O_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	
	
	game.select('O');
	
}


	private: System::Void Ready_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "";
		button_State(true);
		if(game.opponent == 'O')
			setButton(game.computer_turn());
		Symbol->Visible = false;
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {			// Not used.
}
private: System::Void Restart_Click(System::Object^ sender, System::EventArgs^ e) {
	restart_Game();
}
};
}
