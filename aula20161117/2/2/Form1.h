﻿#pragma once

namespace My2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
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
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected: 



















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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(65, 75);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(118, 75);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 37);
			this->button3->TabIndex = 2;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(171, 75);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(47, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"C";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(171, 118);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 37);
			this->button5->TabIndex = 7;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(118, 118);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(47, 37);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(65, 118);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(47, 37);
			this->button7->TabIndex = 5;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 118);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(47, 37);
			this->button8->TabIndex = 4;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(171, 162);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(47, 37);
			this->button9->TabIndex = 11;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(118, 161);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(47, 37);
			this->button10->TabIndex = 10;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(65, 161);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(47, 37);
			this->button11->TabIndex = 9;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(12, 161);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(47, 37);
			this->button12->TabIndex = 8;
			this->button12->Text = L"1";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(171, 204);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(101, 37);
			this->button13->TabIndex = 15;
			this->button13->Text = L"=";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(118, 204);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(47, 37);
			this->button14->TabIndex = 14;
			this->button14->Text = L"√";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(65, 204);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(47, 37);
			this->button15->TabIndex = 13;
			this->button15->Text = L".";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(12, 204);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(47, 37);
			this->button16->TabIndex = 12;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(225, 161);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(47, 37);
			this->button18->TabIndex = 18;
			this->button18->Text = L"÷";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(225, 118);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(47, 37);
			this->button19->TabIndex = 17;
			this->button19->Text = L"-";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(225, 75);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(47, 37);
			this->button20->TabIndex = 16;
			this->button20->Text = L"CE";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(7, 18);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(264, 48);
			this->richTextBox1->TabIndex = 19;
			this->richTextBox1->Text = L"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}

