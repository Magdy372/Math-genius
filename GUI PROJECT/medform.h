#pragma once
#include<iostream>
#include<cmath>
#include<ctime>
#include<string>
#include<fstream>
#include<windows.h>

namespace GUIPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for medform
	/// </summary>
	public ref class medform : public System::Windows::Forms::Form
	{
	public:
		medform(void)
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
		~medform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Timer^ timer1;
	private:
	public: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ label8;
	public:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::ComponentModel::IContainer^ components;
	public:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(medform::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label1->Location = System::Drawing::Point(280, 84);
			this->label1->MinimumSize = System::Drawing::Size(72, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 50);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label2->Location = System::Drawing::Point(425, 84);
			this->label2->MinimumSize = System::Drawing::Size(72, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 50);
			this->label2->TabIndex = 1;
			this->label2->Click += gcnew System::EventHandler(this, &medform::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Highlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label3->Location = System::Drawing::Point(370, 92);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->MinimumSize = System::Drawing::Size(40, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 42);
			this->label3->TabIndex = 2;
			this->label3->Text = L"+";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Highlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label4->Location = System::Drawing::Point(516, 92);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->MinimumSize = System::Drawing::Size(40, 42);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 42);
			this->label4->TabIndex = 3;
			this->label4->Text = L" -";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label5->Location = System::Drawing::Point(572, 84);
			this->label5->MinimumSize = System::Drawing::Size(72, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 50);
			this->label5->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label6->Location = System::Drawing::Point(266, 221);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"answer :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->textBox1->Location = System::Drawing::Point(422, 221);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 33);
			this->textBox1->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label7->Location = System::Drawing::Point(728, 366);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 33);
			this->label7->TabIndex = 7;
			this->label7->Text = L"time :";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(819, 366);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(226, 33);
			this->progressBar1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->button1->Location = System::Drawing::Point(328, 393);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 45);
			this->button1->TabIndex = 9;
			this->button1->Text = L"start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &medform::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->button2->Location = System::Drawing::Point(448, 393);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 45);
			this->button2->TabIndex = 10;
			this->button2->Text = L"next";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &medform::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 20000;
			this->timer1->Tick += gcnew System::EventHandler(this, &medform::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &medform::timer2_Tick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Silver;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label8->ForeColor = System::Drawing::Color::DeepPink;
			this->label8->Location = System::Drawing::Point(922, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 33);
			this->label8->TabIndex = 11;
			this->label8->Text = L"score";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label9->Location = System::Drawing::Point(922, 100);
			this->label9->MaximumSize = System::Drawing::Size(40, 60);
			this->label9->MinimumSize = System::Drawing::Size(70, 62);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 62);
			this->label9->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label10->Location = System::Drawing::Point(272, 292);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 33);
			this->label10->TabIndex = 13;
			// 
			// medform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1097, 596);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"medform";
			this->Text = L"medform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Random^ randomizer = gcnew Random();
		int x, y, z, f, h, j;

		int score = 0;
		int q = 0;
		int timer = 1;
		int times = 1;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;
		timer2->Enabled = true;
		x = randomizer->Next(11)+1;
		y = randomizer->Next(11)+1;
		z = randomizer->Next(11)+1;

		label1->Text = Convert::ToString(x);
		label2->Text = Convert::ToString(y);
		label5->Text = Convert::ToString(z);


		button1->Hide();
	}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	x = randomizer->Next(11)+1;
	y = randomizer->Next(11)+1;
	z = randomizer->Next(11)+1;

	label1->Text = Convert::ToString(x);
	label2->Text = Convert::ToString(y);
	label5->Text = Convert::ToString(z);

	q++;
	if (q == 11) {
		StreamWriter^ output_file = File::AppendText("testmed.txt");
		output_file->WriteLine(label9->Text);
		output_file->Close();
		MessageBox::Show("Congratulations you Finished");
		this->Close();
	}
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	progressBar1->Increment(5);
	if (progressBar1->Value == 100) {
		progressBar1->Value = 0;
	}
	if (q == 11) {
		progressBar1->Hide();
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
	f = (x + y) - z;
	if (textBox1->Text == Convert::ToString(f)) {
		label10->Text = " correct answer ";
		x = randomizer->Next(11)+1;
		y = randomizer->Next(11)+1;
		z = randomizer->Next(11)+1;

		label1->Text = Convert::ToString(x);
		label2->Text = Convert::ToString(y);
		label5->Text = Convert::ToString(z);

		score++;
		q++;
		label9->Text = Convert::ToString(score);
		textBox1->Clear();
		progressBar1->Value = 0;
		timer1->Enabled = true;
	}
    else if (textBox1->Text != Convert::ToString(f)) {
		label10->Text = " incorrect answer ";
		x = randomizer->Next(11)+1;
		y = randomizer->Next(11)+1;
		z = randomizer->Next(11)+1;

		label1->Text = Convert::ToString(x);
		label2->Text = Convert::ToString(y);
		label5->Text = Convert::ToString(z);

		q++;
		textBox1->Clear();
		progressBar1->Value = 0;
		timer1->Enabled = true;
	}
	if (q == 11) {
		StreamWriter^ output_file = File::AppendText("testmed.txt");
		output_file->WriteLine(label9->Text);
		output_file->Close();
		MessageBox::Show("Congratulations you Finished");
		this->Close();
	}
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
