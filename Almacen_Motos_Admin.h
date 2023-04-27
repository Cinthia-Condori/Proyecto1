#pragma once
#include "Vehiculo.h"
#include <string>
#include <string.h>
namespace Consesionaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	
	/// <summary>
	/// Resumen de Almacen_Motos_Admin
	/// </summary>
	public ref class Almacen_Motos_Admin : public System::Windows::Forms::Form
	{
	
	public:
		Vehiculo Vehiculo_Provicional;
		bool validar;
		int Tipo_Almacen;

	public:
		int Fila_Actual;
	public:
		Almacen_Motos_Admin(int tipo_Almacen)
		{
			InitializeComponent();
			Tipo_Almacen = tipo_Almacen;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Almacen_Motos_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Lista_Vehiculos;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Color;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Marca;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Modelo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Anio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::Label^ Lb_Titulo;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Tb_Tipo;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Tb_Color;
	private: System::Windows::Forms::TextBox^ Tb_Marca;
	private: System::Windows::Forms::TextBox^ Tb_Modelo;
	private: System::Windows::Forms::TextBox^ Tb_Anio;
	private: System::Windows::Forms::TextBox^ Tb_Precio;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ Btn_Agregar;
	private: System::Windows::Forms::Button^ Btn_Modificar;

	private: System::Windows::Forms::Button^ Btn_Guardar;
	private: System::Windows::Forms::Button^ Btn_Eliminar;
	private: System::Windows::Forms::Button^ Btn_Volver;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Almacen_Motos_Admin::typeid));
			this->Lista_Vehiculos = (gcnew System::Windows::Forms::DataGridView());
			this->Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Marca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Modelo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Anio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Lb_Titulo = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Tb_Tipo = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Tb_Color = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Marca = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Modelo = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Anio = (gcnew System::Windows::Forms::TextBox());
			this->Tb_Precio = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Btn_Agregar = (gcnew System::Windows::Forms::Button());
			this->Btn_Modificar = (gcnew System::Windows::Forms::Button());
			this->Btn_Guardar = (gcnew System::Windows::Forms::Button());
			this->Btn_Eliminar = (gcnew System::Windows::Forms::Button());
			this->Btn_Volver = (gcnew System::Windows::Forms::Button());
			this->errorProvider_Validar = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lista_Vehiculos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider_Validar))->BeginInit();
			this->SuspendLayout();
			// 
			// Lista_Vehiculos
			// 
			this->Lista_Vehiculos->AllowUserToAddRows = false;
			this->Lista_Vehiculos->AllowUserToDeleteRows = false;
			this->Lista_Vehiculos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Lista_Vehiculos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Tipo,
					this->Color, this->Marca, this->Modelo, this->Anio, this->Precio
			});
			this->Lista_Vehiculos->Location = System::Drawing::Point(12, 230);
			this->Lista_Vehiculos->Name = L"Lista_Vehiculos";
			this->Lista_Vehiculos->ReadOnly = true;
			this->Lista_Vehiculos->Size = System::Drawing::Size(646, 206);
			this->Lista_Vehiculos->TabIndex = 0;
			this->Lista_Vehiculos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Almacen_Motos_Admin::Lista_Motos_CellContentClick);
			// 
			// Tipo
			// 
			this->Tipo->HeaderText = L"Tipo";
			this->Tipo->Name = L"Tipo";
			this->Tipo->ReadOnly = true;
			// 
			// Color
			// 
			this->Color->HeaderText = L"Color";
			this->Color->Name = L"Color";
			this->Color->ReadOnly = true;
			// 
			// Marca
			// 
			this->Marca->HeaderText = L"Marca";
			this->Marca->Name = L"Marca";
			this->Marca->ReadOnly = true;
			// 
			// Modelo
			// 
			this->Modelo->HeaderText = L"Modelo";
			this->Modelo->Name = L"Modelo";
			this->Modelo->ReadOnly = true;
			// 
			// Anio
			// 
			this->Anio->HeaderText = L"Año";
			this->Anio->Name = L"Anio";
			this->Anio->ReadOnly = true;
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->Name = L"Precio";
			this->Precio->ReadOnly = true;
			// 
			// Lb_Titulo
			// 
			this->Lb_Titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_Titulo->Location = System::Drawing::Point(-8, 9);
			this->Lb_Titulo->Name = L"Lb_Titulo";
			this->Lb_Titulo->Size = System::Drawing::Size(648, 27);
			this->Lb_Titulo->TabIndex = 1;
			this->Lb_Titulo->Text = L"Titulo";
			this->Lb_Titulo->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Tipo";
			// 
			// Tb_Tipo
			// 
			this->Tb_Tipo->AutoSize = true;
			this->Tb_Tipo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tb_Tipo->Location = System::Drawing::Point(95, 65);
			this->Tb_Tipo->Name = L"Tb_Tipo";
			this->Tb_Tipo->Size = System::Drawing::Size(121, 24);
			this->Tb_Tipo->TabIndex = 3;
			this->Tb_Tipo->Text = L"tipo_vehiculo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Color";
			// 
			// Tb_Color
			// 
			this->Tb_Color->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tb_Color->Location = System::Drawing::Point(99, 121);
			this->Tb_Color->Name = L"Tb_Color";
			this->Tb_Color->Size = System::Drawing::Size(101, 29);
			this->Tb_Color->TabIndex = 1;
			// 
			// Tb_Marca
			// 
			this->Tb_Marca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tb_Marca->Location = System::Drawing::Point(340, 62);
			this->Tb_Marca->Name = L"Tb_Marca";
			this->Tb_Marca->Size = System::Drawing::Size(100, 29);
			this->Tb_Marca->TabIndex = 2;
			// 
			// Tb_Modelo
			// 
			this->Tb_Modelo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tb_Modelo->Location = System::Drawing::Point(340, 123);
			this->Tb_Modelo->Name = L"Tb_Modelo";
			this->Tb_Modelo->Size = System::Drawing::Size(100, 29);
			this->Tb_Modelo->TabIndex = 3;
			// 
			// Tb_Anio
			// 
			this->Tb_Anio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tb_Anio->Location = System::Drawing::Point(558, 64);
			this->Tb_Anio->Name = L"Tb_Anio";
			this->Tb_Anio->Size = System::Drawing::Size(100, 29);
			this->Tb_Anio->TabIndex = 4;
			// 
			// Tb_Precio
			// 
			this->Tb_Precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Tb_Precio->Location = System::Drawing::Point(558, 123);
			this->Tb_Precio->Name = L"Tb_Precio";
			this->Tb_Precio->Size = System::Drawing::Size(100, 29);
			this->Tb_Precio->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(259, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 24);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Marca";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(259, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 24);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Modelo";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(464, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 24);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Año Fab.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(468, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 24);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Precio $.";
			// 
			// Btn_Agregar
			// 
			this->Btn_Agregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Agregar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Agregar.Image")));
			this->Btn_Agregar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Agregar->Location = System::Drawing::Point(28, 178);
			this->Btn_Agregar->Name = L"Btn_Agregar";
			this->Btn_Agregar->Size = System::Drawing::Size(105, 33);
			this->Btn_Agregar->TabIndex = 6;
			this->Btn_Agregar->Text = L"Agregar";
			this->Btn_Agregar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Agregar->UseVisualStyleBackColor = true;
			this->Btn_Agregar->Click += gcnew System::EventHandler(this, &Almacen_Motos_Admin::Btn_Agregar_Click);
			// 
			// Btn_Modificar
			// 
			this->Btn_Modificar->Enabled = false;
			this->Btn_Modificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Modificar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Modificar.Image")));
			this->Btn_Modificar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Modificar->Location = System::Drawing::Point(162, 179);
			this->Btn_Modificar->Name = L"Btn_Modificar";
			this->Btn_Modificar->Size = System::Drawing::Size(102, 32);
			this->Btn_Modificar->TabIndex = 7;
			this->Btn_Modificar->Text = L"Modificar";
			this->Btn_Modificar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Modificar->UseVisualStyleBackColor = true;
			this->Btn_Modificar->Click += gcnew System::EventHandler(this, &Almacen_Motos_Admin::Btn_Modifcar_Click);
			// 
			// Btn_Guardar
			// 
			this->Btn_Guardar->Enabled = false;
			this->Btn_Guardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Guardar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Guardar.Image")));
			this->Btn_Guardar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Guardar->Location = System::Drawing::Point(295, 179);
			this->Btn_Guardar->Name = L"Btn_Guardar";
			this->Btn_Guardar->Size = System::Drawing::Size(100, 32);
			this->Btn_Guardar->TabIndex = 8;
			this->Btn_Guardar->Text = L"Guardar";
			this->Btn_Guardar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Guardar->UseVisualStyleBackColor = true;
			this->Btn_Guardar->Click += gcnew System::EventHandler(this, &Almacen_Motos_Admin::Btn_Guardar_Click);
			// 
			// Btn_Eliminar
			// 
			this->Btn_Eliminar->Enabled = false;
			this->Btn_Eliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Eliminar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Eliminar.Image")));
			this->Btn_Eliminar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Eliminar->Location = System::Drawing::Point(436, 179);
			this->Btn_Eliminar->Name = L"Btn_Eliminar";
			this->Btn_Eliminar->Size = System::Drawing::Size(98, 32);
			this->Btn_Eliminar->TabIndex = 9;
			this->Btn_Eliminar->Text = L"Eliminar";
			this->Btn_Eliminar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Eliminar->UseVisualStyleBackColor = true;
			this->Btn_Eliminar->Click += gcnew System::EventHandler(this, &Almacen_Motos_Admin::Btn_Eliminar_Click);
			// 
			// Btn_Volver
			// 
			this->Btn_Volver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Volver->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Volver.Image")));
			this->Btn_Volver->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Volver->Location = System::Drawing::Point(573, 179);
			this->Btn_Volver->Name = L"Btn_Volver";
			this->Btn_Volver->Size = System::Drawing::Size(85, 32);
			this->Btn_Volver->TabIndex = 10;
			this->Btn_Volver->Text = L"Volver";
			this->Btn_Volver->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Volver->UseVisualStyleBackColor = true;
			this->Btn_Volver->Click += gcnew System::EventHandler(this, &Almacen_Motos_Admin::Btn_Volver_Click);
			// 
			// errorProvider_Validar
			// 
			this->errorProvider_Validar->ContainerControl = this;
			// 
			// Almacen_Motos_Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 448);
			this->Controls->Add(this->Btn_Volver);
			this->Controls->Add(this->Btn_Eliminar);
			this->Controls->Add(this->Btn_Guardar);
			this->Controls->Add(this->Btn_Modificar);
			this->Controls->Add(this->Btn_Agregar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Tb_Precio);
			this->Controls->Add(this->Tb_Anio);
			this->Controls->Add(this->Tb_Modelo);
			this->Controls->Add(this->Tb_Marca);
			this->Controls->Add(this->Tb_Color);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Tb_Tipo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Lb_Titulo);
			this->Controls->Add(this->Lista_Vehiculos);
			this->Name = L"Almacen_Motos_Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Almacen_Motos_Admin";
			this->Load += gcnew System::EventHandler(this, &Almacen_Motos_Admin::Almacen_Motos_Admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lista_Vehiculos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider_Validar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Almacen_Motos_Admin_Load(System::Object^ sender, System::EventArgs^ e) {
		if (Tipo_Almacen == 1) {
			Lb_Titulo->Text = "LISTA DE MOTOCICLETAS";
			Tb_Tipo->Text = "Motocicleta";
		}
		else if (Tipo_Almacen == 2) {
			Lb_Titulo->Text = "LISTA DE AUTOMOVILES";
			Tb_Tipo->Text = "Automovil";
		}
		CargarDatos(Tipo_Almacen);
	}

	private: System::Void Btn_Agregar_Click(System::Object^ sender, System::EventArgs^ e) {
		Vehiculo_Provicional.Tipo = Tb_Tipo->Text;
		Vehiculo_Provicional.color = Tb_Color->Text;
		Vehiculo_Provicional.marca = Tb_Marca->Text;
		Vehiculo_Provicional.modelo = Tb_Modelo->Text;
		Vehiculo_Provicional.anio = Tb_Anio->Text;
		Vehiculo_Provicional.precio = Tb_Precio->Text;

		validar = ValidarDatos(Vehiculo_Provicional.color,
			Vehiculo_Provicional.marca,
			Vehiculo_Provicional.modelo,
			Vehiculo_Provicional.anio,
			Vehiculo_Provicional.precio);

		if (validar == true) {
			MessageBox::Show("Datos Guardados Correctamente", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
			Lista_Vehiculos->Rows->Add(Vehiculo_Provicional.Tipo, Vehiculo_Provicional.color, Vehiculo_Provicional.marca, Vehiculo_Provicional.modelo, Vehiculo_Provicional.anio, Vehiculo_Provicional.precio);
			GuardarDatos(Tipo_Almacen);
			Limpiar();
		}
	}
	
	private: System::Void Lista_Motos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		//CurrentRow->Index;esta funcion nos devuelve el numero de la fila que seleccionamos
		Fila_Actual = Lista_Vehiculos->CurrentRow->Index;
		Btn_Modificar->Enabled = true;
	}
	

	private: System::Void Btn_Modifcar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CurrentRow->Index;esta funcion nos devuelve el numero de la fila que seleccionamos
		Fila_Actual = Lista_Vehiculos->CurrentRow->Index;
		//pasamos los datos de la tabla **DataGridView** a los texbox (convertimos a cadena con el toString)

		Tb_Color->Text = Lista_Vehiculos->Rows[Fila_Actual]->Cells["Color"]->Value->ToString();
		Tb_Marca->Text = Lista_Vehiculos->Rows[Fila_Actual]->Cells["Marca"]->Value->ToString();
		Tb_Modelo->Text = Lista_Vehiculos->Rows[Fila_Actual]->Cells["Modelo"]->Value->ToString();
		Tb_Anio->Text = Lista_Vehiculos->Rows[Fila_Actual]->Cells["Anio"]->Value->ToString();
		Tb_Precio->Text = Lista_Vehiculos->Rows[Fila_Actual]->Cells["Precio"]->Value->ToString();
		Desactivar_Botones();
	}
	
	private: System::Void Btn_Guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Tipo_Almacen == 1) {
			Fila_Actual = Lista_Vehiculos->CurrentRow->Index;
			Vehiculo_Provicional.Tipo = "Motocicleta";
			Vehiculo_Provicional.color = Tb_Color->Text;
			Vehiculo_Provicional.marca = Tb_Marca->Text;
			Vehiculo_Provicional.modelo = Tb_Modelo->Text;
			Vehiculo_Provicional.anio = Tb_Anio->Text;
			Vehiculo_Provicional.precio = Tb_Precio->Text;
			//validamos que las casillas esten llenas
			validar = ValidarDatos(Vehiculo_Provicional.color,
				Vehiculo_Provicional.marca,
				Vehiculo_Provicional.modelo,
				Vehiculo_Provicional.anio,
				Vehiculo_Provicional.precio);

			if (validar == true) {
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Tipo"]->Value = Vehiculo_Provicional.Tipo;
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Color"]->Value = Vehiculo_Provicional.color;
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Marca"]->Value = Vehiculo_Provicional.marca;
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Modelo"]->Value = Vehiculo_Provicional.modelo;
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Anio"]->Value = Vehiculo_Provicional.anio;
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Precio"]->Value = Vehiculo_Provicional.precio;
				MessageBox::Show("Datos Modificados Correctamente", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				GuardarDatos(Tipo_Almacen);
				Activar_Botones();
				Limpiar();
			}
		}
		else if(Tipo_Almacen == 2) {
			Fila_Actual = Lista_Vehiculos->CurrentRow->Index;
			Vehiculo_Provicional.Tipo = "Automovil";
			Vehiculo_Provicional.color = Tb_Color->Text;
			Vehiculo_Provicional.marca = Tb_Marca->Text;
			Vehiculo_Provicional.modelo = Tb_Modelo->Text;
			Vehiculo_Provicional.anio = Tb_Anio->Text;
			Vehiculo_Provicional.precio = Tb_Precio->Text;
			//validamos que las casillas esten llenas
			validar = ValidarDatos(Vehiculo_Provicional.color,
				Vehiculo_Provicional.marca,
				Vehiculo_Provicional.modelo,
				Vehiculo_Provicional.anio,
				Vehiculo_Provicional.precio);

			if (validar == true) {
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Tipo"]->Value = Vehiculo_Provicional.Tipo;
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Color"]->Value = Vehiculo_Provicional.color;
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Marca"]->Value = Vehiculo_Provicional.marca;
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Modelo"]->Value = Vehiculo_Provicional.modelo;
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Anio"]->Value = Vehiculo_Provicional.anio;
				Lista_Vehiculos->Rows[Fila_Actual]->Cells["Precio"]->Value = Vehiculo_Provicional.precio;
				MessageBox::Show("Datos Modificados Correctamente", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				GuardarDatos(Tipo_Almacen);
				Activar_Botones();
				Limpiar();
			}
		}

	}
	private: System::Void Btn_Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
			//hacemos una condicion en caso responda que si y eliminamos
		if (MessageBox::Show("Desea eliminar???", "INFORMACION DEL SISTEMA", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			Fila_Actual = Lista_Vehiculos->CurrentRow->Index;
			Lista_Vehiculos->Rows->Remove(Lista_Vehiculos->Rows[Fila_Actual]);
			MessageBox::Show("Datos Eliminados Correctamente", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
			GuardarDatos(Tipo_Almacen);
			Activar_Botones();
			Limpiar();
		}
	}
	private: System::Void Btn_Volver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


			//validar que las casillas de datos estén rellenados
		   bool ValidarDatos(String^ color, String^ marca, String^ modelo, String^ anio, String^ precio) {

			   if (color == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Color, "Ingrese color del vehiculo");
				   validar = false;
			   }
			   else if (marca == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Marca, "Ingrese marca del vehiculo");
				   validar = false;
			   }
			   else if (modelo == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Modelo, "Ingrese modelo del vehiculo");
				   validar = false;
			   }
			   else if (anio == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Anio, "Ingrese anio de fabricaion del vehiculo");
				   validar = false;
			   }
			   else if (precio == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Precio, "Ingrese precio del vehiculo");
				   validar = false;
			   }
			   else {
				   validar = true;
				   errorProvider_Validar->SetError(Tb_Color, "");
				   errorProvider_Validar->SetError(Tb_Marca, "");
				   errorProvider_Validar->SetError(Tb_Modelo, "");
				   errorProvider_Validar->SetError(Tb_Anio, "");
				   errorProvider_Validar->SetError(Tb_Precio, "");
			   }

			   return validar;
		   }

		   //Funcion para limpiar los cuadros de texto (TextBox)
		   void Limpiar() {
			   Tb_Color->Text = "";
			   Tb_Marca->Text = "";
			   Tb_Marca->Text = "";
			   Tb_Modelo->Text = "";
			   Tb_Anio->Text = "";
			   Tb_Precio->Text = "";
		   }

		   //Activar y desactivar los botones
		   void Activar_Botones() {
			   Btn_Agregar->Enabled = true;
			   Btn_Modificar->Enabled = true;
			   Btn_Guardar->Enabled = false;			 
			   Btn_Eliminar->Enabled = false;
			   Btn_Volver->Enabled = true;
		   }
		   void Desactivar_Botones() {
			   Btn_Agregar->Enabled = false;
			   Btn_Modificar->Enabled = false;
			   Btn_Guardar->Enabled = true;			   
			   Btn_Eliminar->Enabled = true;
			   Btn_Volver->Enabled = true;
		   }

		   //tipo de almacen 1 es motocicletas y el 2 es automovil
		   void GuardarDatos(int tipo_almac) {
			   if (tipo_almac == 1) {
				   System::IO::StreamWriter^ Archivo = gcnew System::IO::StreamWriter("Motocicletas.txt");
				   String^ Linea = "";
				   if (File::Exists("Motocicletas.txt")) {
					   for (int i = 0; i < Lista_Vehiculos->RowCount; i++) {
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Tipo"]->Value);
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Color"]->Value);
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Marca"]->Value);
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Modelo"]->Value);
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Anio"]->Value);
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Precio"]->Value);

					   }
				   }
				   Archivo->Close();
			   }
			   else if (tipo_almac == 2) {
				   System::IO::StreamWriter^ Archivo = gcnew System::IO::StreamWriter("Automoviles.txt");
				   String^ Linea = "";
				   if (File::Exists("Automoviles.txt")) {
					   for (int i = 0; i < Lista_Vehiculos->RowCount; i++) {
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Tipo"]->Value);
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Color"]->Value);
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Marca"]->Value);
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Modelo"]->Value);
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Anio"]->Value);
						   Archivo->WriteLine(Lista_Vehiculos->Rows[i]->Cells["Precio"]->Value);

					   }
				   }
				   Archivo->Close();
			   }
		   }
			
		   //tipo de almacen 1 es motocicletas y el 2 es automovil
		   void CargarDatos(int tipo_almac) { 

			   if (tipo_almac == 1) {
				   if (!File::Exists("Motocicletas.txt")) {
					   System::IO::StreamWriter^ Archivo = gcnew System::IO::StreamWriter("Motocicletas.txt");
					   Archivo->Close();
				   }
				   else {
					   System::IO::StreamReader^ Archivo = gcnew System::IO::StreamReader("Motocicletas.txt");
					   while (!Archivo->EndOfStream) {
						   String^ Tipo = Archivo->ReadLine();
						   String^ Color = Archivo->ReadLine();
						   String^ Marca = Archivo->ReadLine();
						   String^ Modelo = Archivo->ReadLine();
						   String^ Anio = Archivo->ReadLine();
						   String^ Precio = Archivo->ReadLine();
						   Lista_Vehiculos->Rows->Add(Tipo, Color, Marca, Modelo, Anio, Precio);
					   }
					   Archivo->Close();
				   }
			   }
			   else if(tipo_almac == 2) {
				   if (!File::Exists("Automoviles.txt")) {
					   System::IO::StreamWriter^ Archivo = gcnew System::IO::StreamWriter("Automoviles.txt");
					   Archivo->Close();
				   }
				   else {
					   System::IO::StreamReader^ Archivo = gcnew System::IO::StreamReader("Automoviles.txt");
					   while (!Archivo->EndOfStream) {
						   String^ Tipo = Archivo->ReadLine();
						   String^ Color = Archivo->ReadLine();
						   String^ Marca = Archivo->ReadLine();
						   String^ Modelo = Archivo->ReadLine();
						   String^ Anio = Archivo->ReadLine();
						   String^ Precio = Archivo->ReadLine();
						   Lista_Vehiculos->Rows->Add(Tipo, Color, Marca, Modelo, Anio, Precio);
					   }
					   Archivo->Close();
				   }

			   }

		   }
};
}
