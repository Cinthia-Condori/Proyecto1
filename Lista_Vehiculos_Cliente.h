#pragma once
#include "Menu_Cliente.h"
#include "Vehiculo.h"
#include "Registro_de_Compra.h"
namespace Consesionaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Lista_Vehiculos_Cliente
	/// </summary>
	public ref class Lista_Vehiculos_Cliente : public System::Windows::Forms::Form
	{
	public:
		int Tipo_vehiculo;
		Vehiculo Vehic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Color;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Marca;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Modelo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Anio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
		   int Fila_Actual;
	public:
		//agregamos el parametro int vehiculo para que reciva el valor que le pase la ventana anterior
		Lista_Vehiculos_Cliente(int vehiculo)
		{
			InitializeComponent();
			//almacenamos el valor en nuestra variable local
			Tipo_vehiculo = vehiculo;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Lista_Vehiculos_Cliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Lb_Titulo;
	private: System::Windows::Forms::DataGridView^ Lista_Vehiculos;
	private: System::Windows::Forms::Button^ Btn_Volver;
	private: System::Windows::Forms::Button^ Btn_Comprar;

	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lista_Vehiculos_Cliente::typeid));
			this->Lb_Titulo = (gcnew System::Windows::Forms::Label());
			this->Lista_Vehiculos = (gcnew System::Windows::Forms::DataGridView());
			this->Btn_Volver = (gcnew System::Windows::Forms::Button());
			this->Btn_Comprar = (gcnew System::Windows::Forms::Button());
			this->Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Color = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Marca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Modelo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Anio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lista_Vehiculos))->BeginInit();
			this->SuspendLayout();
			// 
			// Lb_Titulo
			// 
			this->Lb_Titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lb_Titulo->Location = System::Drawing::Point(12, 9);
			this->Lb_Titulo->Name = L"Lb_Titulo";
			this->Lb_Titulo->Size = System::Drawing::Size(800, 38);
			this->Lb_Titulo->TabIndex = 0;
			this->Lb_Titulo->Text = L"Titulo";
			this->Lb_Titulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->Lista_Vehiculos->Location = System::Drawing::Point(18, 66);
			this->Lista_Vehiculos->Name = L"Lista_Vehiculos";
			this->Lista_Vehiculos->ReadOnly = true;
			this->Lista_Vehiculos->Size = System::Drawing::Size(645, 295);
			this->Lista_Vehiculos->TabIndex = 1;
			this->Lista_Vehiculos->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Lista_Vehiculos_Cliente::Lista_Vehiculos_CellContentClick);
			// 
			// Btn_Volver
			// 
			this->Btn_Volver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Volver->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Volver.Image")));
			this->Btn_Volver->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Volver->Location = System::Drawing::Point(687, 199);
			this->Btn_Volver->Name = L"Btn_Volver";
			this->Btn_Volver->Size = System::Drawing::Size(125, 40);
			this->Btn_Volver->TabIndex = 3;
			this->Btn_Volver->Text = L"Volver";
			this->Btn_Volver->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Volver->UseVisualStyleBackColor = true;
			this->Btn_Volver->Click += gcnew System::EventHandler(this, &Lista_Vehiculos_Cliente::Btn_Volver_Click);
			// 
			// Btn_Comprar
			// 
			this->Btn_Comprar->Enabled = false;
			this->Btn_Comprar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Comprar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Comprar.Image")));
			this->Btn_Comprar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Comprar->Location = System::Drawing::Point(687, 133);
			this->Btn_Comprar->Name = L"Btn_Comprar";
			this->Btn_Comprar->Size = System::Drawing::Size(125, 45);
			this->Btn_Comprar->TabIndex = 4;
			this->Btn_Comprar->Text = L"Comprar";
			this->Btn_Comprar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Comprar->UseVisualStyleBackColor = true;
			this->Btn_Comprar->Click += gcnew System::EventHandler(this, &Lista_Vehiculos_Cliente::Btn_Comprar_Click);
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
			// Lista_Vehiculos_Cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(839, 373);
			this->Controls->Add(this->Btn_Comprar);
			this->Controls->Add(this->Btn_Volver);
			this->Controls->Add(this->Lista_Vehiculos);
			this->Controls->Add(this->Lb_Titulo);
			this->Name = L"Lista_Vehiculos_Cliente";
			this->Text = L"Lista_Vehiculos_Cliente";
			this->Load += gcnew System::EventHandler(this, &Lista_Vehiculos_Cliente::Lista_Vehiculos_Cliente_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lista_Vehiculos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void Btn_Volver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	// Funcion que a la que diremos que queremos que muestre al iniciar la pantalla
	// queremos qu cargue la lista de automoviles o motocicletas segudn haya sido nuestra eleccion anterior
	private: System::Void Lista_Vehiculos_Cliente_Load(System::Object^ sender, System::EventArgs^ e) {
		if (Tipo_vehiculo == 1) {
			Lb_Titulo->Text = "LISTA DE AUTOMOVILES";
		}
		else if (Tipo_vehiculo == 2) {
			Lb_Titulo->Text = "LISTA DE MOTOCICLETAS";
		}
		CargarDatos(Tipo_vehiculo);
	}
		//creamos el evento click que hara que selecione una fila con sus elementos y se active el boton comprar
	private: System::Void Lista_Vehiculos_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		Btn_Comprar->Enabled = true;
	}



		//implementamos el evento de click en el boton comprar, lo cual nos pasara los datos de un vehiculo al formulario
		//de registro del cliente
	private: System::Void Btn_Comprar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CurrentRow->Index;esta funcion nos devuelve el numero de la fila que seleccionamos
		Fila_Actual = Lista_Vehiculos->CurrentRow->Index;
		//pasamos los datos de la tabla **DataGridView** a los texbox (convertimos a cadena con el toString)
		Vehic.Tipo = Lista_Vehiculos->Rows[Fila_Actual]->Cells["Tipo"]->Value->ToString();
		Vehic.color = Lista_Vehiculos->Rows[Fila_Actual]->Cells["Color"]->Value->ToString();
		Vehic.marca = Lista_Vehiculos->Rows[Fila_Actual]->Cells["Marca"]->Value->ToString();
		Vehic.modelo = Lista_Vehiculos->Rows[Fila_Actual]->Cells["Modelo"]->Value->ToString();
		Vehic.anio = Lista_Vehiculos->Rows[Fila_Actual]->Cells["Anio"]->Value->ToString();
		Vehic.precio = Lista_Vehiculos->Rows[Fila_Actual]->Cells["Precio"]->Value->ToString();
		//Eliminamos los datos del vehiculo que compramos
		Fila_Actual = Lista_Vehiculos->CurrentRow->Index;
		Lista_Vehiculos->Rows->Remove(Lista_Vehiculos->Rows[Fila_Actual]);
		GuardarDatos(Tipo_vehiculo);
		
		Consesionaria::Registro_de_Compra^ Regis_Compra = gcnew Consesionaria::Registro_de_Compra(Vehic.Tipo, Vehic.color,Vehic.marca,Vehic.modelo,Vehic.anio,Vehic.precio);
		this->Visible = false;
		Regis_Compra->ShowDialog();
		this->Visible = true;
	}
		   //creamos la funciona agregar con dos opciones, segun sea 1 o 2, que sera el tipo de vehiculo
		   void CargarDatos(int Tipo_Vehiculo) { //si es tipo 1(Auto) o tipo 2(moto)

			   if (Tipo_Vehiculo == 2) {
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
			   }else if (Tipo_Vehiculo == 1) {
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

		   void GuardarDatos(int Tipo_Vehiculo) {
			   if (Tipo_Vehiculo == 2) {
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
			   else if (Tipo_Vehiculo == 1) {
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

};
}
