/***********************************************************************
 * Module:  Empleado.cpp
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:24:01
 * Purpose: Implementation of the class Empleado
 ***********************************************************************/

#include "Empleado.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "Validaciones.cpp"

Validaciones validacion;

using namespace std;

/*
@name function: getHorasExTrabajo, setHorasExTrabajo. 
@return varible type: entero, void.
@parameters: void, int.
*/
int Empleado::getHorasExTrabajo(void){
   return horasExTrabajo;
}
void Empleado::setHorasExTrabajo(int newHorasExTrabajo){
   horasExTrabajo = newHorasExTrabajo;
}

/*
@name function: getJornada, setJornada. 
@return varible type: entero, void.
@parameters: void, int.
*/

int Empleado::getJornada(void){
	return jornada;
}
void Empleado::setJornada(int newJornada){
	jornada = newJornada;
}
/*
@name function: getOpc, setOpc. 
@return varible type: entero, void.
@parameters: void, int.
*/
int Empleado::getOpc(void){
	return opc;
}
void Empleado::setOpc(int newOpc){
	opc = newOpc;
}
/*
@constructor
*/
Empleado::Empleado(){
	
}
/*
@name function: getSalario, setSalario. 
@return varible type: double, void.
@parameters: void, double.
*/
double Empleado::getSalario(void)
{
   return salario;
}

void Empleado::setSalario(double newSalario)
{
   this->salario = newSalario;
}
/*
@name function: getNombre, setNombre. 
@return varible type: string, void.
@parameters: void, string.
*/
string Empleado::getNombre(void)
{
   return nombre;
}

void Empleado::setNombre(string newNombre)
{
   nombre = newNombre;
}
/*
@name function: getApellido, setApellido. 
@return varible type: string, void.
@parameters: void, string.
*/
string Empleado::getApellido(void)
{
   return apellido;
}

void Empleado::setApellido(string newApellido)
{
   apellido = newApellido;
}
/*
@name function: getCedula, setCedula. 
@return varible type: char*, void.
@parameters: void, char*.
*/
char* Empleado::getCedula(void)
{
   return cedula;
}

void Empleado::setCedula(char* newCedula)
{
   cedula = newCedula;
}
/*
@name function: getCargo, setCargo. 
@return varible type: entero, void.
@parameters: void, int.
*/
string Empleado::getCargo(void)
{
   return cargo;
}

void Empleado::setCargo(string newCargo)
{
   cargo = newCargo;
}

///<summary>
///Pide datos
///<summary>
Empleado Empleado::pedirDatos(void){
	
	Empleado empleado2;
	string nombre;
	char *cedula;
	string apellido;
	string cargo;
	double salario;
	int horasExtras;
	int opc;
	
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
	
	empleado2.setNombre(nombre);
	empleado2.setApellido(apellido);
	empleado2.setCargo(cargo);
	empleado2.setSalario(salario);
	empleado2.setCedula(cedula);	
	return empleado2;
}

/*
@name function: elegirJornada
@return varible type: void
@parameters: void

	-la funcion @elejirJornada muestra en consola un menu para que se elija la jornada en la que trabajó horas extras
	-La funcion @elejirJornada no recibe ningún tipo de dato por parámetro y tampoco retorna un tipo de dato

*/
void Empleado::elegirJornada(void){
	
	int jornada, horasExtras;
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
	setJornada(jornada);
	cout<<"\nIngrese la cantidad de horas extras aportadas: ";
	horasExtras = validacion.validarEnteros();
	setHorasExTrabajo(horasExtras);
}

/*
@name function: pedirCedula
@return varible type: void
@parameters: void

	-la funcion @pedirCedula pide al usuario que ingrese su cédula.
	 Si la cédula es incorrecta lo volverá a pedir hasta que ingrese una válida (la validación es referente a la cédula ecuatoriana).
	-La funcion @pedirCedula no recibe ningún tipo de dato por parámetro y tampoco retorna un tipo de dato

*/

char* Empleado::pedirCedula(void){
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

/*
@name function: mostrarMenu
@return varible type: void
@parameters: void

	-la funcion @mostrarMenu muentra un menu con las opciones a realizarse dentro del programa.
	-La funcion @mostrarMenu no recibe ningún tipo de dato por parámetro y tampoco retorna un tipo de dato
*/

void Empleado::mostrarMenu(void){
	int opc;
	do{
		cout<<"\n1. Registrar empleado"<<endl;
		cout<<"2. Generar rol de pagos"<<endl;
		cout<<"3. Mostrar nomina de empleados"<<endl;
		cout<<"4. Actualizar datos de empleado"<<endl;
		cout<<"5. Eliminar datos de empleados"<<endl;
		cout<<"6. Buscar empleado"<<endl;
		cout<<"7. C Docs"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Seleccion: ";
		opc=validacion.validarEnteros();
		if(opc>8 || opc<1){
			cout<<"Elija una opcion valida"<<endl;
			system("PAUSE");
			system("CLS");
		}
	}while(opc>8 || opc<1);
	setOpc(opc);
	system("CLS");
}

void Empleado::mostrarCDoc(void){
	system("C:\\Users\\steve\\Desktop\\PROYECTO\\cDoc\\html\\index.html");
}

string Empleado::pedirCargo(void){
	
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

