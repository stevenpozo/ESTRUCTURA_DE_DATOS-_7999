/***********************************************************************
 * Module:  Recursividad.cpp
 * Author:  steve
 * Modified: domingo, 13 de noviembre de 2022 16:38:21
 * Purpose: Implementation of the class Recursividad
 ***********************************************************************/

#include "Recursividad.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#define TAM 100
using namespace std;

int Recursividad::getFila(void)
{
   return fila;
}


void Recursividad::setFila(int newFila)
{
   fila = newFila;
}


int Recursividad::getColumna(void)
{
   return columna;
}


void Recursividad::setColumna(int newColumna)
{
   columna = newColumna;
}

///
int Recursividad::getOpcion(void)
{
   return opcion;
}


void Recursividad::setOpcion(int newOpcion)
{
   opcion = newOpcion;
}

Recursividad::Recursividad()
{
}


void Recursividad::finalize(void)
{
   // TODO : implement
}
int Recursividad::multiplicarRecursivaMatrices(int matriz1[][TAM], int matriz2[][TAM], int fila, int columna){
	if((fila==0)&&(columna==0))
		return matriz1[fila][columna]+matriz2[fila][columna];
	else{
		if(fila>-1){
			columna--;
			if(columna>=-1)
				return matriz1[fila][columna+1]*matriz2[fila][columna+1]+sumarRecursivaMatrices(matriz1, matriz2, fila, columna);
			else
				return sumarRecursivaMatrices(matriz1, matriz2, fila-1, getColumna()-1);
		}
	}
	return 0;
	return 0;
}

int Recursividad::sumarRecursivaMatrices(int matriz1[TAM][TAM], int matriz2[TAM][TAM], int fila, int columna){
	if((fila==0)&&(columna==0))
		return matriz1[fila][columna]+matriz2[fila][columna];
	else{
		if(fila>-1){
			columna--;
			if(columna>=-1)
				return matriz1[fila][columna+1]+matriz2[fila][columna+1]+sumarRecursivaMatrices(matriz1, matriz2, fila, columna);
			else
				return sumarRecursivaMatrices(matriz1, matriz2, fila-1, getColumna()-1);
		}
	}
	return 0;
}


void Recursividad::imprimir(int vect[TAM][TAM] ,int fila,int columna){
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<vect[i][j]<<" ";
		}
		cout<<"\n";
	}
}


void Recursividad::crearMatriz( int matriz[TAM][TAM],int fila, int columna){
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			cout<<"Digite un numero: ["<< i+1<<","<< j+1<<"]"<<endl;
			matriz[i][j] = ingresarEnteros();
			cout<<"\n";
		}
	}
	cout<<"\n";
	
}


void Recursividad::ingresarDatosMatriz(){
	int numeros[50][50];
	int filas, columnas;
	int opcion;
	do{
		cout<<"------------------SUMA Y MULTIPLICACION DE MATRICES---------------"<<endl;
		cout<<"1. Suma Matrices"<<endl;
		cout<<"2. Multiplicacion de matrices "<<endl;
		opcion=ingresarEnteros();
		if(opcion<1 || opcion>2){
			cout<<"\nIngrese una opcion correcta"<<endl;
		
			system("PAUSE");
			system("CLS");
		}
	}while(opcion<1 || opcion>2 );
		setOpcion(opcion);
		
	do{
		cout<<"\t\tMatrices cuadradas"<<endl;
		cout<<"TAMANIO DE MATRIZ A Y B"<<endl;
		cout<<"Numero de filas: ";
		filas=ingresarEnteros();
		cout<<"\nNumero de columnas: ";
		columnas=ingresarEnteros();
		cout<<"\n";
		if(filas<0 ||columnas<0 ){
			system("CLS");
		}
		if( columnas!=filas){
			cout<<"LAS FILAS Y COLUMNAS DE LAS MATRICES NO CORRESPONDEN A UNA CUADRATICA"<<endl;
			cout<<"ingrese nuevamente"<<endl;
			system("PAUSE");
			system("CLS");
		}
	}while(columnas<0 || filas<0 || columnas!=filas );
		setFila(filas);
		setColumna(columnas);
}


int Recursividad::ingresarEnteros(void){
	char *dato=new char[10];
	int i=0;
	int numero;
	char c;
	while((c=getch())!=13){
		
		if(c>='0' && c<='9' || c==45){
			
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


















