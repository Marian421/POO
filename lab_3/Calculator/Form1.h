#pragma once

namespace CppCLRWinFormsProject {

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
	private: System::Windows::Forms::TextBox^ afisaj;
	protected:

	private: System::Windows::Forms::Button^ btnsign;
	protected:

	private: System::Windows::Forms::Button^ num0;
	private: System::Windows::Forms::Button^ btnvirgula;
	private: System::Windows::Forms::Button^ btnequal;



	private: System::Windows::Forms::Button^ num1;
	private: System::Windows::Forms::Button^ num2;
	private: System::Windows::Forms::Button^ num3;
	private: System::Windows::Forms::Button^ btnsum;




	private: System::Windows::Forms::Button^ num4;
	private: System::Windows::Forms::Button^ num5;
	private: System::Windows::Forms::Button^ num6;
	private: System::Windows::Forms::Button^ btndiff;




	private: System::Windows::Forms::Button^ num7;
	private: System::Windows::Forms::Button^ num8;
	private: System::Windows::Forms::Button^ num9;
	private: System::Windows::Forms::Button^ btninmultire;
	private: System::Windows::Forms::Button^ btninvers;
	private: System::Windows::Forms::Button^ btnpow;
	private: System::Windows::Forms::Button^ btnsqrt;







	private: System::Windows::Forms::Button^ btnimpartire;
	private: System::Windows::Forms::Button^ btnmodulo;


	private: System::Windows::Forms::Button^ btnCE;

	private: System::Windows::Forms::Button^ btnclear;

