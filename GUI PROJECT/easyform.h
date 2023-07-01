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
	/// Summary for easyform
	/// </summary>
	public ref class easyform : public System::Windows::Forms::Form
	{
	public:
		easyform(void)
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
		~easyform()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:












	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;





	private: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::Timer^ timer1;
	private:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	public: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	public:
	private:




	private: System::ComponentModel::IContainer^ components;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(easyform::typeid));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &easyform::timer2_Tick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(479, 328);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 41);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &easyform::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(411, 76);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->MinimumSize = System::Drawing::Size(93, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(93, 49);
			this->label7->TabIndex = 14;
			this->label7->Click += gcnew System::EventHandler(this, &easyform::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(554, 76);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->MinimumSize = System::Drawing::Size(93, 49);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 49);
			this->label8->TabIndex = 15;
			this->label8->Click += gcnew System::EventHandler(this, &easyform::label8_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Silver;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DeepPink;
			this->label10->Location = System::Drawing::Point(1006, 39);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(77, 29);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Score";
			// 
			// timer1
			// 
			this->timer1->Interval = 20000;
			this->timer1->Tick += gcnew System::EventHandler(this, &easyform::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(511, 80);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 42);
			this->label1->TabIndex = 22;
			this->label1->Text = L"+";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1004, 80);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->MinimumSize = System::Drawing::Size(70, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 62);
			this->label3->TabIndex = 23;
			this->label3->Click += gcnew System::EventHandler(this, &easyform::label3_Click_1);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(771, 404);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 31);
			this->label11->TabIndex = 24;
			this->label11->Text = L"time :";
			this->label11->Click += gcnew System::EventHandler(this, &easyform::label11_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(853, 404);
			this->progressBar1->Margin = System::Windows::Forms::Padding(4);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(248, 28);
			this->progressBar1->TabIndex = 25;
			this->progressBar1->Click += gcnew System::EventHandler(this, &easyform::progressBar1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->textBox1->Location = System::Drawing::Point(377, 236);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(96, 38);
			this->textBox1->TabIndex = 26;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &easyform::textBox1_TextChanged);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->button5->Location = System::Drawing::Point(598, 328);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 44);
			this->button5->TabIndex = 27;
			this->button5->Text = L"next";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &easyform::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 18));
			this->label4->Location = System::Drawing::Point(241, 238);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 36);
			this->label4->TabIndex = 28;
			this->label4->Text = L"answer :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label2->Location = System::Drawing::Point(247, 294);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 33);
			this->label2->TabIndex = 29;
			// 
			// easyform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1135, 570);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"easyform";
			this->Text = L"easyform";
			this->Load += gcnew System::EventHandler(this, &easyform::easyform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		//StreamWriter^ output_file = File::CreateText("test1.txt");
		Random^ randomizer = gcnew Random();
		int x, y, z, f, h, j;
		
		int score = 0;
		int q = 0;
		int timer = 1;
		int times = 1;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		timer1->Enabled = true;
		timer2->Enabled = true;
		x = randomizer->Next(11);
		y = randomizer->Next(11);
		
		
		label7->Text = Convert::ToString(x);
		label8->Text = Convert::ToString(y);
		
		
		
		button1->Hide();
	}


private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	;
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void easyform_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	x = randomizer->Next(11)+1;
	y = randomizer->Next(11)+1;
	
	label7->Text = Convert::ToString(x);
	label8->Text = Convert::ToString(y);
	
	q++;
	if (q == 11) {
		StreamWriter^ output_file = File::AppendText("test1.txt");
		output_file->WriteLine(label3->Text);
		output_file->Close();
		MessageBox::Show("Congratulations you Finished");
		this->Close();
	}
}
	
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	
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
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
	f = (x + y);
	if (textBox1->Text == Convert::ToString(f)) {
		label2->Text = " correct answer ";
		x = randomizer->Next(11)+1;
		y = randomizer->Next(11)+1;
		
		label7->Text = Convert::ToString(x);
		label8->Text = Convert::ToString(y);

		q++;
		score++;
		
		label3->Text = Convert::ToString(score);
		textBox1->Clear();
		progressBar1->Value = 0;
		timer1->Enabled = true;
		
		
	}
	else if (textBox1->Text != Convert::ToString(f)) {
		label2->Text = " incorrect answer ";
		x = randomizer->Next(11)+1;
		y = randomizer->Next(11)+1;
		
		label7->Text = Convert::ToString(x);
		label8->Text = Convert::ToString(y);
		q++;
		textBox1->Clear();
		progressBar1->Value = 0;
		timer1->Enabled = true;
		
	}
	if (q == 11) {
		StreamWriter^ output_file = File::AppendText("test1.txt");
		output_file->WriteLine(label3->Text);
		output_file->Close();
		MessageBox::Show("Congratulations you Finished");
		this->Close();
	}
}
};
}
