#pragma once

namespace Consesionaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using para manejo de archivo
	using namespace System::IO;

	/// <summary>
	/// Resumen de Registro_Clientes_Admin
	/// </summary>
	public ref class Registro_Clientes_Admin : public System::Windows::Forms::Form
	{
	public:
		int Fila_Actual;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dni;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ap_Paterno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ap_Materno;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Edad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Genero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Direccion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo_Vehiculo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Color_Vehiculo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Marca_Vehiculo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Modelo_Vehiculo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Anio_Vehiculo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio_Vehiculo;
	private: System::Windows::Forms::ErrorProvider^ errorProvider_Validar;
	private: System::Windows::Forms::Button^ Btn_Eliminar;
		   bool validar;
	public:
		Registro_Clientes_Admin(void)
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
		~Registro_Clientes_Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Tb_Nombre;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Tb_Ap_Paterno;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Tb_Ap_Materno;
	private: System::Windows::Forms::Label^ Lb_DNI;
	private: System::Windows::Forms::TextBox^ Tb_Dni;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Tb_Edad;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ Cb_Genero;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Tb_Direccion;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ Tb_Telefono;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ Lb_Tipo;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ Lb_Color;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ Lb_Marca;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ Lb_Modelo;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ Lb_Anio;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::DataGridView^ Lista_Clientes;









	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ Lb_Precio;
	private: System::Windows::Forms::Button^ Btn_Modificar;
	private: System::Windows::Forms::Button^ Btn_Guardar;
	private: System::Windows::Forms::Button^ Btn_Volver;
	private: System::ComponentModel::IContainer^ components;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registro_Clientes_Admin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Tb_Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Tb_Ap_Paterno = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Tb_Ap_Materno = (gcnew System::Windows::Forms::TextBox());
			this->Lb_DNI = (gcnew System::Windows::Forms::Label());
			this->Tb_Dni = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Tb_Edad = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Cb_Genero = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Tb_Direccion = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Tb_Telefono = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Lb_Tipo = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Lb_Color = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Lb_Marca = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Lb_Modelo = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Lb_Anio = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->Lista_Clientes = (gcnew System::Windows::Forms::DataGridView());
			this->Dni = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ap_Paterno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ap_Materno = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Edad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Genero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipo_Vehiculo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Color_Vehiculo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Marca_Vehiculo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Modelo_Vehiculo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Anio_Vehiculo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio_Vehiculo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Lb_Precio = (gcnew System::Windows::Forms::Label());
			this->Btn_Modificar = (gcnew System::Windows::Forms::Button());
			this->Btn_Guardar = (gcnew System::Windows::Forms::Button());
			this->Btn_Volver = (gcnew System::Windows::Forms::Button());
			this->errorProvider_Validar = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->Btn_Eliminar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lista_Clientes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider_Validar))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(200, 47);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Datos del Cliente";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(13, 9);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(916, 38);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Registro de Ventas";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 94);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Nombre ";
			// 
			// Tb_Nombre
			// 
			this->Tb_Nombre->Enabled = false;
			this->Tb_Nombre->Location = System::Drawing::Point(129, 88);
			this->Tb_Nombre->Name = L"Tb_Nombre";
			this->Tb_Nombre->Size = System::Drawing::Size(131, 26);
			this->Tb_Nombre->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ap. Paterno";
			// 
			// Tb_Ap_Paterno
			// 
			this->Tb_Ap_Paterno->Enabled = false;
			this->Tb_Ap_Paterno->Location = System::Drawing::Point(129, 125);
			this->Tb_Ap_Paterno->Name = L"Tb_Ap_Paterno";
			this->Tb_Ap_Paterno->Size = System::Drawing::Size(131, 26);
			this->Tb_Ap_Paterno->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ap. Materno";
			// 
			// Tb_Ap_Materno
			// 
			this->Tb_Ap_Materno->Enabled = false;
			this->Tb_Ap_Materno->Location = System::Drawing::Point(129, 170);
			this->Tb_Ap_Materno->Name = L"Tb_Ap_Materno";
			this->Tb_Ap_Materno->Size = System::Drawing::Size(131, 26);
			this->Tb_Ap_Materno->TabIndex = 7;
			// 
			// Lb_DNI
			// 
			this->Lb_DNI->AutoSize = true;
			this->Lb_DNI->Location = System::Drawing::Point(296, 94);
			this->Lb_DNI->Name = L"Lb_DNI";
			this->Lb_DNI->Size = System::Drawing::Size(37, 20);
			this->Lb_DNI->TabIndex = 8;
			this->Lb_DNI->Text = L"DNI";
			// 
			// Tb_Dni
			// 
			this->Tb_Dni->Enabled = false;
			this->Tb_Dni->Location = System::Drawing::Point(371, 88);
			this->Tb_Dni->Name = L"Tb_Dni";
			this->Tb_Dni->Size = System::Drawing::Size(108, 26);
			this->Tb_Dni->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(304, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Edad";
			// 
			// Tb_Edad
			// 
			this->Tb_Edad->Enabled = false;
			this->Tb_Edad->Location = System::Drawing::Point(371, 125);
			this->Tb_Edad->Name = L"Tb_Edad";
			this->Tb_Edad->Size = System::Drawing::Size(108, 26);
			this->Tb_Edad->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(296, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Genero";
			// 
			// Cb_Genero
			// 
			this->Cb_Genero->Enabled = false;
			this->Cb_Genero->FormattingEnabled = true;
			this->Cb_Genero->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->Cb_Genero->Location = System::Drawing::Point(371, 168);
			this->Cb_Genero->Name = L"Cb_Genero";
			this->Cb_Genero->Size = System::Drawing::Size(108, 28);
			this->Cb_Genero->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 220);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Dirección";
			// 
			// Tb_Direccion
			// 
			this->Tb_Direccion->Enabled = false;
			this->Tb_Direccion->Location = System::Drawing::Point(129, 214);
			this->Tb_Direccion->Name = L"Tb_Direccion";
			this->Tb_Direccion->Size = System::Drawing::Size(131, 26);
			this->Tb_Direccion->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(296, 217);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Telefono";
			// 
			// Tb_Telefono
			// 
			this->Tb_Telefono->Enabled = false;
			this->Tb_Telefono->Location = System::Drawing::Point(371, 211);
			this->Tb_Telefono->Name = L"Tb_Telefono";
			this->Tb_Telefono->Size = System::Drawing::Size(108, 26);
			this->Tb_Telefono->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(613, 47);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(168, 24);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Datos del Vehiculo";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(515, 91);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(39, 20);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Tipo";
			// 
			// Lb_Tipo
			// 
			this->Lb_Tipo->Location = System::Drawing::Point(582, 88);
			this->Lb_Tipo->Name = L"Lb_Tipo";
			this->Lb_Tipo->Size = System::Drawing::Size(127, 26);
			this->Lb_Tipo->TabIndex = 21;
			this->Lb_Tipo->Text = L"                                 ";
			this->Lb_Tipo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(515, 131);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(46, 20);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Color";
			// 
			// Lb_Color
			// 
			this->Lb_Color->Location = System::Drawing::Point(582, 125);
			this->Lb_Color->Name = L"Lb_Color";
			this->Lb_Color->Size = System::Drawing::Size(127, 26);
			this->Lb_Color->TabIndex = 23;
			this->Lb_Color->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(515, 176);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 20);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Marca";
			// 
			// Lb_Marca
			// 
			this->Lb_Marca->Location = System::Drawing::Point(582, 165);
			this->Lb_Marca->Name = L"Lb_Marca";
			this->Lb_Marca->Size = System::Drawing::Size(127, 28);
			this->Lb_Marca->TabIndex = 25;
			this->Lb_Marca->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(515, 220);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(61, 20);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Modelo";
			// 
			// Lb_Modelo
			// 
			this->Lb_Modelo->Location = System::Drawing::Point(582, 211);
			this->Lb_Modelo->Name = L"Lb_Modelo";
			this->Lb_Modelo->Size = System::Drawing::Size(127, 26);
			this->Lb_Modelo->TabIndex = 27;
			this->Lb_Modelo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(715, 94);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(38, 20);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Año";
			// 
			// Lb_Anio
			// 
			this->Lb_Anio->Location = System::Drawing::Point(787, 91);
			this->Lb_Anio->Name = L"Lb_Anio";
			this->Lb_Anio->Size = System::Drawing::Size(81, 27);
			this->Lb_Anio->TabIndex = 29;
			this->Lb_Anio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(711, 131);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(70, 20);
			this->label16->TabIndex = 30;
			this->label16->Text = L"Precio $.";
			// 
			// Lista_Clientes
			// 
			this->Lista_Clientes->AllowUserToAddRows = false;
			this->Lista_Clientes->AllowUserToDeleteRows = false;
			this->Lista_Clientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Lista_Clientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(14) {
				this->Dni, this->Nombre,
					this->Ap_Paterno, this->Ap_Materno, this->Edad, this->Genero, this->Telefono, this->Direccion, this->Tipo_Vehiculo, this->Color_Vehiculo,
					this->Marca_Vehiculo, this->Modelo_Vehiculo, this->Anio_Vehiculo, this->Precio_Vehiculo
			});
			this->Lista_Clientes->Location = System::Drawing::Point(18, 318);
			this->Lista_Clientes->Name = L"Lista_Clientes";
			this->Lista_Clientes->ReadOnly = true;
			this->Lista_Clientes->Size = System::Drawing::Size(843, 244);
			this->Lista_Clientes->TabIndex = 32;
			this->Lista_Clientes->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Registro_Clientes_Admin::dataGridView1_CellContentClick);
			// 
			// Dni
			// 
			this->Dni->HeaderText = L"DNI";
			this->Dni->Name = L"Dni";
			this->Dni->ReadOnly = true;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			// 
			// Ap_Paterno
			// 
			this->Ap_Paterno->HeaderText = L"Ap. Paterno";
			this->Ap_Paterno->Name = L"Ap_Paterno";
			this->Ap_Paterno->ReadOnly = true;
			// 
			// Ap_Materno
			// 
			this->Ap_Materno->HeaderText = L"Ap. Materno";
			this->Ap_Materno->Name = L"Ap_Materno";
			this->Ap_Materno->ReadOnly = true;
			// 
			// Edad
			// 
			this->Edad->HeaderText = L"Edad";
			this->Edad->Name = L"Edad";
			this->Edad->ReadOnly = true;
			// 
			// Genero
			// 
			this->Genero->HeaderText = L"Genero";
			this->Genero->Name = L"Genero";
			this->Genero->ReadOnly = true;
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Telefono";
			this->Telefono->Name = L"Telefono";
			this->Telefono->ReadOnly = true;
			// 
			// Direccion
			// 
			this->Direccion->HeaderText = L"Dirección";
			this->Direccion->Name = L"Direccion";
			this->Direccion->ReadOnly = true;
			// 
			// Tipo_Vehiculo
			// 
			this->Tipo_Vehiculo->HeaderText = L"Vehiculo";
			this->Tipo_Vehiculo->Name = L"Tipo_Vehiculo";
			this->Tipo_Vehiculo->ReadOnly = true;
			// 
			// Color_Vehiculo
			// 
			this->Color_Vehiculo->HeaderText = L"Color";
			this->Color_Vehiculo->Name = L"Color_Vehiculo";
			this->Color_Vehiculo->ReadOnly = true;
			// 
			// Marca_Vehiculo
			// 
			this->Marca_Vehiculo->HeaderText = L"Marca";
			this->Marca_Vehiculo->Name = L"Marca_Vehiculo";
			this->Marca_Vehiculo->ReadOnly = true;
			// 
			// Modelo_Vehiculo
			// 
			this->Modelo_Vehiculo->HeaderText = L"Modelo";
			this->Modelo_Vehiculo->Name = L"Modelo_Vehiculo";
			this->Modelo_Vehiculo->ReadOnly = true;
			// 
			// Anio_Vehiculo
			// 
			this->Anio_Vehiculo->HeaderText = L"Año";
			this->Anio_Vehiculo->Name = L"Anio_Vehiculo";
			this->Anio_Vehiculo->ReadOnly = true;
			// 
			// Precio_Vehiculo
			// 
			this->Precio_Vehiculo->HeaderText = L"Precio";
			this->Precio_Vehiculo->Name = L"Precio_Vehiculo";
			this->Precio_Vehiculo->ReadOnly = true;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(832, 176);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 20);
			this->label17->TabIndex = 33;
			// 
			// Lb_Precio
			// 
			this->Lb_Precio->Location = System::Drawing::Point(787, 128);
			this->Lb_Precio->Name = L"Lb_Precio";
			this->Lb_Precio->Size = System::Drawing::Size(82, 26);
			this->Lb_Precio->TabIndex = 34;
			this->Lb_Precio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Btn_Modificar
			// 
			this->Btn_Modificar->Enabled = false;
			this->Btn_Modificar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Modificar.Image")));
			this->Btn_Modificar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Modificar->Location = System::Drawing::Point(101, 269);
			this->Btn_Modificar->Name = L"Btn_Modificar";
			this->Btn_Modificar->Size = System::Drawing::Size(114, 30);
			this->Btn_Modificar->TabIndex = 35;
			this->Btn_Modificar->Text = L"Modificar";
			this->Btn_Modificar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Modificar->UseVisualStyleBackColor = true;
			this->Btn_Modificar->Click += gcnew System::EventHandler(this, &Registro_Clientes_Admin::Btn_Modificar_Click);
			// 
			// Btn_Guardar
			// 
			this->Btn_Guardar->Enabled = false;
			this->Btn_Guardar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Guardar.Image")));
			this->Btn_Guardar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Guardar->Location = System::Drawing::Point(300, 269);
			this->Btn_Guardar->Name = L"Btn_Guardar";
			this->Btn_Guardar->Size = System::Drawing::Size(102, 30);
			this->Btn_Guardar->TabIndex = 36;
			this->Btn_Guardar->Text = L"Guardar";
			this->Btn_Guardar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Guardar->UseVisualStyleBackColor = true;
			this->Btn_Guardar->Click += gcnew System::EventHandler(this, &Registro_Clientes_Admin::Btn_Guardar_Click);
			// 
			// Btn_Volver
			// 
			this->Btn_Volver->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Volver.Image")));
			this->Btn_Volver->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Volver->Location = System::Drawing::Point(657, 269);
			this->Btn_Volver->Name = L"Btn_Volver";
			this->Btn_Volver->Size = System::Drawing::Size(96, 30);
			this->Btn_Volver->TabIndex = 37;
			this->Btn_Volver->Text = L"Volver";
			this->Btn_Volver->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Volver->UseVisualStyleBackColor = true;
			this->Btn_Volver->Click += gcnew System::EventHandler(this, &Registro_Clientes_Admin::Btn_Volver_Click);
			// 
			// errorProvider_Validar
			// 
			this->errorProvider_Validar->ContainerControl = this;
			// 
			// Btn_Eliminar
			// 
			this->Btn_Eliminar->Enabled = false;
			this->Btn_Eliminar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Eliminar.Image")));
			this->Btn_Eliminar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Eliminar->Location = System::Drawing::Point(479, 269);
			this->Btn_Eliminar->Name = L"Btn_Eliminar";
			this->Btn_Eliminar->Size = System::Drawing::Size(97, 30);
			this->Btn_Eliminar->TabIndex = 38;
			this->Btn_Eliminar->Text = L"Eliminar";
			this->Btn_Eliminar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Eliminar->UseVisualStyleBackColor = true;
			this->Btn_Eliminar->Click += gcnew System::EventHandler(this, &Registro_Clientes_Admin::Btn_Eliminar_Click);
			// 
			// Registro_Clientes_Admin
			// 
			this->AccessibleName = L"Lb_Precio";
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 574);
			this->Controls->Add(this->Btn_Eliminar);
			this->Controls->Add(this->Btn_Volver);
			this->Controls->Add(this->Btn_Guardar);
			this->Controls->Add(this->Btn_Modificar);
			this->Controls->Add(this->Lb_Precio);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->Lista_Clientes);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->Lb_Anio);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->Lb_Modelo);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Lb_Marca);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->Lb_Color);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->Lb_Tipo);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Tb_Telefono);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Tb_Direccion);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Cb_Genero);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Tb_Edad);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Tb_Dni);
			this->Controls->Add(this->Lb_DNI);
			this->Controls->Add(this->Tb_Ap_Materno);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Tb_Ap_Paterno);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Tb_Nombre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Registro_Clientes_Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Registro_Clientes_Admin::Registro_Clientes_Admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lista_Clientes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider_Validar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//lo que hara cuando se inicie este evento de pantalla
	private: System::Void Registro_Clientes_Admin_Load(System::Object^ sender, System::EventArgs^ e) {
		CargarDatos();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		//CurrentRow->Index;esta funcion nos devuelve el numero de la fila que seleccionamos
		Fila_Actual = Lista_Clientes->CurrentRow->Index;
		Btn_Modificar->Enabled = true;
	}

	private: System::Void Btn_Volver_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void Btn_Modificar_Click(System::Object^ sender, System::EventArgs^ e) {
		//CurrentRow->Index;esta funcion nos devuelve el numero de la fila que seleccionamos
		Fila_Actual = Lista_Clientes->CurrentRow->Index;
		//pasamos los datos de la tabla **DataGridView** a los texbox (convertimos a cadena con el toString)
		Tb_Dni->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Dni"]->Value->ToString();
		Tb_Nombre->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Nombre"]->Value->ToString();
		Tb_Ap_Paterno->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Ap_Paterno"]->Value->ToString();
		Tb_Ap_Materno->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Ap_Materno"]->Value->ToString();
		Tb_Edad->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Edad"]->Value->ToString();
		Cb_Genero->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Genero"]->Value->ToString();
		Tb_Telefono->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Telefono"]->Value->ToString();
		Tb_Direccion->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Direccion"]->Value->ToString();
		Lb_Tipo->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Tipo_Vehiculo"]->Value->ToString();
		Lb_Color->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Color_Vehiculo"]->Value->ToString();
		Lb_Marca->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Marca_Vehiculo"]->Value->ToString();
		Lb_Modelo->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Modelo_Vehiculo"]->Value->ToString();
		Lb_Anio->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Anio_Vehiculo"]->Value->ToString();
		Lb_Precio->Text = Lista_Clientes->Rows[Fila_Actual]->Cells["Precio_Vehiculo"]->Value->ToString();
		ActivarBotones_TBox();
	}
	
	private: System::Void Btn_Guardar_Click(System::Object^ sender, System::EventArgs^ e) {
		Fila_Actual = Lista_Clientes->CurrentRow->Index;
		String^ dni = Tb_Dni->Text;
		String^ nombre = Tb_Nombre->Text;
		String^ Ap_Paterno = Tb_Ap_Paterno->Text;
		String^ Ap_Materno = Tb_Ap_Materno->Text;
		String^ edad = Tb_Edad->Text;
		String^ genero = Cb_Genero->Text;
		String^ telefono = Tb_Telefono->Text;
		String^ direccion = Tb_Direccion->Text;
		String^ Tipo = Lb_Tipo->Text;
		String^ Color = Lb_Color->Text;
		String^ Marca = Lb_Marca->Text;
		String^ Modelo = Lb_Modelo->Text;
		String^ Anio =Lb_Anio->Text;
		String^ Precio = Lb_Precio->Text;
		//validamos que las casillas esten llenas
		validar = ValidarDatos(dni,nombre,Ap_Paterno,Ap_Materno,edad,genero,telefono,direccion);

		if (validar == true) {
			Lista_Clientes->Rows[Fila_Actual]->Cells["Dni"]->Value = dni;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Nombre"]->Value = nombre;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Ap_Paterno"]->Value = Ap_Paterno;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Ap_Materno"]->Value = Ap_Materno;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Edad"]->Value = edad;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Genero"]->Value = genero;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Telefono"]->Value = telefono;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Direccion"]->Value = direccion;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Tipo_Vehiculo"]->Value = Tipo;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Color_Vehiculo"]->Value = Color;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Marca_Vehiculo"]->Value = Marca;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Modelo_Vehiculo"]->Value = Modelo;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Anio_Vehiculo"]->Value = Anio;
			Lista_Clientes->Rows[Fila_Actual]->Cells["Precio_Vehiculo"]->Value = Precio;
			MessageBox::Show("Datos Modificados Correctamente", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
			GuardarDatos();
			desactivarBotones_Tbox();
			Limpiar();
		}
	}
	private: System::Void Btn_Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		//hacemos una condicion en caso responda que si y eliminamos
		if (MessageBox::Show("Desea eliminar???", "INFORMACION DEL SISTEMA", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			Fila_Actual = Lista_Clientes->CurrentRow->Index;
			Lista_Clientes->Rows->Remove(Lista_Clientes->Rows[Fila_Actual]);
			MessageBox::Show("Datos Eliminados Correctamente", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
			GuardarDatos();
			desactivarBotones_Tbox();
			Limpiar();
		}
	}
		   //validar que las casillas de datos estén rellenados
		   bool ValidarDatos(String^Dni, String^ nombre, String^ paterno, String^ materno, String^ edad, String^ genero, String^ telefono, String^ direccion) {

			   if (Dni == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Dni, "Ingrese dni del cliente");
				   validar = false;
			   }
			   else if (nombre == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Nombre, "Ingrese nombre del cliente");
				   validar = false;
			   }
			   else if (paterno == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Ap_Paterno, "Ingrese apellido paterno del cliente");
				   validar = false;
			   }
			   else if (materno == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Ap_Materno, "Ingrese apellido materno del cliente");
				   validar = false;
			   }
			   else if (edad == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Edad, "Ingrese edad del cliente");
				   validar = false;
			   }
			   else if (genero == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Cb_Genero, "Ingrese el genero del cliente");
				   validar = false;
			   }
			   else if (telefono == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Telefono, "Ingrese el telefono del cliente");
				   validar = false;
			   }
			   else if (direccion == "") {
				   MessageBox::Show("Ingreso de dato faltante", "INFORMACION DEL SISTEMA", MessageBoxButtons::OK);
				   errorProvider_Validar->SetError(Tb_Direccion, "Ingrese la dirección del cliente");
				   validar = false;
			   }
			   else {
				   validar = true;
				   errorProvider_Validar->SetError(Tb_Dni, "");
				   errorProvider_Validar->SetError(Tb_Nombre, "");
				   errorProvider_Validar->SetError(Tb_Ap_Paterno, "");
				   errorProvider_Validar->SetError(Tb_Ap_Materno, "");
				   errorProvider_Validar->SetError(Tb_Edad, "");
				   errorProvider_Validar->SetError(Cb_Genero, "");
				   errorProvider_Validar->SetError(Tb_Telefono, "");
				   errorProvider_Validar->SetError(Tb_Direccion, "");
				   errorProvider_Validar->SetError(Lb_Color, "");
				   errorProvider_Validar->SetError(Lb_Marca, "");
				   errorProvider_Validar->SetError(Lb_Modelo, "");
				   errorProvider_Validar->SetError(Lb_Anio, "");
				   errorProvider_Validar->SetError(Lb_Precio, "");
			   }

			   return validar;
		   }


		   void GuardarDatos() {
			   System::IO::StreamWriter^ Archivo = gcnew System::IO::StreamWriter("Clientes.txt");
			   String^ Linea = "";
			   if (File::Exists("Clientes.txt")) {
				   for (int i = 0; i < Lista_Clientes->RowCount; i++) {
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Dni"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Nombre"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Ap_Paterno"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Ap_Materno"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Edad"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Genero"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Telefono"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Direccion"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Tipo_Vehiculo"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Color_Vehiculo"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Marca_Vehiculo"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Modelo_Vehiculo"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Anio_Vehiculo"]->Value);
					   Archivo->WriteLine(Lista_Clientes->Rows[i]->Cells["Precio_Vehiculo"]->Value);
				   }
			   }
			   Archivo->Close();
		   }
		   void CargarDatos() {
			   if (!File::Exists("Clientes.txt")) {
				   System::IO::StreamWriter^ Archivo = gcnew System::IO::StreamWriter("Clientes.txt");
			   }
			   else {
				   System::IO::StreamReader^ Archivo = gcnew System::IO::StreamReader("Clientes.txt");
				   while (!Archivo->EndOfStream) {
					   String^ dni = Archivo->ReadLine();
					   String^ nombre = Archivo->ReadLine();
					   String^ Ap_Paterno = Archivo->ReadLine();
					   String^ Ap_Materno = Archivo->ReadLine();
					   String^ edad = Archivo->ReadLine();
					   String^ genero = Archivo->ReadLine();
					   String^ telefono = Archivo->ReadLine();
					   String^ direccion = Archivo->ReadLine();
					   String^ Tipo = Archivo->ReadLine();
					   String^ Color = Archivo->ReadLine();
					   String^ Marca = Archivo->ReadLine();
					   String^ Modelo = Archivo->ReadLine();
					   String^ Anio = Archivo->ReadLine();
					   String^ Precio = Archivo->ReadLine();
					   Lista_Clientes->Rows->Add(dni, nombre, Ap_Paterno, Ap_Materno, edad, genero, telefono, direccion, Tipo, Color, Marca, Modelo, Anio, Precio);
				   }
				   Archivo->Close();
			   }
		   }

		   void ActivarBotones_TBox() {
			   Tb_Nombre->Enabled = true;
			   Tb_Ap_Paterno->Enabled = true;
			   Tb_Ap_Materno->Enabled = true;
			   Tb_Direccion->Enabled = true;
			   Tb_Dni->Enabled = true;
			   Tb_Edad->Enabled = true;
			   Tb_Telefono->Enabled = true;
			   Cb_Genero->Enabled = true;
			   Btn_Guardar->Enabled = true;
			   Btn_Eliminar->Enabled = true;
		   }

		   void desactivarBotones_Tbox() {
			   Tb_Nombre->Enabled = false;
			   Tb_Ap_Paterno->Enabled = false;
			   Tb_Ap_Materno->Enabled = false;
			   Tb_Direccion->Enabled = false;
			   Tb_Dni->Enabled = false;
			   Tb_Edad->Enabled = false;
			   Tb_Telefono->Enabled = false;
			   Cb_Genero->Enabled = false;
			   Btn_Guardar->Enabled = false;
			   Btn_Eliminar->Enabled = false;
		   }
			
		   void Limpiar() {
			   Tb_Nombre->Text = "";
			   Tb_Ap_Paterno->Text= "";
			   Tb_Ap_Materno->Text = "";
			   Tb_Direccion->Text = "";
			   Tb_Dni->Text = "";
			   Tb_Edad->Text = "";
			   Tb_Telefono->Text = "";
			   Cb_Genero->Text = "";
			   Lb_Tipo->Text = "";
			   Lb_Color->Text = "";
			   Lb_Marca->Text = "";
			   Lb_Modelo->Text = "";
			   Lb_Anio->Text = "";
			   Lb_Precio->Text = "";
		   }



};
}
