/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: miércoles, 4 de noviembre de 2022 14:06:30
 * Purpose: Implementation of the classes
 * Enunciado del problema: Simular tabla de Amortizacion, si la fecha de pago cae domingo, moverlo al dia lunes.
 ***********************************************************************/ 

#include <iostream>
#include "PrestamoAnual.cpp"
#include "PrestamoMensual.cpp"
#include <cstdlib>

using namespace std;

int main(){
	
	PrestamoAnual prestamoAnual;
	PrestamoMensual prestamoMensual;
	double montoCredito;
	double interes;
	int opcion;
	int plazo;
	
	cout<<"--------------Prestamos Quirografarios---------------"<<endl;
	cout<<"\tSistema de Amortizacion Francesa"<<endl;
	
	cout<<"\nIngrese el monto del credito :";
	cin>>montoCredito;
	prestamoAnual.setMonto_Credito(montoCredito);
	prestamoMensual.setMonto_Credito(montoCredito);
	
	cout<<"\nIngrese la tasa de interes anual en %: ";
	cin>>interes;
	prestamoAnual.setTasa_Interes(interes);
	prestamoMensual.setTasa_Interes(interes);
	
	cout<<"\nTipo de plazos: "<<endl;
	cout<<"\t1. Plazos anuales "<<endl;
	cout<<"\t2. Plazos mensuales "<<endl;
	cout<<"seleccionar: ";
	cin>>opcion;
		if(opcion==1){
			cout<<"\nIngrese el numero de plazos anuales:  ";
			cin>> plazo;
			prestamoAnual.setPlazo(plazo);
			prestamoAnual.mostrarTabla();
			system("PAUSE");
			system("CLS");
			fflush(stdin);
			return main();
			
			
		}else {
			do{
				cout<<"\nIngrese el numero de plazos mensuales:  ";
				cin>> plazo;
			}while(plazo>12);
				prestamoMensual.setPlazo(plazo);
				prestamoMensual.mostrarTabla();	
				system("PAUSE");
				system("CLC");
				fflush(stdin);
				return main();	
		}
	return 0;
}