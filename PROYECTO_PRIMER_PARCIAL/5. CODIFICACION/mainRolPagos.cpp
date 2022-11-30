#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Empleado.cpp"
#include "Ingreso.cpp"
#include "Egreso.cpp"
#include "ValidarFechaDePago.cpp"

int main(){
	
	Empleado empleado;
	Empleado guardarEmpleado;
	Ingreso ingreso;
	Egreso egreso;
	
	
	double montoHorasExtras, tasaIngresoIess, fondoReserva, totalIngreso;
	double valorIess, anticipo, totalEgreso, salarioConQuincena, salarioTotal;
	int *fecha;
	
	do{
	
		empleado.mostrarMenu();
		switch(empleado.getOpc()){
			case 1:
				guardarEmpleado=empleado.pedirDatos();
				empleado.elegirJornada();
				cout<<"\n";
				system("PAUSE");
				system("CLS");
				break;
			case 2:
				montoHorasExtras=ingreso.calcularMontoHorasExtras(empleado.getHorasExTrabajo(),guardarEmpleado.getSalario(),empleado.getJornada());
				tasaIngresoIess=ingreso.calcularTasaIngresoIESS(montoHorasExtras,guardarEmpleado.getSalario());
				fondoReserva=ingreso.calcularFondoReserva(tasaIngresoIess);
				totalIngreso=ingreso.calcularTotalIngreso(tasaIngresoIess,fondoReserva); 
				
				valorIess=egreso.pagarValorIEES(tasaIngresoIess);
				anticipo=egreso.calcularAnticipo(totalIngreso);
				totalEgreso=egreso.calcularTotalEgreso(valorIess,anticipo);
				salarioConQuincena=egreso.calcularSueldoRecibir(totalIngreso,totalEgreso);
				salarioTotal=egreso.calcularSueldoSinQuincena(totalIngreso,valorIess);
				
				
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\nNombre y apellido: "<<guardarEmpleado.getNombre()<<" "<<guardarEmpleado.getApellido()<<endl;
				cout<<"\nCargo: "<<guardarEmpleado.getCargo()<<"\t\tCedula: "<<guardarEmpleado.getCedula()<<endl;
				cout<<"\n-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\tROL DE PAGOS"<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<" INGRESOS: "<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				printf("\t*Monto horas extras: %.2f\n",montoHorasExtras);                  
				printf("\t*Tasa de ingreso al IESS: %.2f\n",tasaIngresoIess); 
				printf("\t*Fondo de Reserva: %.2f\n",fondoReserva);               
				printf("\t*Total ingreso: %.2f\n",totalIngreso); 
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<" EGRESOS: "<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				printf("\t*Valor IESS: %.2f\n",valorIess);             
				printf("\t*Anticipo: %.2f\n",anticipo);
				printf("\t*Total egreso: %.2f\n",totalEgreso);                   
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t*Salario total cuando recibe quincena: "<<endl;   
				printf("\t*TOTAL: %.2f\n",salarioConQuincena);            
				cout<<"\t*Salario total cuando no recibe quicena: "<<endl;
				printf("\t*TOTAL: %.2f\n",salarioTotal);
				cout<<"-------------------------------------------------------------------------------"<<endl;
				mostrarFechaActual();
				system("PAUSE");
				system("CLS");
				
				
				break;
			case 3:
			
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				empleado.mostrarCDoc();
				system("PAUSE");
				system("CLS");
				break;
			case 8:
				exit(1);
				break;
			default:
				cout<<"\nElija una opcion valida"<<endl;
				break;
		}
	}while(empleado.getOpc()<=7 || empleado.getOpc()>0);
	return 0;
}