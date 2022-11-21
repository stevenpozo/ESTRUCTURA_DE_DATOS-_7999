/***********************************************************************
 * Module:  Matriz.cpp
 * Author:  steve
 * Modified: miércoles, 9 de noviembre de 2022 15:38:11
 * Purpose: Implementation of the class Matriz
 ***********************************************************************/

#include "Matriz.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;


int Matriz::getFilas(void)
{
   return filas;
}

void Matriz::setFilas(int newFilas)
{
   filas = newFilas;
}

int Matriz::getOpcion(void)
{
   return opcion;
}


void Matriz::setOpcion(int newOpcion)
{
   opcion = newOpcion;
}


Matriz::Matriz()
{
}


Matriz::~Matriz()
{
   // TODO : implement
}


int Matriz::getColumnas(void)
{
   return columnas;
}


void Matriz::setColumnas(int newColumnas)
{
   columnas = newColumnas;
}

 
int** Matriz::multiplicar(int **vect1, int **vect2, int filas, int columnas){
   	
  	int **vect3;
    vect3=crearMatriz(filas,columnas);
     
    for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			*(*(vect3+i)+j)=0;
			for (int k=0;k<filas;k++){
				*(*(vect3+i)+j)+=*(*(vect1+i)+k)**(*(vect2+k)+j);	
			}
		}
	}
	
    return vect3;
}

int** Matriz::crearMatriz(int filas,int columnas){
	int **vect;
	
	vect=new int*[filas];
	
	for(int i=0;i<filas;i++){
		vect[i]=new int[columnas];
	}
	return vect;
}


void Matriz::encerar(int **vec,int t){
	
	
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			*(*(vec+i)+j)=0;
		}
	}
	
}



void Matriz::imprimir(int **vec,int t){
	int i;
	
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			cout<<*(*(vec+i)+j)<<" ";
		}
		cout<<"\n";
	}
		
}

void Matriz::ingresarDatosMatriz(int **vec,int t){
	
	
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			cout<<"\nIngrese el elemento"<<"["<<i+1<<"]"<<"["<<j+1<<"]:"<<endl;
			*(*(vec+i)+j)=ingresarEnteros();
			
		}
	}
		cout<<"\n";	
}




void Matriz::limpiarMatriz(int **vect,int t){

	for(int i=0;i<t;i++){
		delete []vect[i];
	}
	delete []vect;
	std::cout<<"Memoria Limpia"<<std::endl;
}



int Matriz::ingresarEnteros() {
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


void Matriz::pedirTamanioMatriz(void){

	int filas,columnas, opcion;
	
	do{
		cout<<"-----------------POTENCIA DE UNA MATRIZ---------------"<<endl;
		cout<<"2. Matrices de matrices "<<endl;
		opcion=ingresarEnteros();
		if(opcion>2 || opcion<1 ){
			cout<<"\nIngrese una opcion correcta"<<endl;
			system("PAUSE");
			system("CLS");
		}
	}while(opcion>2 || opcion<1 );
		setOpcion(opcion);
	
	do{
		cout<<"\t\t Ingrese el tamaño de la matriz"<<endl;
		cout<<"Numero de filas: ";
		filas=ingresarEnteros();
		cout<<"\nNumero de columnas: ";
		columnas=ingresarEnteros();
		cout<<"\n";
		if(filas<0 ||columnas<0 ){
			system("CLS");
		}
		if( columnas!=filas){
			cout<<"El numero de columnas y filas debe ser igual"<<endl;
			cout<<"Ingrese nuevamente porfavor....."<<endl;
			system("PAUSE");
			system("CLS");
		}
	}while(columnas<0 || filas<0 || columnas!=filas );
	
		setFilas(filas);
		setColumnas(columnas);
		
}

Matriz Matriz::multiplicar2(int **vect1, int **vect2, int filas, int columnas){
   	
   	Matriz mat;
   	mat.
  	int **vect3;
    vect3=crearMatriz(filas,columnas);
     
    for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			*(*(vect3+i)+j)=0;
			for (int k=0;k<filas;k++){
				*(*(vect3+i)+j)+=*(*(vect1+i)+k)**(*(vect2+k)+j);	
			}
		}
	}
	
    return mat;
    
}



   
   
   
   