	private: System::Windows::Forms::Button^ btndelete;


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
			this->afisaj = (gcnew System::Windows::Forms::TextBox());
			this->btnsign = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->btnvirgula = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->btnsum = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->btndiff = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->btninmultire = (gcnew System::Windows::Forms::Button());
			this->btninvers = (gcnew System::Windows::Forms::Button());
			this->btnpow = (gcnew System::Windows::Forms::Button());
			this->btnsqrt = (gcnew System::Windows::Forms::Button());
			this->btnimpartire = (gcnew System::Windows::Forms::Button());
			this->btnmodulo = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->btndelete = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// afisaj
			// 
			this->afisaj->Location = System::Drawing::Point(65, 159);
			this->afisaj->Name = L"afisaj";
			this->afisaj->Size = System::Drawing::Size(318, 20);
			this->afisaj->TabIndex = 0;
			this->afisaj->TextChanged += gcnew System::EventHandler(this, &Form1::afisaj_TextChanged);
			// 
			// btnsign
			// 
			this->btnsign->Location = System::Drawing::Point(65, 477);
			this->btnsign->Name = L"btnsign";
			this->btnsign->Size = System::Drawing::Size(75, 48);
			this->btnsign->TabIndex = 1;
			this->btnsign->Text = L"+/-";
			this->btnsign->UseVisualStyleBackColor = true;
			// 
			// num0
			// 
			this->num0->Location = System::Drawing::Point(146, 477);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(75, 48);
			this->num0->TabIndex = 2;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = true;
			this->num0->Click += gcnew System::EventHandler(this, &Form1::num0_Click);
			// 
			// btnvirgula
			// 
			this->btnvirgula->Location = System::Drawing::Point(227, 477);
			this->btnvirgula->Name = L"btnvirgula";
			this->btnvirgula->Size = System::Drawing::Size(75, 48);
			this->btnvirgula->TabIndex = 3;
			this->btnvirgula->Text = L".";
			this->btnvirgula->UseVisualStyleBackColor = true;
			// 
			// btnequal
			// 
			this->btnequal->Location = System::Drawing::Point(308, 477);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(75, 48);
			this->btnequal->TabIndex = 4;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = true;
			this->btnequal->Click += gcnew System::EventHandler(this, &Form1::btnequal_Click);
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(65, 423);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(75, 48);
			this->num1->TabIndex = 5;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = true;
			this->num1->Click += gcnew System::EventHandler(this, &Form1::num1_Click);
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(146, 423);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(75, 48);
			this->num2->TabIndex = 6;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = true;
			this->num2->Click += gcnew System::EventHandler(this, &Form1::num2_Click);
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(227, 423);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(75, 48);
			this->num3->TabIndex = 7;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = true;
			this->num3->Click += gcnew System::EventHandler(this, &Form1::num3_Click);
			// 
			// btnsum
			// 
			this->btnsum->Location = System::Drawing::Point(308, 423);
			this->btnsum->Name = L"btnsum";
			this->btnsum->Size = System::Drawing::Size(75, 48);
			this->btnsum->TabIndex = 8;
			this->btnsum->Text = L"+";
			this->btnsum->UseVisualStyleBackColor = true;
			this->btnsum->Click += gcnew System::EventHandler(this, &Form1::btnsum_Click);
			// 
			// num4
			// 
			this->num4->Location = System::Drawing::Point(65, 369);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(75, 48);
			this->num4->TabIndex = 9;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = true;
			this->num4->Click += gcnew System::EventHandler(this, &Form1::num4_Click);
			// 
			// num5
			// 
			this->num5->Location = System::Drawing::Point(146, 369);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(75, 48);
			this->num5->TabIndex = 10;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = true;
			this->num5->Click += gcnew System::EventHandler(this, &Form1::num5_Click);
			// 
			// num6
			// 
			this->num6->Location = System::Drawing::Point(227, 369);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(75, 48);
			this->num6->TabIndex = 11;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = true;
			this->num6->Click += gcnew System::EventHandler(this, &Form1::num6_Click);
			// 
			// btndiff
			// 
			this->btndiff->Location = System::Drawing::Point(308, 369);
			this->btndiff->Name = L"btndiff";
			this->btndiff->Size = System::Drawing::Size(75, 48);
			this->btndiff->TabIndex = 12;
			this->btndiff->Text = L"-";
			this->btndiff->UseVisualStyleBackColor = true;
			this->btndiff->Click += gcnew System::EventHandler(this, &Form1::btndiff_Click);
			// 
			// num7
			// 
			this->num7->Location = System::Drawing::Point(65, 315);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(75, 48);
			this->num7->TabIndex = 13;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = true;
			this->num7->Click += gcnew System::EventHandler(this, &Form1::num7_Click);
			// 
			// num8
			// 
			this->num8->Location = System::Drawing::Point(146, 315);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(75, 48);
			this->num8->TabIndex = 14;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = true;
			this->num8->Click += gcnew System::EventHandler(this, &Form1::num8_Click);
			// 
			// num9
			// 
			this->num9->Location = System::Drawing::Point(227, 315);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(75, 48);
			this->num9->TabIndex = 15;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = true;
			this->num9->Click += gcnew System::EventHandler(this, &Form1::num9_Click);
			// 
			// btninmultire
			// 
			this->btninmultire->Location = System::Drawing::Point(308, 315);
			this->btninmultire->Name = L"btninmultire";
			this->btninmultire->Size = System::Drawing::Size(75, 48);
			this->btninmultire->TabIndex = 16;
			this->btninmultire->Text = L"x";
			this->btninmultire->UseVisualStyleBackColor = true;
			this->btninmultire->Click += gcnew System::EventHandler(this, &Form1::btninmultire_Click);
			// 
			// btninvers
			// 
			this->btninvers->Location = System::Drawing::Point(65, 261);
			this->btninvers->Name = L"btninvers";
			this->btninvers->Size = System::Drawing::Size(75, 48);
			this->btninvers->TabIndex = 17;
			this->btninvers->Text = L"1/x";
			this->btninvers->UseVisualStyleBackColor = true;
			// 
			// btnpow
			// 
			this->btnpow->Location = System::Drawing::Point(146, 261);
			this->btnpow->Name = L"btnpow";
			this->btnpow->Size = System::Drawing::Size(75, 48);
			this->btnpow->TabIndex = 18;
			this->btnpow->Text = L"x^2";
			this->btnpow->UseVisualStyleBackColor = true;
			// 
			// btnsqrt
			// 
			this->btnsqrt->Location = System::Drawing::Point(227, 261);
			this->btnsqrt->Name = L"btnsqrt";
			this->btnsqrt->Size = System::Drawing::Size(75, 48);
			this->btnsqrt->TabIndex = 19;
			this->btnsqrt->Text = L"sqrt(x)";
			this->btnsqrt->UseVisualStyleBackColor = true;
			// 
			// btnimpartire
			// 
			this->btnimpartire->Location = System::Drawing::Point(308, 261);
			this->btnimpartire->Name = L"btnimpartire";
			this->btnimpartire->Size = System::Drawing::Size(75, 48);
			this->btnimpartire->TabIndex = 20;
			this->btnimpartire->Text = L"/";
			this->btnimpartire->UseVisualStyleBackColor = true;
			this->btnimpartire->Click += gcnew System::EventHandler(this, &Form1::btnimpartire_Click);
			// 
			// btnmodulo
			// 
			this->btnmodulo->Location = System::Drawing::Point(65, 207);
			this->btnmodulo->Name = L"btnmodulo";
			this->btnmodulo->Size = System::Drawing::Size(75, 48);
			this->btnmodulo->TabIndex = 21;
			this->btnmodulo->Text = L"%";
			this->btnmodulo->UseVisualStyleBackColor = true;
			// 
			// btnCE
			// 
			this->btnCE->Location = System::Drawing::Point(146, 207);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(75, 48);
			this->btnCE->TabIndex = 22;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			// 
			// btnclear
			// 
			this->btnclear->Location = System::Drawing::Point(227, 207);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(75, 48);
			this->btnclear->TabIndex = 23;
			this->btnclear->Text = L"C";
			this->btnclear->UseVisualStyleBackColor = true;
			// 
			// btndelete
			// 
			this->btndelete->Location = System::Drawing::Point(308, 207);
			this->btndelete->Name = L"btndelete";
			this->btndelete->Size = System::Drawing::Size(75, 48);
			this->btndelete->TabIndex = 24;
			this->btndelete->Text = L"delete";
			this->btndelete->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(456, 544);
			this->Controls->Add(this->btndelete);
			this->Controls->Add(this->btnclear);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnmodulo);
			this->Controls->Add(this->btnimpartire);
			this->Controls->Add(this->btnsqrt);
			this->Controls->Add(this->btnpow);
			this->Controls->Add(this->btninvers);
			this->Controls->Add(this->btninmultire);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->btndiff);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->btnsum);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btnvirgula);
			this->Controls->Add(this->num0);
			this->Controls->Add(this->btnsign);
			this->Controls->Add(this->afisaj);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: double firstNum = 0;
	private: double secondNum = 0;
	private: bool opPerformed = false;
	private: String^ operation = "";

	private: System::Void num0_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text = afisaj->Text + "0";
	}
