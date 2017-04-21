#pragma once
#include <algorithm>
#include <ctime>

namespace LottoPickerProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::RichTextBox^  firstNumRTBox;

	private: System::Windows::Forms::RichTextBox^  secondNumRTBox;
	private: System::Windows::Forms::RichTextBox^  thirdNumRTBox;
	private: System::Windows::Forms::RichTextBox^  fourthNumRTBox;
	private: System::Windows::Forms::RichTextBox^  fifthNumRTBox;
	private: System::Windows::Forms::RichTextBox^  megaNumRTBox;
	private: System::Windows::Forms::Button^  button3;







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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->firstNumRTBox = (gcnew System::Windows::Forms::RichTextBox());
			this->secondNumRTBox = (gcnew System::Windows::Forms::RichTextBox());
			this->thirdNumRTBox = (gcnew System::Windows::Forms::RichTextBox());
			this->fourthNumRTBox = (gcnew System::Windows::Forms::RichTextBox());
			this->fifthNumRTBox = (gcnew System::Windows::Forms::RichTextBox());
			this->megaNumRTBox = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(131, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Get numbers";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(383, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(76, 179);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"1st number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(209, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"2nd number";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(346, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"3rd number";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(493, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"4th number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(640, 179);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"5th number";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(848, 179);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"mega";
			// 
			// firstNumRTBox
			// 
			this->firstNumRTBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstNumRTBox->Location = System::Drawing::Point(47, 62);
			this->firstNumRTBox->Name = L"firstNumRTBox";
			this->firstNumRTBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->firstNumRTBox->Size = System::Drawing::Size(114, 101);
			this->firstNumRTBox->TabIndex = 10;
			this->firstNumRTBox->Text = L"00";
			// 
			// secondNumRTBox
			// 
			this->secondNumRTBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->secondNumRTBox->Location = System::Drawing::Point(184, 62);
			this->secondNumRTBox->Name = L"secondNumRTBox";
			this->secondNumRTBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->secondNumRTBox->Size = System::Drawing::Size(113, 101);
			this->secondNumRTBox->TabIndex = 11;
			this->secondNumRTBox->Text = L"00";
			// 
			// thirdNumRTBox
			// 
			this->thirdNumRTBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->thirdNumRTBox->Location = System::Drawing::Point(327, 62);
			this->thirdNumRTBox->Name = L"thirdNumRTBox";
			this->thirdNumRTBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->thirdNumRTBox->Size = System::Drawing::Size(115, 101);
			this->thirdNumRTBox->TabIndex = 12;
			this->thirdNumRTBox->Text = L"00";
			// 
			// fourthNumRTBox
			// 
			this->fourthNumRTBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fourthNumRTBox->ForeColor = System::Drawing::SystemColors::WindowText;
			this->fourthNumRTBox->Location = System::Drawing::Point(472, 62);
			this->fourthNumRTBox->Name = L"fourthNumRTBox";
			this->fourthNumRTBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->fourthNumRTBox->Size = System::Drawing::Size(116, 101);
			this->fourthNumRTBox->TabIndex = 13;
			this->fourthNumRTBox->Text = L"00";
			// 
			// fifthNumRTBox
			// 
			this->fifthNumRTBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fifthNumRTBox->Location = System::Drawing::Point(617, 62);
			this->fifthNumRTBox->Name = L"fifthNumRTBox";
			this->fifthNumRTBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->fifthNumRTBox->Size = System::Drawing::Size(122, 101);
			this->fifthNumRTBox->TabIndex = 14;
			this->fifthNumRTBox->Text = L"00";
			// 
			// megaNumRTBox
			// 
			this->megaNumRTBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->megaNumRTBox->Location = System::Drawing::Point(810, 62);
			this->megaNumRTBox->Name = L"megaNumRTBox";
			this->megaNumRTBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->megaNumRTBox->Size = System::Drawing::Size(113, 101);
			this->megaNumRTBox->TabIndex = 15;
			this->megaNumRTBox->Text = L"00";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(624, 246);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 43);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Exit";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(961, 313);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->megaNumRTBox);
			this->Controls->Add(this->fifthNumRTBox);
			this->Controls->Add(this->fourthNumRTBox);
			this->Controls->Add(this->thirdNumRTBox);
			this->Controls->Add(this->secondNumRTBox);
			this->Controls->Add(this->firstNumRTBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MegaMillions Lotto Number Generator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		int num[5] = { 0 };
		int megaNum[1] = { 0 };

		// seed
		srand((int)time(0));

		//randomize the megaNum value
		for (int i = 0; i < 1; i++)
		megaNum[i] = (rand() % 46) + 1;

		// seed
		srand((int)time(0));

		// Randomize the array values.
		for (int j = 0; j < 5; j++)
			num[j] = (rand() % 56) + 1;

		//this sorts the numbers...tried a sort function but it wasn't working so I went with this
		int Temp = 0;
		do
		{
			if (num[0] > num[1])
			{
				Temp = num[0];
				num[0] = num[1];
				num[1] = Temp;
			}
			if (num[1] > num[2])
			{
				Temp = num[1];
				num[1] = num[2];
				num[2] = Temp;
			}
			if (num[2] > num[3])
			{
				Temp = num[2];
				num[2] = num[3];
				num[3] = Temp;
			}
			if (num[3] > num[4])
			{
				Temp = num[3];
				num[3] = num[4];
				num[4] = Temp;
			}
		} while (num[0] > num[1] || num[1] > num[2] || num[2] > num[3] || num[3] > num[4]);

		// set the richTBox text with random numbers
		this->firstNumRTBox->Text = Convert::ToString(num[0]);
		this->secondNumRTBox->Text = Convert::ToString(num[1]);
		this->thirdNumRTBox->Text = Convert::ToString(num[2]);
		this->fourthNumRTBox->Text = Convert::ToString(num[3]);
		this->fifthNumRTBox->Text = Convert::ToString(num[4]);
		this->megaNumRTBox->Text = Convert::ToString(megaNum[0]);

		 this->button2->Enabled = true;
		 this->button1->Enabled = false;

}		 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
		 this->firstNumRTBox->Text = L"00";
		 this->secondNumRTBox->Text = L"00";
		 this->thirdNumRTBox->Text = L"00";
		 this->fourthNumRTBox->Text = L"00";
		 this->fifthNumRTBox->Text = L"00";
		 this->megaNumRTBox->Text = L"00";

		 this->button1->Enabled = true;
		 this->button2->Enabled = false;
}
		 
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {



}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
