#pragma once
#include "Almacen_Motos_Admin.h"
#include "Registro_Clientes_Admin.h"
namespace Consesionaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Menu_Admin
	/// </summary>
	public ref class Menu_Admin : public System::Windows::Forms::Form
	{
	public:
		Menu_Admin(void)
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
		~Menu_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Btn_Almacen_Motocicleta;
	protected:

	private: System::Windows::Forms::Button^ Btn_ListClientes;
	private: System::Windows::Forms::Button^ Btn_Salir;
	private: System::Windows::Forms::Button^ Btn_Almacen_Automoviles;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Menu_Admin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Btn_Almacen_Motocicleta = (gcnew System::Windows::Forms::Button());
			this->Btn_ListClientes = (gcnew System::Windows::Forms::Button());
			this->Btn_Salir = (gcnew System::Windows::Forms::Button());
			this->Btn_Almacen_Automoviles = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(356, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenido";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Btn_Almacen_Motocicleta
			// 
			this->Btn_Almacen_Motocicleta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_Almacen_Motocicleta->Location = System::Drawing::Point(69, 102);
			this->Btn_Almacen_Motocicleta->Name = L"Btn_Almacen_Motocicleta";
			this->Btn_Almacen_Motocicleta->Size = System::Drawing::Size(255, 40);
			this->Btn_Almacen_Motocicleta->TabIndex = 1;
			this->Btn_Almacen_Motocicleta->Text = L"Almacen de Motocicletas";
			this->Btn_Almacen_Motocicleta->UseVisualStyleBackColor = true;
			this->Btn_Almacen_Motocicleta->Click += gcnew System::EventHandler(this, &Menu_Admin::Btn_Almacen_Click);
			// 
			// Btn_ListClientes
			// 
			this->Btn_ListClientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_ListClientes->Location = System::Drawing::Point(69, 191);
			this->Btn_ListClientes->Name = L"Btn_ListClientes";
			this->Btn_ListClientes->Size = System::Drawing::Size(255, 36);
			this->Btn_ListClientes->TabIndex = 2;
			this->Btn_ListClientes->Text = L"Lista de clientes";
			this->Btn_ListClientes->UseVisualStyleBackColor = true;
			this->Btn_ListClientes->Click += gcnew System::EventHandler(this, &Menu_Admin::Btn_ListClientes_Click);
			// 
			// Btn_Salir
			// 
			this->Btn_Salir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Salir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Salir.Image")));
			this->Btn_Salir->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Salir->Location = System::Drawing::Point(142, 233);
			this->Btn_Salir->Name = L"Btn_Salir";
			this->Btn_Salir->Size = System::Drawing::Size(108, 40);
			this->Btn_Salir->TabIndex = 3;
			this->Btn_Salir->Text = L"Salir";
			this->Btn_Salir->UseVisualStyleBackColor = true;
			this->Btn_Salir->Click += gcnew System::EventHandler(this, &Menu_Admin::Btn_Salir_Click);
			// 
			// Btn_Almacen_Automoviles
			// 
			this->Btn_Almacen_Automoviles->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_Almacen_Automoviles->Location = System::Drawing::Point(69, 148);
			this->Btn_Almacen_Automoviles->Name = L"Btn_Almacen_Automoviles";
			this->Btn_Almacen_Automoviles->Size = System::Drawing::Size(255, 37);
			this->Btn_Almacen_Automoviles->TabIndex = 4;
			this->Btn_Almacen_Automoviles->Text = L"Almacen de Automoviles";
			this->Btn_Almacen_Automoviles->UseVisualStyleBackColor = true;
			this->Btn_Almacen_Automoviles->Click += gcnew System::EventHandler(this, &Menu_Admin::Btn_Almacen_Automoviles_Click);
			// 
			// Menu_Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 307);
			this->Controls->Add(this->Btn_Almacen_Automoviles);
			this->Controls->Add(this->Btn_Salir);
			this->Controls->Add(this->Btn_ListClientes);
			this->Controls->Add(this->Btn_Almacen_Motocicleta);
			this->Controls->Add(this->label1);
			this->Name = L"Menu_Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu_Admin";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Btn_Salir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void Btn_Almacen_Click(System::Object^ sender, System::EventArgs^ e) {
		int Tipo_Vehiculo = 1;//tipo 1 sera Motocicleta
		Consesionaria::Almacen_Motos_Admin^ Almacen = gcnew Consesionaria::Almacen_Motos_Admin(Tipo_Vehiculo);
		this->Visible = false;
		Almacen->ShowDialog();
		this->Visible = true;

	}
	private: System::Void Btn_Almacen_Automoviles_Click(System::Object^ sender, System::EventArgs^ e) {
		int Tipo_Vehiculo = 2;//tipo 1 sera Motocicleta
		Consesionaria::Almacen_Motos_Admin^ Almacen = gcnew Consesionaria::Almacen_Motos_Admin(Tipo_Vehiculo);
		this->Visible = false;
		Almacen->ShowDialog();
		this->Visible = true;
	}
	private: System::Void Btn_ListClientes_Click(System::Object^ sender, System::EventArgs^ e) {
		Consesionaria::Registro_Clientes_Admin^ Lista_Clientes = gcnew Consesionaria::Registro_Clientes_Admin();
		this->Visible = false;
		Lista_Clientes->ShowDialog();
		this->Visible = true;
	}
	
};
}
