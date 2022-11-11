/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creación: lunes, 31 de octubre de 2022 16:53:36
 * Purpose: estresarnos
 * Enunciado del problema: Sobrecarga de operadores (&&,||)
 ***********************************************************************/ 

#include "Sobrecarga.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


Sobrecarga Sobrecarga::operator &&(const Sobrecarga& m) const
{
   Sobrecarga res(x>0 && m.x>0,y>0 && m.y>0,a>0 && m.a>0,b>0 && m.b>0);
    
   return res;
}

double Sobrecarga::ingresaDoubles() {
	char *dato=new char[10];
	int i=0;
	double numero;
	int cont=0;
	char c;
	while((c=getch())!=13){
		
		if(c>='0' && c<='9' || c==45){
			
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

double Sobrecarga::getX(void)
{
   return x;
}

void Sobrecarga::setX(double newX)
{
   x = newX;
}

double Sobrecarga::getY(void)
{
   return y;
}

void Sobrecarga::setY(double newY)
{
   y = newY;
}





double Sobrecarga::getA(void)
{
   return a;
}

void Sobrecarga::setA(double newA)
{
   a = newA;
}

double Sobrecarga::getB(void)
{
   return b;
}

void Sobrecarga::setB(double newB)
{
   b = newB;
}

Sobrecarga::Sobrecarga(const double x,const double y, const double a,const double b)
{
   	this->x = x;
	this->y = y;
	this->a = a;
	this->b = b;
}

Sobrecarga::Sobrecarga()
{
   
}