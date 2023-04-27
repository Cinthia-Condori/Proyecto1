#pragma once
#include "Registro_de_Compra.h"
#include "Lista_Vehiculos_Cliente.h"
namespace Consesionaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Menu_Cliente
	/// </summary>
	public ref class Menu_Cliente : public System::Windows::Forms::Form
	{
	public:
		Menu_Cliente(void)
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
		~Menu_Cliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Btn_Auto;
	private: System::Windows::Forms::Button^ Btn_Moto;


	private: System::Windows::Forms::Button^ Btn_Salir;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Menu_Cliente::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Btn_Auto = (gcnew System::Windows::Forms::Button());
			this->Btn_Moto = (gcnew System::Windows::Forms::Button());
			this->Btn_Salir = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(419, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BIENVENIDO";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Btn_Auto
			// 
			this->Btn_Auto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Auto->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Auto.Image")));
			this->Btn_Auto->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Auto->Location = System::Drawing::Point(89, 142);
			this->Btn_Auto->Name = L"Btn_Auto";
			this->Btn_Auto->Size = System::Drawing::Size(254, 40);
			this->Btn_Auto->TabIndex = 2;
			this->Btn_Auto->Text = L"Adquirir Automovil";
			this->Btn_Auto->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Auto->UseVisualStyleBackColor = true;
			this->Btn_Auto->Click += gcnew System::EventHandler(this, &Menu_Cliente::Btn_Vehiculo_Click);
			// 
			// Btn_Moto
			// 
			this->Btn_Moto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Moto->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Moto.Image")));
			this->Btn_Moto->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Moto->Location = System::Drawing::Point(89, 188);
			this->Btn_Moto->Name = L"Btn_Moto";
			this->Btn_Moto->Size = System::Drawing::Size(254, 42);
			this->Btn_Moto->TabIndex = 3;
			this->Btn_Moto->Text = L"Adquirir Motocicleta";
			this->Btn_Moto->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Moto->UseVisualStyleBackColor = true;
			this->Btn_Moto->Click += gcnew System::EventHandler(this, &Menu_Cliente::Btn_Moto_Click);
			// 
			// Btn_Salir
			// 
			this->Btn_Salir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Salir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Salir.Image")));
			this->Btn_Salir->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Salir->Location = System::Drawing::Point(162, 236);
			this->Btn_Salir->Name = L"Btn_Salir";
			this->Btn_Salir->Size = System::Drawing::Size(112, 33);
			this->Btn_Salir->TabIndex = 4;
			this->Btn_Salir->Text = L"Salir";
			this->Btn_Salir->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Salir->UseVisualStyleBackColor = true;
			this->Btn_Salir->Click += gcnew System::EventHandler(this, &Menu_Cliente::Btn_Salir_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(224, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Bienvenido a nuestra consecionaria.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"donde podra adquiri los mejores vehiculos";
			// 
			// Menu_Cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(443, 291);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Btn_Salir);
			this->Controls->Add(this->Btn_Moto);
			this->Controls->Add(this->Btn_Auto);
			this->Controls->Add(this->label1);
			this->Name = L"Menu_Cliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu_Cliente";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Btn_Salir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Btn_Vehiculo_Click(System::Object^ sender, System::EventArgs^ e) {
		int Tipo_Vehiculo = 1;//tipo 1 sera automovil
		Consesionaria::Lista_Vehiculos_Cliente^ ListaVehiculo = gcnew Consesionaria::Lista_Vehiculos_Cliente(Tipo_Vehiculo);
		this->Visible = false;		
		ListaVehiculo->ShowDialog();
		this->Visible = true;
	}
	private: System::Void Btn_Moto_Click(System::Object^ sender, System::EventArgs^ e) {
		int Tipo_Vehiculo = 2;//tipo 1 seraautomovil
		Consesionaria::Lista_Vehiculos_Cliente^ ListaVehiculo = gcnew Consesionaria::Lista_Vehiculos_Cliente(Tipo_Vehiculo);
		this->Visible = false;
		ListaVehiculo->ShowDialog();
		this->Visible = true;
	}
};
}
