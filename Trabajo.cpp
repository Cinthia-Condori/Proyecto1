#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include<fstream>
using namespace std;
//MODULO CLIENTE/
struct Persona{
    string Nombre;
	string ApPaterno;
	string ApMaterno;
	int DNI;
	int Edad;
	char Genero;
	int Nro_Cel;
	string Direccion;
};
//MODULO VEHICULOS/
struct Vehiculo{
	string Tipo;
	string color;
	string marca;
	string modelo;
	int anio;
	float precio;
}List_Motocicleta[10],List_Automovil[10];
//MODULO ADMINNISTRADOR/
struct Administrador{
    string Pasword = "Fiis2023";
    float Sueldo;
    Persona DatosAdmin;
}Admin;
struct Cliente{
	Persona DatosCliente;
	Vehiculo VehiculoComprado;
}List_Cliente[10];

int main(){
    int Cant_Moto=0,Cant_Carro=0,Cant_Cliente=0,CodigoVehiculo;
    int entrada,SubMenu,SubMenu2,SubMenu3,intento_admin=0;
    Vehiculo VehiculoProvicional;
    Cliente ClienteProvicional;
    string Key;//contraseña del admin
    //PARA ALMACENAR LOS TIPOS DE MOTOS EN UN ARCHIVO DE TEXTO
    ofstream moto_archivo;
    do{
    	do{
    		system("cls");
			cout<<"DIGITE COMO QUIERE INGRESAR AL SISTEMA :"<<endl;
	    	cout<<"1.INGRESAR COMO ADMINISTRADOR: "<<endl;
	    	cout<<"2.INGRESAR COMO CLIENTE "<<endl;
	    	cout<<"3.Salir"<<endl;
	    	cin>>entrada;
		}while(entrada<1 || entrada>3);
		
		switch(entrada){
			case 1:
				do{
					fflush(stdin);
					cout<<"PASWORD...";
					getline(cin,Key);						
					if(Admin.Pasword.compare(Key)==0){
						cout<<"Bienvenido..."<<endl;
						break;
					}else{
						cout<<"Pasword incorrecto..."<<endl;
						intento_admin++;
					}
				}while(intento_admin<3);
				system("cls");
				if(intento_admin<3){
					do{
						do{
							system("cls");
							cout<<"1.INGRESAR UN NUEVO VEHICULO "<<endl;
	        				cout<<"2.REVISAR LISTA DE VEHICULOS "<<endl;
	        				cout<<"3.REVISAR LISTA DE CLIENTES"<<endl;
	        				cout<<"4.SALIR"<<endl;
	        				cin>>SubMenu;
						}while(SubMenu<1 || SubMenu>4);
						switch(SubMenu){
							case 1:
								do{
									cout<<"TIPO DE VEHICULO"<<endl;
									cout<<"1.Motocileta"<<endl;
									cout<<"2.Automovil"<<endl;
									cin>>SubMenu2;
								}while(SubMenu2<1 || SubMenu2>2);
								switch(SubMenu2){
									case 1:
										fflush(stdin);
										cout<<"DATOS DE LA NUEVA MOTOCICLETA"<<endl;
										VehiculoProvicional.Tipo = "Motocicleta";
										cout<<"Color:...";
										getline(cin,VehiculoProvicional.color);
										cout<<"Marca:...";
										getline(cin,VehiculoProvicional.marca);
										cout<<"Modelo:....";
										getline(cin,VehiculoProvicional.modelo);
										cout<<"Anio:...";
										cin>>VehiculoProvicional.anio;
										cout<<"Precio:...";
										cin>>VehiculoProvicional.precio;
										do{
											cout<<"Guardar Datos del nuevo vehiculo "<<endl;
											cout<<"[1]SI   [2]NO"<<endl;
											cin>>SubMenu3;
										}while(SubMenu3<1 || SubMenu3>2);
										if(SubMenu3==1){
											List_Motocicleta[Cant_Moto] = VehiculoProvicional;
											Cant_Moto++;
										}else{
											cout<<"Saliendo..."<<endl;
											system("pause");
										}
										break;
									case 2:
										fflush(stdin);
										cout<<"DATOS DEL NUEVO AUTOMOVIL"<<endl;
										cout<<"Color:...";
										getline(cin,VehiculoProvicional.color);
										cout<<"Marca:...";
										getline(cin,VehiculoProvicional.marca);
										cout<<"Modelo:....";
										getline(cin,VehiculoProvicional.modelo);
										cout<<"Anio:...";
										cin>>VehiculoProvicional.anio;
										cout<<"Precio:...";
										cin>>VehiculoProvicional.precio;
										do{
											cout<<"Guardar Datos del nuevo vehiculo "<<endl;
											cout<<"[1]SI   [2]NO"<<endl;
											cin>>SubMenu3;
										}while(SubMenu3<1 || SubMenu3>2);
										if(SubMenu3==1){
											List_Automovil[Cant_Carro]=VehiculoProvicional;	
											Cant_Carro++;										
										}else{
											cout<<"Saliendo..."<<endl;
											//system("pause");
										}
										break;
								}
								break;
							case 2:
								if(Cant_Moto>0){
									for(int i=0; i<Cant_Moto; i++){
										cout<<"MOTOCICLETA CODIGO<<"<<i+1<<">> **DESCRIPCION**"<<endl;
										cout<<"COLOR:..."<<List_Motocicleta[i].color<<endl;
										cout<<"MARCA:..."<<List_Motocicleta[i].marca<<endl;
										cout<<"MODELO:...."<<List_Motocicleta[i].modelo<<endl;
										cout<<"ANIO:..."<<List_Motocicleta[i].anio<<endl;
										cout<<"PRECIO:..."<<List_Motocicleta[i].precio<<endl;
									}
								}else{
									cout<<"No hay motociletas registradas"<<endl;
								}
								if(Cant_Carro>0){
									for(int i=0; i<Cant_Carro; i++){
										cout<<"AUTOMOVIL CODIGO<<"<<i+1<<">> **DESCRIPCION**"<<endl;
										cout<<"COLOR:..."<<List_Automovil[i].color<<endl;
										cout<<"MARCA:..."<<List_Automovil[i].marca<<endl;
										cout<<"MODELO:...."<<List_Automovil[i].modelo<<endl;
										cout<<"ANIO:..."<<List_Automovil[i].anio<<endl;
										cout<<"PRECIO:..."<<List_Automovil[i].precio<<endl;
									}
								}else{
									cout<<"No hay Automoviles registrados"<<endl;
								}
								//system("pause");
								break;
							case 3:
								if(Cant_Cliente>0){
									system("cls");
									for(int i=0; i<Cant_Cliente; i++){
										cout<<"DNI:..."<<List_Cliente[i].DatosCliente.DNI<<endl;
										cout<<"NOMBRE:..."<<List_Cliente[i].DatosCliente.Nombre<<endl;
										cout<<"APELLIDO PATERNO:..."<<List_Cliente[i].DatosCliente.ApPaterno<<endl;
										cout<<"APELLIDO MATERNO:..."<<List_Cliente[i].DatosCliente.ApMaterno<<endl;
										cout<<"EDAD:..."<<List_Cliente[i].DatosCliente.Edad<<endl;
										cout<<"GENERO(M/F):..."<<List_Cliente[i].DatosCliente.Genero<<endl;
										cout<<"NRO. CELULAR:..."<<List_Cliente[i].DatosCliente.Nro_Cel<<endl;
										cout<<"DIRECCION:..."<<List_Cliente[i].DatosCliente.Direccion<<endl;
										cout<<"**DATOS DEL VEHICULO COMPRADO**"<<endl;
										cout<<"TIPO:..."<<List_Cliente[i].VehiculoComprado.Tipo<<endl;
										cout<<"COLOR:..."<<List_Cliente[i].VehiculoComprado.color<<endl;
										cout<<"MARCA:..."<<List_Cliente[i].VehiculoComprado.marca<<endl;
										cout<<"MODELO:...."<<List_Cliente[i].VehiculoComprado.modelo<<endl;
										cout<<"ANIO:..."<<List_Cliente[i].VehiculoComprado.anio<<endl;
										cout<<"PRECIO:..."<<List_Cliente[i].VehiculoComprado.precio<<endl;
										cout<<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
									}
									//system("pause");
								}else{
									cout<<"No existe cliente registrado actualmente"<<endl;
									//system("pause");
								}
								break;
						};
					}while(SubMenu!=4);					
				}
				break;
			case 2:
				if(Cant_Moto>0 || Cant_Carro>0){
					cout<<"BIENVENIDO A NUESTRA CONSECIONARIA"<<endl;
					cout<<"Aqui encontrara el vehiculo que esta buscando"<<endl;
					system("pause");
					cout<<"\nCATALOGO DE EXISTENCIAS"<<endl;
					if(Cant_Moto>0){
						for(int i=0; i<Cant_Moto; i++){
							cout<<"MOTOCICLETA CODIGO<<"<<i+1<<">> **DESCRIPCION**"<<endl;
							cout<<"COLOR:..."<<List_Motocicleta[i].color<<endl;
							cout<<"MARCA:..."<<List_Motocicleta[i].marca<<endl;
							cout<<"MODELO:...."<<List_Motocicleta[i].modelo<<endl;
							cout<<"ANIO:..."<<List_Motocicleta[i].anio<<endl;
							cout<<"PRECIO:..."<<List_Motocicleta[i].precio<<endl;
						}
					}else{
						cout<<"No hay motociletas registradas"<<endl;
					}
					if(Cant_Carro>0){
						for(int i=0; i<Cant_Carro; i++){
							cout<<"AUTOMOVIL CODIGO<<"<<i+1<<">> **DESCRIPCION**"<<endl;
							cout<<"COLOR:..."<<List_Automovil[i].color<<endl;
							cout<<"MARCA:..."<<List_Automovil[i].marca<<endl;
							cout<<"MODELO:...."<<List_Automovil[i].modelo<<endl;
							cout<<"ANIO:..."<<List_Automovil[i].anio<<endl;
							cout<<"PRECIO:..."<<List_Automovil[i].precio<<endl;
						}
					}else{
						cout<<"No hay Automoviles registrados"<<endl;
					}
					do{
						cout<<"DESEA..."<<endl;
						cout<<"1.Adquirir una motocicleta"<<endl;
						cout<<"2.Adquirir un automovil"<<endl;
						cout<<"3.Salir"<<endl;
						cin>>SubMenu;
					}while(SubMenu<1 || SubMenu>3);
					switch(SubMenu){
						case 1:
							if(Cant_Moto>0){
								for(int i=0; i<Cant_Moto; i++){
									cout<<"MOTOCICLETA CODIGO<<"<<i+1<<">> **DESCRIPCION**"<<endl;
									cout<<"COLOR:..."<<List_Motocicleta[i].color<<endl;
									cout<<"MARCA:..."<<List_Motocicleta[i].marca<<endl;
									cout<<"MODELO:...."<<List_Motocicleta[i].modelo<<endl;
									cout<<"ANIO:..."<<List_Motocicleta[i].anio<<endl;
									cout<<"PRECIO:..."<<List_Motocicleta[i].precio<<endl;
								}
								do{
									cout<<"Ingrese el codigo del vehiculo que desea adquirir"<<endl;
									cin>>CodigoVehiculo;
								}while(CodigoVehiculo<1 || CodigoVehiculo>Cant_Moto);
								VehiculoProvicional=List_Motocicleta[CodigoVehiculo-1];
								fflush(stdin);
								cout<<"REGISTRAR DATOS DEL CLIENTE"<<endl;
								cout<<"Nombre:...";
								getline(cin,ClienteProvicional.DatosCliente.Nombre);
								cout<<"Apellido Paterno:...";
								getline(cin,ClienteProvicional.DatosCliente.ApPaterno);
								cout<<"Apellido Materno:...";
								getline(cin,ClienteProvicional.DatosCliente.ApMaterno);
								cout<<"DNI:...";
								cin>>ClienteProvicional.DatosCliente.DNI;
								cout<<"Edad:...";
								cin>>ClienteProvicional.DatosCliente.Edad;
								cout<<"Genero(M/F):...";
								cin>>ClienteProvicional.DatosCliente.Genero;
								cout<<"Nro. Celular:...";
								cin>>ClienteProvicional.DatosCliente.Nro_Cel;
								cout<<"Direccion:...";
								getline(cin,ClienteProvicional.DatosCliente.Direccion);
								ClienteProvicional.VehiculoComprado = VehiculoProvicional;
								do{
									cout<<"REALIZAR COMPRA"<<endl;
									cout<<"[1]SI   [2]NO"<<endl;
									cin>>SubMenu3;
								}while(SubMenu3<1 || SubMenu3>2);
								if(SubMenu3==1){
									List_Cliente[Cant_Cliente]=ClienteProvicional;
									//For para eliminar el vehiculo de la lista
									for(int i=(CodigoVehiculo-1); i<Cant_Moto-1;i++){
										List_Motocicleta[i]=List_Motocicleta[i+1];
									}
									Cant_Moto--;
									cout<<"Compra Realizada"<<endl;
									Cant_Cliente++;
								}else{
									cout<<"Compra Cancelada"<<endl;
								}																
							}else{
								cout<<"No hay motociletas registradas"<<endl;
							}
							break;
						case 2:
							if(Cant_Carro>0){
								for(int i=0; i<Cant_Carro; i++){
									cout<<"AUTOMOVIL CODIGO<<"<<i+1<<">> **DESCRIPCION**"<<endl;
									cout<<"COLOR:..."<<List_Automovil[i].color<<endl;
									cout<<"MARCA:..."<<List_Automovil[i].marca<<endl;
									cout<<"MODELO:...."<<List_Automovil[i].modelo<<endl;
									cout<<"ANIO:..."<<List_Automovil[i].anio<<endl;
									cout<<"PRECIO:..."<<List_Automovil[i].precio<<endl;
								}
								do{
									cout<<"Ingrese el codigo del vehiculo que desea adquirir"<<endl;
									cin>>CodigoVehiculo;
								}while(CodigoVehiculo<1 || CodigoVehiculo>Cant_Moto);
								VehiculoProvicional=List_Automovil[CodigoVehiculo-1];
								fflush(stdin);
								cout<<"REGISTRAR DATOS DEL CLIENTE"<<endl;
								cout<<"Nombre:...";
								getline(cin,ClienteProvicional.DatosCliente.Nombre);
								cout<<"Apellido Paterno:...";
								getline(cin,ClienteProvicional.DatosCliente.ApPaterno);
								cout<<"Apellido Materno:...";
								getline(cin,ClienteProvicional.DatosCliente.ApMaterno);
								cout<<"DNI:...";
								cin>>ClienteProvicional.DatosCliente.DNI;
								cout<<"Edad:...";
								cin>>ClienteProvicional.DatosCliente.Edad;
								cout<<"Genero(M/F):...";
								cin>>ClienteProvicional.DatosCliente.Genero;
								cout<<"Nro. Celular:...";
								cin>>ClienteProvicional.DatosCliente.Nro_Cel;
								cout<<"Direccion:...";
								getline(cin,ClienteProvicional.DatosCliente.Direccion);
								ClienteProvicional.VehiculoComprado = VehiculoProvicional;
								do{
									cout<<"REALIZAR COMPRA"<<endl;
									cout<<"[1]SI   [2]NO"<<endl;
									cin>>SubMenu3;
								}while(SubMenu3<1 || SubMenu3>2);
								if(SubMenu3==1){
									List_Cliente[Cant_Cliente]=ClienteProvicional;
									//For para eliminar el vehiculo de la lista
									for(int i=(CodigoVehiculo-1); i<Cant_Carro-1;i++){
										List_Automovil[i]=List_Automovil[i+1];
									}
									Cant_Carro--;
									cout<<"Compra Realizada"<<endl;
									Cant_Cliente++;
								}else{
									cout<<"Compra Cancelada"<<endl;
								}									
							}else{
								cout<<"No hay Automoviles registrados"<<endl;
							}
							break;
						case 3:
							cout<<"Gracias por su visita"<<endl;
							break;
					}
				}else{
					cout<<"Disculpe... No tenemos Vehiculos registrados"<<endl;
					system("pause");
				}	
				break;
		}	
	}while(entrada != 3);
    system("pause");
}