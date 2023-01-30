/*clase de menus*/
#include <iostream>
#include "Validaciones.hpp"
#include "Empleado.h"

class Menus{
	private:
	
	char* pedirCedula(void);
	string pedirCargo(void);
	Validaciones validacion;
	
	public:
		Empleado pedirDatosEmpleado(void);
		int menuPrinciPal(void);
		Empleado menuBusqueda();
		Menus();
		~Menus();
		
};

Menus::Menus(){
	
}

Menus::~Menus(){
	
}

int Menus::menuPrinciPal(void){
	int opc;
	do{
		cout<<"\n1. Registrar empleado"<<endl;
		cout<<"2. Generar rol de pagos"<<endl;
		cout<<"3. Mostrar nomina de empleados"<<endl;
		cout<<"4. Buscar empleado"<<endl;
		cout<<"5. C Docs"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"Seleccion: ";
		opc=validacion.validarEnteros();
		if(opc>8 || opc<1){
			cout<<"Elija una opcion valida"<<endl;
			system("PAUSE");
			system("CLS");
		}
	}while(opc>8 || opc<1);
	system("CLS");
	
	return opc;
}


Empleado Menus::pedirDatosEmpleado(void){
	
	
	Empleado empleado2;
	string nombre;
	char *cedula;
	string apellido;
	string cargo;
	double salario;
	int horasExtras;
	int jornada;
	
	cout<<"\t\tESCUELA GUATITAS DEL SABER"<<endl;
	cout<<"Datos del empleado:"<<endl;
	cout<<"\n*Nombre:";
	nombre=validacion.validarStrings();
	cout<<"\n*Apellido: ";
	apellido=validacion.validarStrings();
	cedula=pedirCedula();
	cargo=pedirCargo();
	cout<<"\n*Salario: ";
	salario=validacion.validarDoubles();
	
	do{
		cout<<"\nElija la jornada si tuvo horas extras "<<endl;
		cout<<"1. Entre semana"<<endl;
		cout<<"2. Fin de semana"<<endl;
		cout<<"3. Feriado"<<endl;
		cout<<"4. No tuve horas extras"<<endl;
		cout<<"Opcion: ";
		jornada=validacion.validarEnteros();
		if(jornada>4 || jornada<1){
			cout<<"Elija una opcion valida"<<endl;
		}
	}while(jornada>4 || jornada<1);
	if(jornada!=4){
		cout<<"\nIngrese la cantidad de horas extras aportadas: ";
		horasExtras = validacion.validarEnteros();	
	}else{
		horasExtras = 0;
	}
	
	
	
	
	empleado2.setNombre(nombre);
	empleado2.setApellido(apellido);
	empleado2.setCargo(cargo);
	empleado2.setSalario(salario);
	empleado2.setCedula(cedula);
	empleado2.setJornada(jornada);
	empleado2.setHorasExTrabajo(horasExtras);
		
	return empleado2;
}

char* Menus::pedirCedula(void){
	char *cedula;
	bool validar=false;
	int longitud;
	bool bandera=false;
	do{
		cout<<"\n*Cedula: ";
		cedula=validacion.validarEnterosCedula();
		bandera=validacion.verificacionCedula(cedula);
		if(bandera==validar){
			cout<<"\nIngrese una cedula valida"<<endl;
		}
	}while(bandera==validar);
	return cedula;
}


string Menus::pedirCargo(void){
	
	string cargo;
	int opc;
	do{
		cout<<"\n\t\tElija el cargo del personal: "<<endl;
		cout<<"1. Director"<<endl;
		cout<<"2. Subdirector"<<endl;
		cout<<"3. Inspector"<<endl;
		cout<<"4. Docente"<<endl;
		cout<<"5. Conserje"<<endl;
		cout<<"6. Enfermera"<<endl;
		cout<<"7. Auxiliar de limpieza"<<endl;
		cout<<"Seleccion: ";
		opc=validacion.validarEnteros();
		if(opc>7 || opc<1){
			cout<<"\nIngrese una opcion correcta"<<endl;
		}	
	}while(opc>7 || opc<1);
	
	if(opc==1){
			cargo = "Director";
		}else if(opc==2){
			cargo = "Subdirector";
		}else if(opc==3){
			cargo = "Inspector";
		}else if(opc==4){
			cargo = "Docente";
		}else if(opc==5){
			cargo = "Conserje";
		}else if(opc==6){
			cargo = "Enfermera";
		}else if(opc==7){
			cargo = "Auxiliar de limpieza";
		}
		
		return cargo;
}

Empleado Menus::menuBusqueda(){
	Empleado emp;
	string nombre;
	cout<<"Ingrese el 1er Apellido del Empleado"<<endl;
	nombre=validacion.validarStrings();
	emp.setApellido(nombre);
	
	return emp;
}
