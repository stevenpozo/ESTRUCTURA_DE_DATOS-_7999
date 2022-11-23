/***********************************************************************
 * Module:  ListaCDE.cpp
 * Author:  Steven Pozo,Quilumbaquin Jairo
 * Modified: lunes, 21 de noviembre de 2022 20:19:54
 * Purpose: Declaration of the class ListaCDE
 ***********************************************************************/
#include "ListaCDE.h"
#include "Nodo.cpp"
#include <stdlib.h>
#include <iostream>
#include <conio.h>

using namespace std;

int ListaCDE::getOpc(void)
{
   return opc;
}


void ListaCDE::setOpc(int newOpc)
{
   opc = newOpc;
}

ListaCDE::ListaCDE()
{
	cabeza = NULL;
	cola = NULL;
}


bool ListaCDE::verificarVacio(void){
	if(cabeza==NULL && cola==NULL){
		return true;
	}else {
		return false;
	}
	
}


void ListaCDE::insertar(int dato){
	
	Nodo* tmp = new Nodo();
	tmp->setDato(dato);
	tmp->setSiguiente(NULL);
	tmp->setAnterior(NULL);
	
	if(verificarVacio()==true){
		cabeza =tmp;
		cabeza->setSiguiente(cabeza);
		cabeza->setAnterior(cabeza);
	}else if(cabeza->getSiguiente()==cabeza){
		cola=tmp;
		cola->setSiguiente(cabeza);
		cola->setAnterior(cabeza);
		cabeza->setSiguiente(cola);
		cabeza->setAnterior(cola);
	}
	else {
		cola->setSiguiente(tmp);
		tmp->setAnterior(cola);
		tmp->setSiguiente(cabeza);
		cabeza->setAnterior(tmp);
		cola = tmp;
	}
	
}
void ListaCDE::mostrarRecursivo(Nodo* valor,int posicion){
	cout<<"Posicion: "<< posicion++ <<"--> "<< valor->getDato() <<endl;
	if(valor->getSiguiente()!=cabeza){
		mostrarRecursivo(valor->getSiguiente(),posicion++);
	}	
}

void ListaCDE::mostrar(void){
	int posicion;
	if(cabeza == NULL){
		cout<<"\nLa lista esta vacia"<<endl;
	}else{
		Nodo* tmp = cabeza;
		posicion = 1;
		mostrarRecursivo(tmp, posicion);
	}
	
}

void ListaCDE::eliminar(int dato){
	if(cabeza == NULL){
		cout<<"\nLista vacia"<<endl;
		cout<<"\nEl dato "<< dato <<"No se puede eliminar "<<endl;
	}else if(cabeza->getSiguiente()==cabeza && cabeza->getDato()==dato){
		cabeza = NULL;
	}
	else{
		Nodo* aux = cabeza;
		while(aux->getSiguiente()!=cabeza && aux->getDato()!=dato){
			aux =  aux->getSiguiente();
		}
		if(aux==cabeza && aux->getDato()==dato){
			cabeza->getSiguiente()->setAnterior(cabeza->getAnterior());
			cabeza->getAnterior()->setSiguiente(cabeza->getSiguiente());
			cabeza = cabeza->getSiguiente();
			delete aux;
		}
		else if(aux->getDato()==dato){
			aux->getAnterior()->setSiguiente(aux->getSiguiente());
			aux->getSiguiente()->setAnterior(aux->getAnterior());
			delete aux;
		}
	}
	
	cout<<"\nSe ha eliminado el dato"<<endl;
		
}

void ListaCDE::buscarLista(int dato){
	Nodo *aux = this -> cabeza;
	
	if(this->cabeza == NULL){
		cout << "\nLista vacia "<<endl;
	}
    while (aux) { 
        if (aux->getDato() == dato){
            cout << "\nDato encontrado: " << dato<< endl;
            break;
        } 
	/*	if(aux->getDato() != dato){
	    	cout << "\nDato no encontrado: "<< endl;
	    	break;
		} */
		aux = aux->getSiguiente();
    }
}   

void ListaCDE::modificarLista(int dato, int nuevoDato){
	Nodo *aux = this -> cabeza;
	if(this->cabeza == NULL){
    	cout << "\nLista vacia "<<endl;
	}
    while (aux) {
        if (aux->getDato() == dato) {
            aux->setDato(nuevoDato);
            break;
        }
        aux = aux->getSiguiente();
    }
}

int ListaCDE::validarEnteros(void){
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


void ListaCDE::menu(void){
	int opc;
	do{
		cout<<"******************************************"<<endl;
		cout<<"\nLISTA CIRCULAR DOBLEMENTE ENLAZADA"<<endl;
		cout<<"\n1. Insertar dato a la Lista"<<endl;
		cout<<"\n2. Mostrar Lista"<<endl;
		cout<<"\n3. Eliminar dato de la Lista"<<endl;
		cout<<"\n4. Buscar dato de la Lista"<<endl;
		cout<<"\n5. Actualizar dato de la Lista"<<endl;
		cout<<"\n6. Salir"<<endl;
		cout<<"\n******************************************"<<endl;
		cout<<"\nSeleccione una opcion: ";
		opc=validarEnteros();
		if(opc<1 || opc>7 ){
			system("CLS");
		}
	}while(opc<0 || opc>=7);
	setOpc(opc);
}
