#pragma once
#include <iostream>
#include <string>

using namespace std;

class Empleado{
	private:
		string nombre;
		string apellido;
		string cargo;
		
		char *cedula;
		
		double salario;
		int horasExTrabajo;
   		int jornada;

		
	public:
		
		void setNombre(string Nombre);
		void setApellido(string Apellido);
		void setCargo(string cargo);
		void setCedula(char* cedula);
		void setSalario(double salario);
		void setHorasExTrabajo(int newHorasExTrabajo);
		void setJornada(int newJornada);

		
		string getNombre(void);
		string getApellido(void);
		string getCargo(void);
		int getHorasExTrabajo(void);
		int getJornada(void);
		char* getCedula(void);
		double getSalario(void);
		
		
		
		
		Empleado();
		~Empleado();
		
};


Empleado::Empleado(){
	this->nombre="";
}
Empleado::~Empleado(){
	
}

void Empleado::setNombre(string Nombre){
	this->nombre=Nombre;
}
void Empleado::setApellido(string Apellido){
	this->apellido=Apellido;
}
void Empleado::setCargo(string cargo){
	this->cargo=cargo;
}
void Empleado::setCedula(char* cedula){
	this->cedula=cedula;
}
void Empleado::setSalario(double salario){
	this->salario=salario;
}
void Empleado::setHorasExTrabajo(int newHorasExTrabajo){
   this->horasExTrabajo = newHorasExTrabajo;
}

void Empleado::setJornada(int newJornada){
	this->jornada = newJornada;
}



		
string Empleado::getNombre(void){
	return nombre;
}
string Empleado::getApellido(void){
	return apellido;
}
string Empleado::getCargo(void){
	return cargo;
}
char* Empleado::getCedula(void){
	return cedula;
}	
double Empleado::getSalario(void){
	return salario;
}


int Empleado::getHorasExTrabajo(void){
   return horasExTrabajo;
}

int Empleado::getJornada(void){
	return jornada;
}
