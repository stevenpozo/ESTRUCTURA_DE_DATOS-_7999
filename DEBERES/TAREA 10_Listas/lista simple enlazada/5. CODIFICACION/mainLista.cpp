/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: jueves, 17 de noviembre de 2022 17:06:30
 * Purpose: Implementation of simple list
 * Enunciado del problema: Lista enlazada simple, insertar,modificar,buscar,eliminar
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include "ListaEnlazadaS.cpp"

using namespace std;


int main(){
	
	int dato, datoBuscar, datoCambiar;
	ListaEnlazadaS lista;
	do{
		lista.menu();
		switch(lista.getOpc()){
			case 1:
				cout<<"\nInsertar dato a la Lista desde la cola: "<<endl;
				dato=lista.validarEnteros();
				lista.insertarLista(dato);
				cout<<"\n"<<endl;
				system("PAUSE");
				system("CLS");
				break;
			case 2:
				cout<<"\nLista: "<<endl;
				lista.mostarLista();
				cout<<"\n"<<endl;
				system("PAUSE");
				system("CLS");
				break;
			case 3:
				cout<<"\nIngrese el dato que desea buscar: ";
				dato=lista.validarEnteros();
				lista.buscarLista(dato);
				cout<<"\n"<<endl;
				lista.mostarLista();
				cout<<"\n"<<endl;
				system("PAUSE");
				system("CLS");
				break;
			case 4:
				cout<<"\nLista sin eliminar"<<endl;
				lista.mostarLista();
				cout<<"\nIngrese el dato que desea eliminar: ";
				dato=lista.validarEnteros();
				lista.eliminarLista(dato);
				cout<<"\n"<<endl;
				lista.mostarLista();
				cout<<"\n"<<endl;
				system("PAUSE");
				system("CLS");
				break;
			case 5:
				cout<<"\nLista sin modificar"<<endl;
				lista.mostarLista();
				cout<<"\nIngrese el dato que desea cambiar: ";
				datoBuscar=lista.validarEnteros();
				cout<<"\nIngrese el dato por el cual desea mcambiar: ";
				datoCambiar=lista.validarEnteros();
				cout<<"\n"<<endl;
				lista.modificarLista(datoBuscar,datoCambiar);
				lista.mostarLista();
				cout<<"\n"<<endl;
				system("PAUSE");
				system("CLS");
				break;
			case 6:
				exit(1);
		}
	}while(lista.getOpc()>0 || lista.getOpc()<7);
	
	
	
	return 0;
}