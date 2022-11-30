/***********************************************************************
 * Module:  Ingreso.cpp
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:19:19
 * Purpose: Implementation of the class Ingreso
 ***********************************************************************/

#include "Ingreso.h"
#define FONDO_RESERVA 0.0833
#define REC_SEMANAL 1.25
#define REC_FIN_SEMANA 1.50
#define REC_FERIADO 2

/*
@Constructor 
*/
Ingreso::Ingreso(){
}
/*
@name function: calcularMontoHorasExtras
@return varible type: double
@parameters: int nHoras, double salario, int jornada

	-la funcion @calcularMontoHorasExtras pide por parametros las horas extras laboradas, el salario y la jornada(entre semana, fin de semana, feriado)
	-El getJornada valida la opcion elejida sbre la jornada y calcula el monto por horas extras que debe recibir el empleado y retorna un tipo de dato double.

*/

double Ingreso::calcularMontoHorasExtras(int nHoras, double salario, int jornada){
	
	double montoHorasExtras;
	double valorPorHora;
	
	if(jornada== 1){ //trabajo entre semana
		valorPorHora=salario/176; //176 horas laborables 
		montoHorasExtras=valorPorHora*nHoras*REC_SEMANAL;
	}else if(jornada==2){ // trabajo fin de semana
		valorPorHora=salario/176;
		montoHorasExtras=valorPorHora*nHoras*REC_FIN_SEMANA;
	}else if(jornada==3){ // trabajo feriado
		valorPorHora=salario/176;
		montoHorasExtras=valorPorHora*nHoras*REC_FERIADO;
	}else if(jornada==4){
		montoHorasExtras=salario/176;
	}
	return montoHorasExtras;
}
/*
@name function: calcularTasaIngresoIESS
@return varible type: double
@parameters: double montoHorasExtras, double salario.

	-la funcion @calcularTasaIngresoIESS pide como parámetros el monto por horas extras y el salario.
	-Suma el monto por horas extras y el salario y retorna la tas ade ingreso de tipo double
*/

double Ingreso::calcularTasaIngresoIESS(double montoHorasExtras, double salario){
	double tasaIngresoIess;
	tasaIngresoIess= salario+montoHorasExtras;
	return tasaIngresoIess;
}

/*
@name function: calcularFondoReserva
@return varible type: double
@parameters: double tasaIngresoIess

	-la funcion @calcularFondoReserva pide como parámetros la tasa de ingreso al IESS
	-Se multiplica la tasa de ingreso al Iess por el 8.33% que equivale al fondo de reserva en Ecuador y retorna un tipo de dato double
*/

double Ingreso::calcularFondoReserva(double tasaIngresoIess){
	double fondoReserva;
	fondoReserva = tasaIngresoIess*FONDO_RESERVA;
	return fondoReserva;
}

/*
@name function: calcularTotalIngreso
@return varible type: double
@parameters: double tasaIngresoIess, double fondoReserva

	-la funcion @calcularTotalIngreso pide como parametro la tasa de ingreso al Iess y el fondo de reserva
	- La suma de la tas ade ingreso al Iess y la reserva me retorna el total de ingreso como tipo de dato double
*/
double Ingreso::calcularTotalIngreso(double tasaIngresoIess, double fondoReserva){
	double totalIngreso;
	totalIngreso=tasaIngresoIess+fondoReserva;
	return totalIngreso;
}