private: System::Void btnsum_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisaj->Text != "")
	{
		firstNum = Double::Parse(afisaj->Text);
		afisaj->Text = "";
		operation = "+";
		afisaj->Text = "";
	}
}
private: System::Void num1_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text = afisaj->Text + "1";
}
private: System::Void afisaj_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btndiff_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisaj->Text != "")
	{
		firstNum = Double::Parse(afisaj->Text);
		afisaj->Text = "";
		operation = "-";
		afisaj->Text = "";
	}
}
private: System::Void btninmultire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisaj->Text != "")
	{
		firstNum = Double::Parse(afisaj->Text);
		afisaj->Text = "";
		operation = "*";
		afisaj->Text = "";
	}
}
private: System::Void btnimpartire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisaj->Text != "")
	{
		firstNum = Double::Parse(afisaj->Text);
		afisaj->Text = "";
		operation = "/";
		afisaj->Text = "";
	}
}
private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (afisaj->Text != "") {
		secondNum = Double::Parse(afisaj->Text);

		if (operation == "+") {
			afisaj->Text = (firstNum + secondNum).ToString();
		}
		else if (operation == "-") {
			afisaj->Text = (firstNum - secondNum).ToString();
		}
		else if (operation == "*") {
			afisaj->Text = (firstNum * secondNum).ToString();
		}
		else if (operation == "/") {
			if (secondNum != 0) {
				afisaj->Text = (firstNum / secondNum).ToString();
			}
			else {
				afisaj->Text = "Error: Cannot divide by zero";
			}
				
		}
	}
}
private: System::Void num2_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text = afisaj->Text + "2";
}
private: System::Void num3_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text = afisaj->Text + "3";
}
private: System::Void num4_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text = afisaj->Text + "4";
}
private: System::Void num5_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text = afisaj->Text + "5";
}
private: System::Void num6_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text = afisaj->Text + "6";
}
private: System::Void num7_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text = afisaj->Text + "7";
}
private: System::Void num8_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text = afisaj->Text + "8";
}
private: System::Void num9_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text = afisaj->Text + "9";
}
};
}
