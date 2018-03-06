#pragma once
#include <stdlib.h>
#include <Windows.h>
#include <mmsystem.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		// Global Strings for Button Numbers
		String ^ buttonString;
		int buttonInt;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		//Random Number Function
		void randNumber(int randomNumber, String^ display) {
			randomNumber = rand() % 10 + 1;
			display = System::Convert::ToString(randomNumber);
			NumberDisplayer->Text = (display);
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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  GuessTheNumber;


	private: System::Windows::Forms::Label^  NumberDisplayer;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->GuessTheNumber = (gcnew System::Windows::Forms::Label());
			this->NumberDisplayer = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newGameToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			resources->ApplyResources(this->menuToolStripMenuItem, L"menuToolStripMenuItem");
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			resources->ApplyResources(this->newGameToolStripMenuItem, L"newGameToolStripMenuItem");
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newGameToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			resources->ApplyResources(this->helpToolStripMenuItem, L"helpToolStripMenuItem");
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			resources->ApplyResources(this->exitToolStripMenuItem, L"exitToolStripMenuItem");
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			resources->ApplyResources(this->button9, L"button9");
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			resources->ApplyResources(this->button10, L"button10");
			this->button10->Name = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// GuessTheNumber
			// 
			resources->ApplyResources(this->GuessTheNumber, L"GuessTheNumber");
			this->GuessTheNumber->Name = L"GuessTheNumber";
			this->GuessTheNumber->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// NumberDisplayer
			// 
			resources->ApplyResources(this->NumberDisplayer, L"NumberDisplayer");
			this->NumberDisplayer->Name = L"NumberDisplayer";
			this->NumberDisplayer->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->Controls->Add(this->NumberDisplayer);
			this->Controls->Add(this->GuessTheNumber);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Tag = L"";
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// Takes the number from the textbox, converts it to int
	// compares it based on the button.
	int number = System::Convert::ToInt16(NumberDisplayer->Text);
	if (1 == number) {
		MessageBox::Show("You are correct! Fantastic!");
		randNumber(buttonInt, buttonString);
	}
	else
		MessageBox::Show("You are incorrect! Try again!");
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void NumberDisplay_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {

}
#pragma comment(lib, "winmm.lib")
private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//Declaration of local variables
	int randomNumber;
	String ^ display;
	//choses the random number and then displays it
	randNumber(randomNumber, display);
	//Play the music
	PlaySound(TEXT("musicFile.wav"), NULL, SND_ASYNC);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	// Takes the number from the textbox, converts it to int
	// compares it based on the button.
	int number = System::Convert::ToInt16(NumberDisplayer->Text);
	if (2 == number) {
		MessageBox::Show("You are correct! Fantastic!");
		randNumber(buttonInt, buttonString);
	}
	else
		MessageBox::Show("You are incorrect! Try again!");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int number = System::Convert::ToInt16(NumberDisplayer->Text);
	if (3 == number) {
		MessageBox::Show("You are correct! Fantastic!");
		randNumber(buttonInt, buttonString);
	}
	else
		MessageBox::Show("You are incorrect! Try again!");
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	int number = System::Convert::ToInt16(NumberDisplayer->Text);
	if (4 == number) {
		MessageBox::Show("You are correct! Fantastic!");
		randNumber(buttonInt, buttonString);
	}
	else
		MessageBox::Show("You are incorrect! Try again!");
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	int number = System::Convert::ToInt16(NumberDisplayer->Text);
	if (5 == number) {
		MessageBox::Show("You are correct! Fantastic!");
		randNumber(buttonInt, buttonString);
	}
	else
		MessageBox::Show("You are incorrect! Try again!");
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	int number = System::Convert::ToInt16(NumberDisplayer->Text);
	if (6 == number) {
		MessageBox::Show("You are correct! Fantastic!");
		randNumber(buttonInt, buttonString);
	}
	else
		MessageBox::Show("You are incorrect! Try again!");
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	int number = System::Convert::ToInt16(NumberDisplayer->Text);
	if (7 == number) {
		MessageBox::Show("You are correct! Fantastic!");
		randNumber(buttonInt, buttonString);
	}
	else
		MessageBox::Show("You are incorrect! Try again!");
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	int number = System::Convert::ToInt16(NumberDisplayer->Text);
	if (8 == number) {
		MessageBox::Show("You are correct! Fantastic!");
		randNumber(buttonInt, buttonString);
	}
	else
		MessageBox::Show("You are incorrect! Try again!");
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	int number = System::Convert::ToInt16(NumberDisplayer->Text);
	if (9 == number) {
		MessageBox::Show("You are correct! Fantastic!");
		randNumber(buttonInt, buttonString);
	}
	else
		MessageBox::Show("You are incorrect! Try again!");
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	int number = System::Convert::ToInt16(NumberDisplayer->Text);
	if (10 == number) {
		MessageBox::Show("You are correct! Fantastic!");
		randNumber(buttonInt, buttonString);
	}
	else
		MessageBox::Show("You are incorrect! Try again!");
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}
private: System::Void helpToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("&copy: Damien Burks and Marlon Breaux, 2018");
}
};
}
