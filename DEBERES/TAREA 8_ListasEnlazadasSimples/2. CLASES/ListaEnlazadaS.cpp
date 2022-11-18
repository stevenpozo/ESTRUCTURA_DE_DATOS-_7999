/***********************************************************************
 * Module:  ListaEnlazadaS.cpp
 * Author:  steve
 * Modified: jueves, 17 de noviembre de 2022 20:49:47
 * Purpose: Implementation of the class ListaEnlazadaS
 ***********************************************************************/

#include "ListaEnlazadaS.h"
#include "Nodo.cpp"
#include <cstddef>
#include <iostream>
#include <conio.h>

using namespace std;

int ListaEnlazadaS::getOpc(void)
{
   return opc;
}


void ListaEnlazadaS::setOpc(int newOpc)
{
   opc = newOpc;
}

ListaEnlazadaS::ListaEnlazadaS()
{
	this -> start = NULL;
    this -> end = NULL;
}

void ListaEnlazadaS::insertarLista(int dato){
	
	Nodo *nodo = new Nodo(dato);
   if (this -> start == NULL) {
        this -> start = nodo;
        //this -> end = nodo;
    } else {
        this -> end->setNext(nodo);
        
    }
	   this -> end = nodo; 
	   
	   
/*	   
	   if (this -> start == NULL) {
         this -> end = nodo;
         this -> end->setNext(nodo);
    } else {
        this -> start->setNext(nodo);
        
    }
	   this -> end = nodo; */
   	
}
void ListaEnlazadaS::mostarLista(){
	Nodo *temp = NULL;
    Nodo *prev = NULL;
    Nodo *current = this->start;
    
	while(current != NULL) {
        temp = current->getNext();
        current->setNext(prev);
        prev = current;
        current = temp;
    }
    this->start = prev;
	
	Nodo *imprimir = this -> start;
    while (imprimir) {
        cout << imprimir -> getDato() << " --> ";
        imprimir = imprimir -> getNext();
    }
    
}


void ListaEnlazadaS::eliminarLista(int dato){
	Nodo *aux = this -> start;
    Nodo *back = NULL;
    
    if(this->start == NULL){
    	cout << "\nLista vacia "<<endl;
	}
    while (aux) {
        if (aux->getDato() == dato) {
            if (aux == this -> start) {
                this -> start = aux->getNext();
            } else if (aux == this -> end) {
                this -> end = back;
                back->setNext(NULL);
            } else {
                back->setNext(aux->getNext());
            }
            delete aux;
            break;
        }
        back = aux;
        aux = aux->getNext();
    }
	
}
void ListaEnlazadaS::buscarLista(int dato){
	Nodo *aux = this -> start;
	
	if(this->start == NULL){
		cout << "\nLista vacia "<<endl;
	}
    while (aux) {
        if (aux->getDato() == dato) {
            cout << "Dato encontrado: " << dato<< endl;
            break;
        } else {
        	cout << "Dato no encontrado: "<< endl;
            break;
		}
        aux = aux->getNext();
    }
}

void ListaEnlazadaS::modificarLista(int dato, int update){	
	Nodo *aux = this -> start;
	if(this->start == NULL){
    	cout << "\nLista vacia "<<endl;
	}
    while (aux) {
        if (aux->getDato() == dato) {
            aux->setDato(update);
            break;
        }
        aux = aux->getNext();
    }
}

int ListaEnlazadaS::validarEnteros(){
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

void ListaEnlazadaS::menu(){
	int opc;
	cout<<"LISTA ENLAZADA SIMPLE"<<endl;
	cout<<"\n1. Insertar elemento a la lista"<<endl;
	cout<<"\n2. Mostrar lista"<<endl;
	cout<<"\n3. Buscar dato en la lista"<<endl;
	cout<<"\n4. Eliminar dato en la lista"<<endl;
	cout<<"\n5. Acualizar dato en la lista"<<endl;
	cout<<"\n6. Salir"<<endl;
	opc=validarEnteros();
	setOpc(opc);
}

