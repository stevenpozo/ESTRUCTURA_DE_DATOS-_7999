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


template <typename T>
int ListaDoble<T>::getLenght(void)
{
   return lengt;
}

template <typename T>
void ListaDoble<T>::setLenght(int length)
{
   lengt = length;
}


template <typename T>
int ListaDoble<T>::getOpc(void)
{
   return opc;
}

template <typename T>
void ListaDoble<T>::setOpc(int newOpc)
{
   opc = newOpc;
}

template <typename T>
ListaDoble<T>::ListaDoble()
{
	inicio = NULL;
    fin = NULL;  
    lengt=0;
}


template <typename T>
bool ListaDoble<T>::verificarVacio(void){
	if(inicio==NULL || fin==NULL){
		return true;
	}else {
		return false;
	}
	
}

template <typename T>
void ListaDoble<T>::insertar(T dato){
	
	Nodo<T>* tmp = new Nodo<T>();
	tmp->setDato(dato);
	tmp->setSiguiente(NULL);
	tmp->setAnterior(NULL);
	
	if(verificarVacio()==true){
		
		inicio =tmp;
		inicio->setSiguiente(inicio);
		inicio->setAnterior(inicio);
		
	}else if(inicio->getSiguiente()==inicio){
		fin=tmp;
		fin->setSiguiente(inicio);
		fin->setAnterior(inicio);
		inicio->setSiguiente(fin);
		inicio->setAnterior(fin);
	}
	else {
		fin->setSiguiente(tmp);
		tmp->setAnterior(fin);
		tmp->setSiguiente(inicio);
		inicio->setAnterior(tmp);
		fin = tmp;
	}
	
	lengt++;
	setLenght(lengt);
}


template <typename T>
void ListaDoble<T>::insertarPorCabeza(T dato){
	Nodo<T> *nodoN;
	
	nodoN = new Nodo<T>(dato);
	
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


template <typename T>
void ListaDoble<T>::insertarPorCola(T dato){
	Nodo<T> *nodoN = new Nodo<T>(dato);
    
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
 
 
 
template <typename T>
void ListaDoble<T>::insertarPorPosicion(T dato,int posicion){
	
	Nodo<T> *nodoN = new Nodo<T>(dato);
    Nodo<T> *aux = inicio;
    
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



template <typename T>
void ListaDoble<T>::mostrarRecursivo(Nodo<T>* valor,int posicion){
	
	cout<<"Posicion: "<< posicion++ <<"--> " <<endl;
	
	if(valor->getSiguiente()!=inicio||valor->getSiguiente()!=NULL){
		mostrarRecursivo(valor->getSiguiente(),posicion++);
	}
		
}


template <typename T>
void ListaDoble<T>::mostrar(void){
	Nodo<T> *aux = inicio;
    	while(aux){
            cout << " -> <- ";
            aux = aux->getSiguiente();
        }
        
}


/*
template <typename T>
void ListaDoble<T>::borrar(T dato){
	
	
	if(lengt==1){
		inicio=NULL;
		fin=NULL;
	}else if(inicio->getSiguiente()==inicio && inicio->getDato()==dato){
		
		inicio = NULL;
		
	}
	else{
		
		Nodo<T>* aux = inicio;
		
		while(aux->getSiguiente()!=inicio && aux->getDato()!=dato){
			aux =  aux->getSiguiente();
		}
		
		if(aux==inicio && aux->getDato()==dato){
			
			inicio->getSiguiente()->setAnterior(inicio->getAnterior());
			inicio->getAnterior()->setSiguiente(inicio->getSiguiente());
			inicio = inicio->getSiguiente();
			delete aux;
			
		}
		else if(aux->getDato()==dato){
			
			aux->getAnterior()->setSiguiente(aux->getSiguiente());
			aux->getSiguiente()->setAnterior(aux->getAnterior());
			delete aux;
			
		}
		
	}
	lengt--;
	setLenght(lengt);
	
	cout<<"\nSe ha eliminado el dato"<<endl;
	
}
*/


template <typename T>
void ListaDoble<T>::borrarPorCabeza(){

	Nodo<T>* nodoAux = inicio;
	
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


template <typename T>
void ListaDoble<T>::borrarPorCola(){
	
	Nodo<T>* nodoAux = inicio;
	Nodo<T>* nodoAux2;
	
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

template <typename T>
void ListaDoble<T>::borrarPorPosicion(int posicion){
	Nodo<T>* nodoAux = inicio;
	Nodo<T>* nodoAux2;
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

/*
template <typename T>
void ListaDoble<T>::buscar(T dato){
	Nodo<T> *aux = this -> inicio;
	
    while (aux) { 
        if (aux->getDato() == dato){
            cout << "\nDato encontrado: " << dato<< endl;
            break;
        } 
		if(aux->getDato() != dato){
	    	cout << "\nDato no encontrado: "<< endl;
	    	break;
		} 
		aux = aux->getSiguiente();
    }
	
}
*/

/*
template <typename T>
void ListaDoble<T>::actualizar(T dato, T nuevoDato){
	
	Nodo<T> *aux = this -> inicio;
	
    while (aux) {
        if (aux->getDato() == dato) {
            aux->setDato(nuevoDato);
            break;
        }
        aux = aux->getSiguiente();
    }
		
}
*/















