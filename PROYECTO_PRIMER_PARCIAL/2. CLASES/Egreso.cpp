/***********************************************************************
 * Module:  Egreso.cpp
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:18:41
 * Purpose: Implementation of the class Egreso
 ***********************************************************************/

#include "Egreso.h"
#define IEES 0.0945
#define ANTICIPO 0.5 //50% del ingreso total

/*
@Constructor
*/
Egreso::Egreso()
{
}

/*
@name function: cpagarValorIEES
@return varible type: double
@parameters: double tasaIngresoIess

	-la funcion @cpagarValorIEES pide como parámetros la tasa de ingreso al Iess.
	-Multiplica la tasa de ingreso al Iess por el 9.45% que consta del IESS en Ecuador y retorna un dato de tipo double
*/

double Egreso::pagarValorIEES(double tasaIngresoIess){
	double valorIess;
	valorIess=tasaIngresoIess*IEES;
	return valorIess;
}

/*
@name function: calcularAnticipo
@return varible type: double
@parameters: double totalIngreso

	-la funcion @calcularAnticipo pide como parámetros el total de Ingreso.
	-Multiplica el total de ingreso por el 50% que equivale el anticipo en Ecuador.
*/
double Egreso::calcularAnticipo(double totalIngreso){
	double anticipo;
	anticipo = totalIngreso*ANTICIPO;
	return anticipo;
}

/*
@name function: calcularTotalEgreso
@return varible type: double
@parameters: double valorIess, double anticipo

	-la funcion @calcularTotalEgreso pide el monto del valor Iess y el anticipo.
	-Se suma el valor Iess y el anticipo para retornar el total de egresos de tipo double
*/
double Egreso::calcularTotalEgreso(double valorIess, double anticipo){
	double totalEgreso;
	totalEgreso=valorIess+anticipo;
	return totalEgreso;
	
}

/*
@name function: calcularSueldoRecibir
@return varible type: double
@parameters: double totalIngreso, double totalEgreso

	-la funcion @calcularSueldoRecibir pide como parámetros el total de ingreso y el total del egreso
	-Resta el total de Ingreso y el de egreso para retornar el sueldo a recibir tomando en cuenta que ya recibió la quincena de tipo double
*/
double Egreso::calcularSueldoRecibir(double totalIngreso, double totalEgreso){
	double sueldoRecibir;
	sueldoRecibir=totalIngreso-totalEgreso; 
	return sueldoRecibir;
}

/*
@name function: calcularSueldoSinQuincena
@return varible type: double
@parameters: double totalIngreso,double valorIess

	-la funcion @calcularSueldoSinQuincena pide como parámetros el total de ingreso y el valor del Iess
	-Resta el total de ingreso y el valor del Iess para calcukar el sueldo total incluyendo la quincena , este es un dato óde tipo double
*/
double Egreso::calcularSueldoSinQuincena(double totalIngreso,double valorIess){
	double sueldoTotal;
	sueldoTotal=totalIngreso-valorIess;
	return sueldoTotal;
}
