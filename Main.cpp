#include "Inicio.h"
#include "Login_Admin.h"
#include "Menu_Admin.h"
#include "Menu_Cliente.h"
#include "Persona.h"
#include "Almacen_Motos_Admin.h"
#include "Registro_Clientes_Admin.h"
#include "Lista_Vehiculos_Cliente.h"
#include "Registro_de_Compra.h"
#include "Persona.h"
#include "Vehiculo.h"
#include <string>
#include <string.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Consesionaria::Inicio init;
	Application::Run(% init);
}