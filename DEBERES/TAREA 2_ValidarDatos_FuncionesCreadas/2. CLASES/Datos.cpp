/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creación: sábado, 29 de octubre de 2022 16:53:36
 * Purpose: estresarnos
 * Enunciado del problema: Crear un programa que nos permita validar el ingreso de datos de tipo entero, flotante, char y double.
 ***********************************************************************/ 
#include "Datos.h"
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
double Datos::getReales(void)
{
   return reales;
}

void Datos::setReales(double newReales)
{
   reales = newReales;
}

int Datos::getEnteros(void)
{
   return enteros;
}

void Datos::setEnteros(int newEnteros)
{
   enteros = newEnteros;
}

float Datos::getFlotantes(void)
{
   return flotantes;
}

void Datos::setFlotantes(float newFlotantes)
{
   flotantes = newFlotantes;
}

char Datos::getCadenas(void)
{
   return cadenas;
}

void Datos::setCadenas(char newCadenas)
{
   cadenas = newCadenas;
}

Datos::Datos()
{
}

int Datos::ingresarReales(const char* fm, void* var) {
	
	int ch;

    if(!scanf(fm, var))
    {
        while((ch = getchar()) != '\n' && ch != EOF);
        return 1;
    }

    if(getchar() != '\n')
    {
        while((ch = getchar()) != '\n' && ch != EOF);
        return 1;
    }
    return 0;
}



int Datos::ingresarFlotantes(const char* fm, void* var) {
	
int ch;

    if(!scanf(fm, var))
    {
        while((ch = getchar()) != '\n' && ch != EOF);
        return 1;
    }

    if(getchar() != '\n')
    {
        while((ch = getchar()) != '\n' && ch != EOF);
        return 1;
    }
	return 0;
} 



char Datos::ingresarCadenas() {
	cout<<"Ingrese algun mensaje: ";
	char *dato=new char[10];
	char c;
	int i=0;
	while((c=getch())!=13) {
		if(c>='a' && c<='z'){ 
			dato[i++]=c;
			printf("%c",c);
		}else if(c==8){
		
			dato[i]=0;
			i--;
				
			putchar(8);
			putchar(32);
			putchar(8);			
		}
	}
	dato[i]='\0';
	return 0 ;
}




int Datos::ingresarEnteros() {
	int number;
	
	cout<<"Ingrese numeros enteros: ";
	char *dato=new char[10];
	char c;
	int i=0;
	
	while((c=getch())!=13){
		
		if(c>='0' && c<='9'){
			
			dato[i++]=c;
			printf("%c",c);
				
		}else if(c==8){
		
			dato[i]=0;
			i--;
				
			putchar(8);
			putchar(32);
			putchar(8);			
		}
	}
	
	dato[i]='\0';
	return 0;
}
