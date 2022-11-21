
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Matriz.cpp"

using namespace std;

int main(){
	
	int **vect1;
	int **vect2;
	int **vect3;
	int **vect4;
	Matriz matriz;
	
	
	matriz.pedirTamanioMatriz();
	
	cout<<"Matriz A: ";
	vect1 = matriz.crearMatriz(matriz.getFilas(),matriz.getColumnas());
	matriz.encerar(vect1,matriz.getFilas());
	matriz.ingresarDatosMatriz(vect1,matriz.getFilas());
	matriz.imprimir(vect1,matriz.getFilas());
	
	
	if(matriz.getOpcion()==1){
		cout<<"\n\nLA SUMA ENTRE LA MATRIZ A Y B ES: "<<endl;
		vect3 = matriz.sumaMatriz(vect1,vect2,matriz.getFilas(),matriz.getColumnas());
		matriz.imprimir(vect3,matriz.getFilas());
	}else if(matriz.getOpcion()==2){
		cout<<"\n\nLA MULTIPLICACION ENTRE LA MATRIZ A Y B ES: "<<endl;
		vect4 = matriz.multiplicar(vect1,vect2,matriz.getFilas(),matriz.getColumnas());
		matriz.imprimir(vect4,matriz.getFilas());
	}
	
	matriz.limpiarMatriz(vect1,matriz.getFilas());
	matriz.limpiarMatriz(vect2,matriz.getFilas());
	return 0;
}