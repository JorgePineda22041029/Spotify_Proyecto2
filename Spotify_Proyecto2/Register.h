#pragma once
#include "Login.h"
#include "Register.h"
#include <String>
#include <vector>
#include <stdlib.h>
#include <windows.h>
#include <shellapi.h>
#include <windows.h>


#include <iostream>
#include <fstream>
#include <direct.h>

#include <string.h>
#include <stdio.h>
#include <cstdlib>
#include <String>
#include <stdlib.h>
#include <string.h>
#include <msclr\marshal.h>




using namespace std;
using namespace System;
using namespace msclr::interop;
struct Usuario
{
	char user[30];
	char contra[30];

};
namespace Spotify_Proyecto2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Full Name: ";
			this->label1->Click += gcnew System::EventHandler(this, &Register::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password: ";
			this->label3->Click += gcnew System::EventHandler(this, &Register::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(48, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Correo: ";
			this->label4->Click += gcnew System::EventHandler(this, &Register::label4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(102, 23);
			this->textBox1->Name = L"FullName";
			this->textBox1->Size = System::Drawing::Size(240, 20);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(102, 71);
			this->textBox2->Name = L"Correro";
			this->textBox2->Size = System::Drawing::Size(240, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(102, 122);
			this->textBox3->Name = L"Username";
			this->textBox3->Size = System::Drawing::Size(240, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(102, 169);
			this->textBox4->Name = L"Password";
			this->textBox4->Size = System::Drawing::Size(240, 20);
			this->textBox4->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(166, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 33);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Register::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 22);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Go Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Register::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(43, 33);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(395, 276);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Register";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Register::groupBox1_Enter);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(482, 350);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Register";
			this->Text = L"Register";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		string Usuario;
		string Completo;
		string Contraseña;
		string Gmail;



		//string Usuario;
		//string Completo;
		//string Contraseña;
		//string Gmail;

		ofstream File;


		if (!File) {
			cout << "No se creo el file" << endl;
		}




		File.open("File.txt", ios::out | ios::binary | ios::app);

		File.write(reinterpret_cast<const char*>(&Usuario), sizeof(Usuario));
		File.write(reinterpret_cast<const char*>(&Completo), sizeof(Completo));
		File.write(reinterpret_cast<const char*>(&Contraseña), sizeof(Contraseña));
		File.write(reinterpret_cast<const char*>(&Gmail), sizeof(Gmail));


		File.close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
		MessageBox::Show("Program Will Now Close");
		Register::Close();
	}
};
}
