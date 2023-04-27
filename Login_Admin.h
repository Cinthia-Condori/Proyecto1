#pragma once
#include "Menu_Admin.h"
namespace Consesionaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Login_Admin
	/// </summary>
	public ref class Login_Admin : public System::Windows::Forms::Form
	{
	public:
		Login_Admin(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Login_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TB_User;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TB_Pasword;
	private: System::Windows::Forms::Button^ Btn_Cancel;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TB_User = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TB_Pasword = (gcnew System::Windows::Forms::TextBox());
			this->Btn_Cancel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(403, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"LOGIN";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"User";
			// 
			// TB_User
			// 
			this->TB_User->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TB_User->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_User->Location = System::Drawing::Point(140, 121);
			this->TB_User->Name = L"TB_User";
			this->TB_User->Size = System::Drawing::Size(271, 29);
			this->TB_User->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(31, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Pasword";
			// 
			// TB_Pasword
			// 
			this->TB_Pasword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TB_Pasword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_Pasword->Location = System::Drawing::Point(140, 188);
			this->TB_Pasword->Name = L"TB_Pasword";
			this->TB_Pasword->PasswordChar = '*';
			this->TB_Pasword->Size = System::Drawing::Size(271, 29);
			this->TB_Pasword->TabIndex = 1;
			// 
			// Btn_Cancel
			// 
			this->Btn_Cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Cancel->Location = System::Drawing::Point(289, 254);
			this->Btn_Cancel->Name = L"Btn_Cancel";
			this->Btn_Cancel->Size = System::Drawing::Size(122, 36);
			this->Btn_Cancel->TabIndex = 4;
			this->Btn_Cancel->Text = L"Cancel";
			this->Btn_Cancel->UseVisualStyleBackColor = true;
			this->Btn_Cancel->Click += gcnew System::EventHandler(this, &Login_Admin::Btn_Cancel_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(140, 254);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Enter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login_Admin::button1_Click);
			// 
			// Login_Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(427, 326);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Btn_Cancel);
			this->Controls->Add(this->TB_Pasword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TB_User);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Login_Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login_Admin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Btn_Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//capturamos los datos ingresados
		String^ user = this->TB_User->Text;
		String^ pasword = this->TB_Pasword->Text;
		//preguntamos si las cadena ingresada es 0
		if (user->Length == 0 || pasword->Length == 0) {
			//mostramos un msj en una caja de texto
			MessageBox::Show("por favor ingrese usuario y contraseña",
				"usuario o contraseña vacíos", MessageBoxButtons::OK);
		}
		else {
			//preguntamos si el usuario y contraseña estan correctos
			if (user == "user" && pasword == "Fiis2023") {
				TB_User->Text = "";
				TB_Pasword->Text = "";
				Consesionaria::Menu_Admin^ MB_Admin = gcnew Consesionaria::Menu_Admin();
				this->Visible = false;
				MB_Admin->ShowDialog();
				this->Visible = true;
			}
			else {
				//mensaje de usuario o conttraseña incorrectos
				MessageBox::Show("por favor ingrese usuario y contraseña válidos",
					"usuario o contraseña incorrectos", MessageBoxButtons::OK);
			}
			
		}
		
	}
};
}
