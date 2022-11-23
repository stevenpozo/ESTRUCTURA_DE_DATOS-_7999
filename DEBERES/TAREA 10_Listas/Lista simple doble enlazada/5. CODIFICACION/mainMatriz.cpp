/***********************************************************************
 * Universidad de las fuerzas Armadas ESPE
 * ESTRUCTURA DE DATOS
 * Module:  ModeloMatrices.h
 * Author:  Steven Pozo. Jairo Quilumbaquin
 * Modified: miércoles, 20 de noviembre de 2022 15:35:07
 * Purpose: Elevar a n potencia una matriz 
 ***********************************************************************/
 
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Matriz.cpp"

using namespace std;

int main(){
	int **vect1;
	int **vect2;
	int veces;
	
	Matriz matriz;
	matriz.pedirTamanioMatriz();
	
	cout<<"Matriz A: ";
	vect1 = matriz.crearMatriz(matriz.getFilas(),matriz.getColumnas());
	matriz.encerar(vect1,matriz.getFilas());
	matriz.ingresarDatosMatriz(vect1,matriz.getFilas());
	matriz.imprimir(vect1,matriz.getFilas());

	cout<<"\nMultiplicar n veces: ";
	cin>>veces;
	vect2= matriz.elevarPotencia(vect1,vect1,veces,veces);
	cout<<"\nLa matriz multiplicada por "<<veces<<" veces es: "<<endl;
	matriz.imprimir(vect2,matriz.getColumnas());
	
	
	matriz.limpiarMatriz(vect1,matriz.getFilas());
	matriz.limpiarMatriz(vect2,matriz.getFilas());
	return 0;
}