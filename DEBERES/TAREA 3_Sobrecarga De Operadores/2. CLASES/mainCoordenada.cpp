/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creación: lunes, 31 de octubre de 2022 16:53:36
 * Purpose: estresarnos
 * Enunciado del problema: Sobrecarga de operadores (&&,||)
 ***********************************************************************/ 
 
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include "Coordenada.cpp"
using namespace std;


int main()
{
   	Coordenada A(-50, 75 );
    Coordenada B(-150, 175 );
    Coordenada C = A && B;
	
	cout << "A = " << A.getX() << ',' << A.getY() << "\n";
    cout << "B = " << B.getX() << ',' << B.getY() << "\n";
    cout << "C = " << C.getX() << ',' << C.getY() << "\n";

    return 0;
    
}