/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creación: lunes, 7 de noviembre de 2022 16:53:36
 * Purpose: estresarnos
 * Enunciado del problema: Sobrecarga de operadores
 ***********************************************************************/ 
 
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include "Sobrecarga.cpp"
using namespace std;


int main()
{
	
	double cA1, cA2, cA3, cA4;
	double cB1, cB2, cB3, cB4;
	Sobrecarga sobrecarga;
	cout<<"-------TABLA DE VERDAD CONJUNCION---- "<<endl;
	cout<<"Ingrese datos: "<<endl;
	cout<<"Ingrese datos del conjunto A: "<<endl;
	cout<<"Primer dato: ";
	cA1=sobrecarga.ingresaDoubles();
	cout<<"\nSegundo dato: ";
	cA2=sobrecarga.ingresaDoubles();
	cout<<"\nTercer dato: ";
	cA3=sobrecarga.ingresaDoubles();
	cout<<"\nCuarto dato: ";
	cA4=sobrecarga.ingresaDoubles();
	cout<<"\n\nIngrese datos del conjunto B: ";
	cout<<"\nPrimer dato: ";
	cB1=sobrecarga.ingresaDoubles();
	cout<<"\nSegundo dato: ";
	cB2=sobrecarga.ingresaDoubles();
	cout<<"\nTercer dato: ";
	cB3=sobrecarga.ingresaDoubles();
	cout<<"\nCuarto dato: ";
	cB4=sobrecarga.ingresaDoubles();
	cout<<"\n";
   	Sobrecarga A(cA1, cA2, cA3, cA4 );
    Sobrecarga B(cB1, cB2, cB3, cB4 );
    Sobrecarga C= A && B;
	
	cout << "A = " << A.getX() << ',' << A.getY() << ',' << A.getA() << ',' << A.getB() << "\n";
    cout << "B = " << B.getX() << ',' << B.getY() << ','<< B.getA() << ',' << B.getB() << "\n";
    cout << "C = " << C.getX() << ',' << C.getY() << ','<< C.getA() << ',' << C.getB() << "\n";

    return 0;
    
}