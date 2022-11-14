


#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Recursividad.cpp"
#define TAM 100
using namespace std;


int main(){
	
	int M1[TAM][TAM];
	int M2[TAM][TAM];
	int opcion, suma,suma1;
	suma=0;
	suma1=1;
	Recursividad recursiva;
	recursiva.ingresarDatosMatriz();
	cout<<"Matriz A: "<<endl;
	recursiva.crearMatriz(M1,recursiva.getFila(),recursiva.getColumna());
	recursiva.imprimir(M1,recursiva.getFila(),recursiva.getColumna());
	cout<<"Matriz B: "<<endl;
	recursiva.crearMatriz(M2,recursiva.getFila(),recursiva.getColumna());
	recursiva.imprimir(M2,recursiva.getFila(),recursiva.getColumna());
	if(recursiva.getOpcion()==1){
		cout<<"---------------------------------"<<endl;
		cout<<"\nLA SUMA DE LA MATRIZ A Y B ES: "<<endl;
		cout<<recursiva.sumarRecursivaMatrices(M1,M2,recursiva.getFila()-1,recursiva.getColumna()-1)<<endl;
		
		for (int i=0; i<recursiva.getFila(); i++){
		for(int j=0;j<recursiva.getColumna();j++){
			suma +=M1[i][j]+M2[i][j];
		}
		}
		cout<<"SUMA VERIFICACIO: "<<suma<<endl;
		
		system("PAUSE");
		system("CLS");
		//return main(); 
	}else if(recursiva.getOpcion()==2){
		cout<<"-------------------------------------------"<<endl;
		cout<<"\nLA MULTIPLICACION DE LA MATRIZ A Y B ES: "<<endl;
		cout<<recursiva.multiplicarRecursivaMatrices(M1,M2,recursiva.getFila()-1,recursiva.getColumna()-1)<<endl;
		for (int i=0; i<recursiva.getFila(); i++){
		for(int j=0;j<recursiva.getColumna();j++){
			suma1 *=M1[i][j]*M2[i][j];
		}
		}
		cout<<"MULTIPLICACION VERIFICACIO: "<<suma<<endl;
		system("PAUSE");
		system("CLS");
	//	return main(); 
	}
	
	
	
	return 0;
}