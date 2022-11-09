/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: miércoles, 7 de noviembre de 2022 16:06:30
 * Purpose: Implementation of the class Areas
 * Enunciado del problema: Calcular el área de algunas figuras geometricas con el con funciones sobrecargadas.
 ***********************************************************************/

#include "Areas.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

double Areas::getVariableA(void)
{
   return variableA;
}


void Areas::setVariableA(double newVariableA)
{
   variableA = newVariableA;
}


double Areas::getVariableB(void)
{
   return variableB;
}

void Areas::setVariableB(double newVariableB)
{
   variableB = newVariableB;
}

double Areas::getVariableC(void)
{
   return variableC;
}


void Areas::setVariableC(double newVariableC)
{
   variableC = newVariableC;
}


Areas::Areas()
{
}


double Areas::calcularArea(double variableA, int seleccion){
	
	double area;
	setVariableA(variableA);
	
	if(seleccion==1){ 
		area = pow(getVariableA(),2); //CUADRADO 1
	}else if(seleccion==2){	
		area = 3.141592653589793*pow(getVariableA(),2); //CIRCULO 2
	}
	return area;
}


double Areas::calcularArea(double variableA, double variableB, int seleccion){
	
	double area;
	setVariableA(variableA);
	setVariableB(variableB);
	
	if(seleccion==3 || seleccion==4){
		area = getVariableA()*getVariableB(); //RECTANGULO 3 y PARALELOGRAMO 4
	}else if(seleccion==5 || seleccion==6){
		area = (getVariableA()*getVariableB())/2; // TRIANGULO 5, ROMBO 6
	}else if(seleccion==7){
		area = (getVariableA()*5*getVariableB())/2; //PENTAGONO 7
	}else if(seleccion==8){
		area = (getVariableA()*6*getVariableB())/2; //HEXAGONO 8
	}                                 
	
	return area;
	
}


double Areas::calcularArea(double variableA, double variableB, double variableC){
	double area;
	setVariableA(variableA);
	setVariableB(variableB);
	setVariableC(variableC);
	
	area = ((getVariableA() + getVariableB())/2)*getVariableC(); //TRAPECIO 9
	return area;
}


int Areas::ingresarEnteros() {
	char *dato=new char[10];
	int i=0;
	int numero;
	char c;
	while((c=getch())!=13){
		
		if(c>='0' && c<='9'){
			
			dato[i++]=c;
			printf("%c",c);
			numero = atoi(dato);
				
		}else if(c==8){
		
			dato[i]=0;
			i--;
				
			putchar(8);
			putchar(32);
			putchar(8);			
		}
	}
	dato[i]='\0';
	return numero;
}

double Areas::ingresaDoubles() {
	char *dato=new char[10];
	int i=0;
	double numero;
	int cont=0;
	char c;
	while((c=getch())!=13){
		
		if(c>='0' && c<='9'){
			
			dato[i++]=c;
			printf("%c",c);	
			numero=atof(dato);	
		}else if(c=='.'&&cont<1){
			printf("%c",c);
			dato[i++]=c;
			cont ++;
			numero=atof(dato);
		}else if(c==8){
		
			dato[i]=0;
			i--;	
			putchar(8);
			putchar(32);
			putchar(8);			
		} 
	}
	dato[i]='\0';
	return numero;
}















