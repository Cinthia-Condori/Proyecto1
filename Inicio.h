#pragma once
#include "Login_Admin.h"
#include "Menu_Admin.h"
#include "Menu_Cliente.h"
namespace Consesionaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
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
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ Btn_admin;
	private: System::Windows::Forms::Button^ Btn_Cliente;
	private: System::Windows::Forms::Button^ Btn_Salir;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Btn_admin = (gcnew System::Windows::Forms::Button());
			this->Btn_Cliente = (gcnew System::Windows::Forms::Button());
			this->Btn_Salir = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(79, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Consecionaria \"XYZ\"";
			// 
			// Btn_admin
			// 
			this->Btn_admin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_admin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_admin.Image")));
			this->Btn_admin->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_admin->Location = System::Drawing::Point(128, 125);
			this->Btn_admin->Name = L"Btn_admin";
			this->Btn_admin->Size = System::Drawing::Size(168, 32);
			this->Btn_admin->TabIndex = 1;
			this->Btn_admin->Text = L"Admin";
			this->Btn_admin->UseVisualStyleBackColor = true;
			this->Btn_admin->Click += gcnew System::EventHandler(this, &Inicio::Btn_admin_Click);
			// 
			// Btn_Cliente
			// 
			this->Btn_Cliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Cliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Cliente.Image")));
			this->Btn_Cliente->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Cliente->Location = System::Drawing::Point(128, 184);
			this->Btn_Cliente->Name = L"Btn_Cliente";
			this->Btn_Cliente->Size = System::Drawing::Size(168, 34);
			this->Btn_Cliente->TabIndex = 2;
			this->Btn_Cliente->Text = L"Cliente";
			this->Btn_Cliente->UseVisualStyleBackColor = true;
			this->Btn_Cliente->Click += gcnew System::EventHandler(this, &Inicio::Btn_Cliente_Click);
			// 
			// Btn_Salir
			// 
			this->Btn_Salir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Salir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Salir.Image")));
			this->Btn_Salir->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Salir->Location = System::Drawing::Point(128, 245);
			this->Btn_Salir->Name = L"Btn_Salir";
			this->Btn_Salir->Size = System::Drawing::Size(168, 34);
			this->Btn_Salir->TabIndex = 3;
			this->Btn_Salir->Text = L"Salir";
			this->Btn_Salir->UseVisualStyleBackColor = true;
			this->Btn_Salir->Click += gcnew System::EventHandler(this, &Inicio::Btn_Salir_Click);
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(403, 320);
			this->Controls->Add(this->Btn_Salir);
			this->Controls->Add(this->Btn_Cliente);
			this->Controls->Add(this->Btn_admin);
			this->Controls->Add(this->label1);
			this->Name = L"Inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Btn_Salir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Btn_admin_Click(System::Object^ sender, System::EventArgs^ e) {
		Consesionaria::Login_Admin^ login = gcnew Consesionaria::Login_Admin();
		this->Visible=false;
		login->ShowDialog();
		this->Visible = true;
	}
	private: System::Void Btn_Cliente_Click(System::Object^ sender, System::EventArgs^ e) {
		Consesionaria::Menu_Cliente^ Menu_Cliente = gcnew Consesionaria::Menu_Cliente();
		this->Visible = false;
		Menu_Cliente->ShowDialog();
		this->Visible = true;
	}
};
}
