#pragma once
#include "Vehiculo.h"
#include "Persona.h";
#include "Inicio.h"
namespace Consesionaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Registro_de_cliente
	/// </summary>
	public ref class Registro_de_Compra : public System::Windows::Forms::Form
	{
	public:
		Persona Cliente;
		bool validar; //usamos para validar que las casillas esten llenas
	public:
		Registro_de_Compra(String^tipo, String^color, String^marca, String^modelo, String^anio, String^precio)
		{
			InitializeComponent();
			this->Cliente.Vehiculo.Tipo = tipo;
			this->Cliente.Vehiculo.color = color;
			this->Cliente.Vehiculo.marca = marca;
			this->Cliente.Vehiculo.modelo = modelo;
			this->Cliente.Vehiculo.anio = anio;
			this->Cliente.Vehiculo.precio= precio;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Registro_de_Compra()
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
	private: System::Windows::Forms::ComboBox^ Cb_Genero;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ Tb_Nombre;
	private: System::Windows::Forms::TextBox^ Tb_Paterno;
	private: System::Windows::Forms::TextBox^ Tb_Materno;
	private: System::Windows::Forms::TextBox^ Tb_Direccion;
	private: System::Windows::Forms::TextBox^ Tb_Dni;
	private: System::Windows::Forms::TextBox^ Tb_Edad;
	private: System::Windows::Forms::TextBox^ Tb_Telefono;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ Lb_Tipo;
	private: System::Windows::Forms::Label^ Lb_Color;
	private: System::Windows::Forms::Label^ Lb_Marca;
	private: System::Windows::Forms::Label^ Lb_Modelo;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ Lb_Anio;
	private: System::Windows::Forms::Label^ Lb_Precio;
	private: System::Windows::Forms::Button^ Btn_Registar_Compra;
	private: System::Windows::Forms::ErrorProvider^ errorProvider_Validar;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registro_de_Compra::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Cb_Genero = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Tb_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Paterno = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Materno = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Direccion = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Dni = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Edad = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Telefono = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Lb_Tipo = (gcnew System::Windows::Forms::Label());
			this->Lb_Color = (gcnew System::Windows::Forms::Label());
			this->Lb_Marca = (gcnew System::Windows::Forms::Label());
			this->Lb_Modelo = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Lb_Anio = (gcnew System::Windows::Forms::Label());
			this->Lb_Precio = (gcnew System::Windows::Forms::Label());
			this->Btn_Registar_Compra = (gcnew System::Windows::Forms::Button());
			this->errorProvider_Validar = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider_Validar))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(951, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"REGISTRO DE COMPRA";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(311, 147);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Dni";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 202);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ap. Paterno";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 256);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ap. Matero";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(311, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 20);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Edad";
			// 
			// Cb_Genero
			// 
			this->Cb_Genero->FormattingEnabled = true;
			this->Cb_Genero->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->Cb_Genero->Location = System::Drawing::Point(402, 248);
			this->Cb_Genero->Name = L"Cb_Genero";
			this->Cb_Genero->Size = System::Drawing::Size(128, 28);
			this->Cb_Genero->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(311, 256);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 20);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Genero";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(32, 303);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 20);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Direccion";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(311, 303);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 20);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Teléfono";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(173, 93);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(171, 20);
			this->label10->TabIndex = 10;
			this->label10->Text = L"DATOS DEL CLIENTE";
			// 
			// Tb_Nombre
			// 
			this->Tb_Nombre->Location = System::Drawing::Point(155, 141);
			this->Tb_Nombre->Name = L"Tb_Nombre";
			this->Tb_Nombre->Size = System::Drawing::Size(123, 26);
			this->Tb_Nombre->TabIndex = 1;
			// 
			// Tb_Paterno
			// 
			this->Tb_Paterno->Location = System::Drawing::Point(155, 196);
			this->Tb_Paterno->Name = L"Tb_Paterno";
			this->Tb_Paterno->Size = System::Drawing::Size(123, 26);
			this->Tb_Paterno->TabIndex = 2;
			// 
			// Tb_Materno
			// 
			this->Tb_Materno->Location = System::Drawing::Point(155, 248);
			this->Tb_Materno->Name = L"Tb_Materno";
			this->Tb_Materno->Size = System::Drawing::Size(123, 26);
			this->Tb_Materno->TabIndex = 3;
			// 
			// Tb_Direccion
			// 
			this->Tb_Direccion->Location = System::Drawing::Point(155, 297);
			this->Tb_Direccion->Name = L"Tb_Direccion";
			this->Tb_Direccion->Size = System::Drawing::Size(123, 26);
			this->Tb_Direccion->TabIndex = 4;
			// 
			// Tb_Dni
			// 
			this->Tb_Dni->Location = System::Drawing::Point(402, 144);
			this->Tb_Dni->Name = L"Tb_Dni";
			this->Tb_Dni->Size = System::Drawing::Size(128, 26);
			this->Tb_Dni->TabIndex = 5;
			// 
			// Tb_Edad
			// 
			this->Tb_Edad->Location = System::Drawing::Point(402, 196);
			this->Tb_Edad->Name = L"Tb_Edad";
			this->Tb_Edad->Size = System::Drawing::Size(128, 26);
			this->Tb_Edad->TabIndex = 6;
			// 
			// Tb_Telefono
			// 
			this->Tb_Telefono->Location = System::Drawing::Point(402, 297);
			this->Tb_Telefono->Name = L"Tb_Telefono";
			this->Tb_Telefono->Size = System::Drawing::Size(128, 26);
			this->Tb_Telefono->TabIndex = 8;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(622, 93);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(187, 20);
			this->label11->TabIndex = 18;
			this->label11->Text = L"DATOS DEL VEHICULO";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(588, 150);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 20);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Tipo";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(588, 202);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 20);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Color";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(588, 256);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 20);
			this->label14->TabIndex = 21;
			this->label14->Text = L"Marca";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(588, 303);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 20);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Modelo";
			// 
			// Lb_Tipo
			// 
			this->Lb_Tipo->Location = System::Drawing::Point(666, 144);
			this->Lb_Tipo->Name = L"Lb_Tipo";
			this->Lb_Tipo->Size = System::Drawing::Size(124, 23);
			this->Lb_Tipo->TabIndex = 23;
			this->Lb_Tipo->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Lb_Color
			// 
			this->Lb_Color->Location = System::Drawing::Point(670, 196);
			this->Lb_Color->Name = L"Lb_Color";
			this->Lb_Color->Size = System::Drawing::Size(120, 26);
			this->Lb_Color->TabIndex = 24;
			this->Lb_Color->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Lb_Marca
			// 
			this->Lb_Marca->Location = System::Drawing::Point(674, 248);
			this->Lb_Marca->Name = L"Lb_Marca";
			this->Lb_Marca->Size = System::Drawing::Size(116, 26);
			this->Lb_Marca->TabIndex = 25;
			this->Lb_Marca->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// Lb_Modelo
			// 
			this->Lb_Modelo->Location = System::Drawing::Point(674, 297);
			this->Lb_Modelo->Name = L"Lb_Modelo";
			this->Lb_Modelo->Size = System::Drawing::Size(116, 26);
			this->Lb_Modelo->TabIndex = 26;
			this->Lb_Modelo->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(796, 150);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 20);
			this->label16->TabIndex = 27;
			this->label16->Text = L"Año";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(796, 199);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(70, 20);
			this->label17->TabIndex = 28;
			this->label17->Text = L"Precio $.";
			// 
			// Lb_Anio
			// 
			this->Lb_Anio->Location = System::Drawing::Point(873, 144);
			this->Lb_Anio->Name = L"Lb_Anio";
			this->Lb_Anio->Size = System::Drawing::Size(80, 26);
			this->Lb_Anio->TabIndex = 29;
			this->Lb_Anio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Lb_Precio
			// 
			this->Lb_Precio->Location = System::Drawing::Point(873, 196);
			this->Lb_Precio->Name = L"Lb_Precio";
			this->Lb_Precio->Size = System::Drawing::Size(80, 23);
			this->Lb_Precio->TabIndex = 30;
			this->Lb_Precio->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Btn_Registar_Compra
			// 
			this->Btn_Registar_Compra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_Registar_Compra->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Registar_Compra.Image")));
			this->Btn_Registar_Compra->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Registar_Compra->Location = System::Drawing::Point(356, 365);
			this->Btn_Registar_Compra->Name = L"Btn_Registar_Compra";
			this->Btn_Registar_Compra->Size = System::Drawing::Size(216, 44);
			this->Btn_Registar_Compra->TabIndex = 9;
			this->Btn_Registar_Compra->Text = L"Realizar Pago";
			this->Btn_Registar_Compra->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Registar_Compra->UseVisualStyleBackColor = true;
			this->Btn_Registar_Compra->Click += gcnew System::EventHandler(this, &Registro_de_Compra::Btn_Registar_Compra_Click);
			// 
			// errorProvider_Validar
			// 
			this->errorProvider_Validar->ContainerControl = this;
			// 
			// Registro_de_Compra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->ClientSize = System::Drawing::Size(977, 421);
			this->Controls->Add(this->Btn_Registar_Compra);
			this->Controls->Add(this->Lb_Precio);
			this->Controls->Add(this->Lb_Anio);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Lb_Modelo);
			this->Controls->Add(this->Lb_Marca);
			this->Controls->Add(this->Lb_Color);
			this->Controls->Add(this->Lb_Tipo);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Tb_Telefono);
			this->Controls->Add(this->Tb_Edad);
			this->Controls->Add(this->Tb_Dni);
			this->Controls->Add(this->Tb_Direccion);
			this->Controls->Add(this->Tb_Materno);
			this->Controls->Add(this->Tb_Paterno);
			this->Controls->Add(this->Tb_Nombre);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Cb_Genero);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Registro_de_Compra";
			this->Text = L"Registro_de_cliente";
			this->Load += gcnew System::EventHandler(this, &Registro_de_Compra::Registro_de_Compra_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider_Validar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void Registro_de_Compra_Load(System::Object^ sender, System::EventArgs^ e) {
		Lb_Tipo->Text = Cliente.Vehiculo.Tipo;
		Lb_Color->Text = Cliente.Vehiculo.color;
		Lb_Marca->Text = Cliente.Vehiculo.marca;
		Lb_Modelo->Text = Cliente.Vehiculo.modelo;
		Lb_Anio->Text = Cliente.Vehiculo.anio;
		Lb_Precio->Text = Cliente.Vehiculo.precio;
	}
	private: System::Void Btn_Registar_Compra_Click(System::Object^ sender, System::EventArgs^ e) {
		Cliente.Nombre = Tb_Nombre->Text;
		Cliente.DNI = Tb_Dni->Text;
		Cliente.ApPaterno = Tb_Paterno->Text;
		Cliente.ApMaterno = Tb_Materno->Text;
		Cliente.Edad = Tb_Edad->Text;
		Cliente.Genero = Cb_Genero->Text;
		Cliente.Nro_Cel = Tb_Telefono->Text;
		Cliente.Direccion = Tb_Direccion->Text;

		//validamos que las casillas esten llenas
		validar = ValidarDatos(Cliente.Nombre, Cliente.DNI, Cliente.ApPaterno, Cliente.ApMaterno, Cliente.Edad,
			Cliente.Genero, Cliente.Nro_Cel, Cliente.Direccion);

		if (validar == true) {
			GuardarDatos(Cliente.Nombre, Cliente.DNI, Cliente.ApPaterno, Cliente.ApMaterno, Cliente.Edad,
				Cliente.Genero, Cliente.Nro_Cel, Cliente.Direccion, Cliente.Vehiculo.Tipo, Cliente.Vehiculo.color,
				Cliente.Vehiculo.marca, Cliente.Vehiculo.modelo, Cliente.Vehiculo.anio, Cliente.Vehiculo.precio);
			MessageBox::Show("Pago realizado correctamente", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
			this->Close();
		}
	}
		//validar que las casillas de datos estén rellenados
		bool ValidarDatos(String ^ nombre, String ^ dni, String ^ paterno, String ^ materno, String ^ edad, String ^ genero, String ^ telefono, String ^ direccion) {

			if (nombre == "") {
				MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				errorProvider_Validar->SetError(Tb_Nombre, "Ingrese NOMBRE del cliente");
				validar = false;
			}
			else if (dni == "") {
				MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				errorProvider_Validar->SetError(Tb_Dni, "Ingrese DNI del cliente");
				validar = false;
			}
			else if (paterno == "") {
				MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				errorProvider_Validar->SetError(Tb_Paterno, "Ingrese APELLIDO PATERNO del cliente");
				validar = false;
			}
			else if (materno == "") {
				MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				errorProvider_Validar->SetError(Tb_Materno, "Ingrese APELLIDO MATERNO del cliente");
				validar = false;
			}
			else if (edad == "") {
				MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				errorProvider_Validar->SetError(Tb_Edad, "Ingrese EDAD del cliente");
				validar = false;
			}
			else if (genero == "") {
				MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				errorProvider_Validar->SetError(Cb_Genero, "Ingrese GENERO del cliente");
				validar = false;
			}
			else if (telefono == "") {
				MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				errorProvider_Validar->SetError(Tb_Telefono, "Ingrese TELEFONO del cliente");
				validar = false;
			}
			else if (direccion == "") {
				MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				errorProvider_Validar->SetError(Tb_Direccion, "Ingrese DIRECCIÓN del cliente");
				validar = false;
			}
			else {
				validar = true;
				errorProvider_Validar->SetError(Tb_Nombre, "");
				errorProvider_Validar->SetError(Tb_Paterno, "");
				errorProvider_Validar->SetError(Tb_Materno, "");
				errorProvider_Validar->SetError(Tb_Edad, "");
				errorProvider_Validar->SetError(Tb_Dni, "");
				errorProvider_Validar->SetError(Cb_Genero, "");
				errorProvider_Validar->SetError(Tb_Telefono, "");
				errorProvider_Validar->SetError(Tb_Direccion, "");
			}
			return validar;
		}

		void GuardarDatos(String^ nombre, String^ dni, String^ paterno, 
			String^ materno, String^ edad, String^ genero, String^ telefono, 
			String^ direccion, String^ tipo, String^ color, String^ marca, 
			String^ modelo, String^ anio, String^ precio) {
			//esta funcion pregunta si el archivo txt existe, sy existe agrega debajo, sino existe, lo crea
			System::IO::StreamWriter^ Archivo = gcnew System::IO::StreamWriter("Clientes.txt",true);
			String^ Linea = "";
			if (File::Exists("Clientes.txt")) {
					//guardando datos del cliente en el txt
					Archivo->WriteLine(dni);
					Archivo->WriteLine(nombre);
					Archivo->WriteLine(paterno);
					Archivo->WriteLine(materno);
					Archivo->WriteLine(edad);
					Archivo->WriteLine(genero);
					Archivo->WriteLine(telefono);
					Archivo->WriteLine(direccion);
					//guardando datos del vehiculo comprado
					Archivo->WriteLine(tipo);
					Archivo->WriteLine(color);
					Archivo->WriteLine(marca);
					Archivo->WriteLine(modelo);
					Archivo->WriteLine(anio);
					Archivo->WriteLine(precio);
			}
			Archivo->Close();

		}
};
}
