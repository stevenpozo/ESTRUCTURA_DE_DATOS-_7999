/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: miércoles, 4 de noviembre de 2022 14:06:30
 * Purpose: Implementation of the classes
 * Enunciado del problema: Simular tabla de Amortizacion, si la fecha de pago cae domingo, moverlo al dia lunes.
 ***********************************************************************/ 

#include "PrestamoMensual.h"

#include <Math.h>
#include <iostream>
#include "ValidarFechaDePagoMensual.cpp"

using namespace std;


double PrestamoMensual::getMonto_Credito(void)
{
   return monto_Credito;
}


void PrestamoMensual::setMonto_Credito(double newMonto_Credito)
{
   monto_Credito = newMonto_Credito;
}


double PrestamoMensual::getTasa_Interes(void)
{
   return tasa_Interes;
}



void PrestamoMensual::setTasa_Interes(double newTasa_Interes)
{
   tasa_Interes = newTasa_Interes;
}



int PrestamoMensual::getPlazo(void)
{
   return plazo;
}



void PrestamoMensual::setPlazo(int newPlazo)
{
   plazo = newPlazo;
}



PrestamoMensual::PrestamoMensual()
{
}

double PrestamoMensual::calcularCuotaPagar(void){
	double dividendo;
	double divisor;
	double cuotaPagar;
	
	dividendo = getMonto_Credito()*(getTasa_Interes()/12)/100;
	divisor = 1-pow((1+((getTasa_Interes()/12)/100)),-getPlazo());
	cuotaPagar = dividendo/divisor;
	
	return cuotaPagar;
}

double PrestamoMensual::calcularIntereses(double monto1){
	double interes;
	interes = monto1*(getTasa_Interes()/(12*100));
	return interes;
}

double PrestamoMensual::calcularCuotaAmortizacion(double monto1){
	double cuotaAmortizacion;
	double cuotaPagar;
	double interes;
	
	interes = calcularIntereses(monto1);
	cuotaPagar = calcularCuotaPagar();
	
	cuotaAmortizacion = cuotaPagar - interes;
	
	return cuotaAmortizacion;
}

double PrestamoMensual::calcularCapitalPendiente(double monto2){
	double capitalPendiente;
	double cuotaAmortizacion;
	
	cuotaAmortizacion = calcularCuotaAmortizacion(monto2);
	capitalPendiente = monto2-cuotaAmortizacion;
	
	return capitalPendiente;
}

void PrestamoMensual::mostrarTabla(){
	
	double montoInicial=getMonto_Credito();
	double cuotaMensual=calcularCuotaPagar();//este valor se mantiene constante
	double interesAnual=calcularIntereses(montoInicial);//segunda fila y depende del capital pendiente
	double amortizacionAnual=calcularCuotaAmortizacion(montoInicial);//tercera fila y depende del capital pendiente
	double capitalPendiente=calcularCapitalPendiente(montoInicial);
	
	
	for(int i=0;i<getPlazo();i++){
		
		//cout<<"cuota Anual: "<<cuotaAnual<<" interes: "<<interesAnual<<" Amortizado: "<<amortizacionAnual<<" Capital Pendiente: "<<capitalPendiente<<endl;
		printf("cuota Anual: %.2f  |  interes:  %.2f  |  Amortizado: %.2f  |  Capital Pendiente: %.2f  |  Fecha de Pago:",cuotaMensual,interesAnual,amortizacionAnual,capitalPendiente);
		generatePayDatesMontly(getPlazo(),i+1);

		montoInicial=capitalPendiente;
		interesAnual=calcularIntereses(montoInicial);
		amortizacionAnual=calcularCuotaAmortizacion(montoInicial);
		capitalPendiente=calcularCapitalPendiente(montoInicial);
		
	}
	
}










