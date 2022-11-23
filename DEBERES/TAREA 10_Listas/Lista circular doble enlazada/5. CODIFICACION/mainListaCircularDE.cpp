/***********************************************************************
 * Module:  mainListaCircularDE.h
 * Author:  Steven Pozo,Quilumbaquin Jairo
 * Modified: lunes, 21 de noviembre de 2022 20:19:54
 * Purpose: Declaration of the class mainListaCircularDE
 ***********************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include "ListaCDE.cpp"

using namespace std;


int main(){
	ListaCDE lista;
	int dato, nuevoDato;
	do{
		lista.menu();
		switch(lista.getOpc()){
			case 1:
				cout<<"\nIngrese el dato: ";
				dato=lista.validarEnteros();
				lista.insertar(dato);
				cout<<"\n";
				system("PAUSE");
				system("CLS");
				break;
			case 2:
				cout<<"\nLa lista es: "<<endl;
				lista.mostrar();
				cout<<"\n";
				system("PAUSE");
				system("CLS");
				break;
			case 3:
				cout<<"\nLista: "<<endl;
				lista.mostrar();
				cout<<"\nIngrese el dato que desea eliminar: ";
				dato=lista.validarEnteros();
				lista.eliminar(dato);
				cout<<"\nLa lista sin el dato "<< dato <<" es :"<<endl;
				lista.mostrar();
				cout<<"\n";
				system("PAUSE");
				system("CLS");
				break;
			case 4:
				cout<<"\nIngrese el dato que desea buscar: ";
				dato=lista.validarEnteros();
				lista.buscarLista(dato);
				cout<<"\n";
				system("PAUSE");
				system("CLS");
				break;
			case 5:
				cout<<"\nLista Actual"<<endl;
				lista.mostrar();
				cout<<"\nIngrese el dato que desea cambiar: ";
				dato=lista.validarEnteros();
				cout<<"\nIngrese el dato que lo reemplazara: ";
				nuevoDato=lista.validarEnteros();
				lista.modificarLista(dato,nuevoDato);
				cout<<"\nEl dato "<< dato <<" fue cambiado por el nuevo dato "<< nuevoDato <<endl;
				lista.mostrar();
				cout<<"\n";
				system("PAUSE");
				system("CLS");
				break;
			case 6:
				exit(1);
				break;
			default:
				cout<<"\nLa opcion seleccionada es incorrecta"<<endl;
				system("PAUSE");
				system("CLS");
		}
	}while(lista.getOpc()<7 || lista.getOpc()>0);
	
	
	
	
	return 0;
}