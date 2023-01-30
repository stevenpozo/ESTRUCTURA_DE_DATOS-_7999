#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include "Menus.cpp"
#include "Empleado.h"
#include "ManejoEmpleados.cpp"



int main(){
	
	Menus menus;
	ManejoEmpleados registro;
	Empleado emp,emp2;
	string nam;
	registro.crearRegistro();
	int opc;
	
	
	
do{
	
		opc=menus.menuPrinciPal();
		menus.~Menus();	
	switch(opc){
			case 1:
				emp=menus.pedirDatosEmpleado();
				registro.registrarEmpleado(emp);
				cout<<"\n";system("PAUSE");system("CLS");
				break;
				
			case 2:
				
				registro.generarRoldePagos(emp2);
				cout<<"\n";system("PAUSE");system("CLS");
				break;
			case 3:
				registro.LeerDatos();
				cout<<"\n";system("PAUSE");system("CLS");
				break;
			case 4:
				emp2=menus.menuBusqueda();
				registro.buscarEmpleado(emp2);
				cout<<"\n";system("PAUSE");system("CLS");
				break;
			case 5:
				registro.mostrarCdoc();
				cout<<"\n";system("PAUSE");system("CLS");
				break;
			case 6:
				exit(1);
				break;
			default:
				cout<<"\nElija una opcion valida"<<endl;
				break;
		}
	}while(opc<=7 || opc>0);
	
	

}