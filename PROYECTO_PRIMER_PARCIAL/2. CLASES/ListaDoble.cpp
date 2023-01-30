/***********************************************************************
 * Module:  ModeloLCDE.h
 * Author:  Steven Pozo, Jairo Quilumbaquin
 * Modified: jueves, 24 de noviembre de 2022 13:16:00
 * Purpose: Lista circular doblemente enlazada
 ***********************************************************************/

#include "ListaDoble.h"
#include "Nodo.cpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;


ListaDoble::ListaDoble()
{
	inicio = NULL;
    fin = NULL;  
    lengt=0;
}

int ListaDoble::getLenght(void)
{
   return lengt;
}

void ListaDoble::setLenght(int length)
{
   lengt = length;
}

int ListaDoble::getOpc(void)
{
   return opc;
}

void ListaDoble::setOpc(int newOpc)
{
   opc = newOpc;
}

bool ListaDoble::verificarVacio(void){
	if(inicio==NULL || fin==NULL){
		return true;
	}else {
		return false;
	}
	
}

void ListaDoble::insertarPorCabeza(Empleado dato){
	Nodo* nodoN;
	
	nodoN = new Nodo(dato);
	
    if(inicio == NULL){
    	
        inicio = nodoN;
        fin=nodoN;
        
    }else{
    	
        inicio->setAnterior(nodoN);
        nodoN->setSiguiente(inicio);
        inicio = nodoN;
        
    }
	lengt++;
	setLenght(lengt);
}


void ListaDoble::insertarPorCola(Empleado dato){
	Nodo*nodoN = new Nodo(dato);
    
	if(inicio == NULL){
		
        inicio = nodoN;
        fin = nodoN;
        
    }else{
    	
        fin->setSiguiente(nodoN);
        nodoN->setAnterior(fin);
        fin = nodoN;
        
    }
    
    lengt++;
	setLenght(lengt);
    
}
 
void ListaDoble::insertarPorPosicion(Empleado dato,int posicion){
	
	Nodo *nodoN = new Nodo(dato);
    Nodo*aux = inicio;
    
    int cont = 1;
    
    if(posicion == 0){
        
		insertarPorCabeza(dato);
        
    }else if(posicion == lengt){
    	
        insertarPorCola(dato);   
        
    }else{
        while(aux){
        	if(cont == posicion){
        	
				aux->getAnterior()->setSiguiente(nodoN);
	        	nodoN->setAnterior(aux->getAnterior());
	            aux->setAnterior(nodoN);
	            nodoN->setSiguiente(aux);
	            break;
        	}
        	
			aux = aux->getSiguiente();
        	cont++;
        	
        }
        
		lengt++;
		setLenght(lengt);
    }   
}

void ListaDoble::mostrar(void){
	Nodo*aux = inicio;
	Empleado emp;
    	while(aux){
    		emp=aux->getDato();
            cout <<emp.getNombre()<< " -> <- ";
            aux = aux->getSiguiente();
        }
        
}


void ListaDoble::borrarPorCabeza(){

	Nodo* nodoAux = inicio;
	
	if(lengt==1){
		inicio=NULL;
	}else{
		
		inicio=inicio->getSiguiente();
		delete nodoAux;
		inicio->setAnterior(nullptr);	
		
	}
	
    cout << "\n\tDato eliminado" << endl;
    lengt--;
	setLenght(lengt);
}


void ListaDoble::borrarPorCola(){
	
	Nodo* nodoAux = inicio;
	Nodo* nodoAux2;
	
	if(lengt==1){
		inicio=NULL;
		fin=NULL;
	}else{
		
		while(nodoAux->getSiguiente()!=NULL){
			nodoAux=nodoAux->getSiguiente();
		}
	
		nodoAux2=nodoAux->getAnterior();
		nodoAux2->setSiguiente(NULL);
		delete nodoAux;
		nodoAux=NULL;
		//fin=nodoAux2;
		
	}
		
    cout << "\n\tDato eliminado" << endl;
    lengt--;
	setLenght(lengt);
	
}

void ListaDoble::borrarPorPosicion(int posicion){
	Nodo* nodoAux = inicio;
	Nodo* nodoAux2;
	int cont=2;
	
	if(lengt==1){
		inicio=NULL;
		fin=NULL;
	}else{
		
		while(cont!=posicion){
			nodoAux=nodoAux->getSiguiente();
			cont++;
		}
	
		nodoAux2=nodoAux->getAnterior();
		nodoAux2->setSiguiente(nodoAux->getSiguiente());
		nodoAux2->setSiguiente(NULL);
		nodoAux->getSiguiente()->setAnterior(nodoAux2);
		
		delete nodoAux;
		nodoAux=NULL;
		
	}
		
    cout << "\n\tDato eliminado" << endl;
    lengt--;
	setLenght(lengt);
	
}


Empleado ListaDoble::buscar(Empleado dato){
	Nodo*aux = this -> inicio;
	Empleado emp2;
	
    while (aux) { 
    	Empleado emp=aux->getDato();
        if ( emp.getApellido()== dato.getApellido()){
        	emp2=emp;
            cout << "\nEmpleado " << emp.getNombre()+" "+emp.getApellido()<<" encontrado"<< endl;
            break;
        }else{
	    	cout << "\nDato no encontrado: "<< endl;
	    	break;
		} 
		aux = aux->getSiguiente();
    }
    
    return emp2;
	
}


Empleado* ListaDoble::convertirLista(){
	Nodo*aux = this -> inicio;
	Empleado *datos;
	int i=0;
	int longitud;
	
	longitud=getLenght();
	datos = new Empleado[longitud];
	
	if(this->inicio == NULL){
		cout << "\nLista vacia "<<endl;
	}
	while (aux) {
		*(datos+i)=aux->getDato();
        i++;
        aux = aux->getSiguiente();
    }
 
	return datos;
}
















