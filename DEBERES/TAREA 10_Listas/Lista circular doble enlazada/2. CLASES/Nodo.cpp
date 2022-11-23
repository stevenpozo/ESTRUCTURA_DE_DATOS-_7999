/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  Steven Pozo,Quilumbaquin Jairo
 * Modified: lunes, 21 de noviembre de 2022 20:19:54
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#include "Nodo.h"
#include <cstring>
#include <iostream>

using namespace std;

void Nodo::setDato(int newDato){
	dato = newDato;
}

int Nodo::getDato(void){
	return dato;
}

Nodo* Nodo::getSiguiente(void)
{
   return siguiente;
}


void Nodo::setSiguiente(Nodo* newSiguiente)
{
   siguiente = newSiguiente;
}


Nodo* Nodo::getAnterior(void)
{
   return anterior;
}


void Nodo::setAnterior(Nodo* newAnterior)
{
   anterior = newAnterior;
}


Nodo::Nodo()
{
	dato=0;
	siguiente = NULL;
	anterior = NULL;
}

Nodo::Nodo(int newDato, Nodo* newSiguiente, Nodo* newAnterior)
{
	dato=newDato;
	siguiente = newSiguiente;
	anterior = newAnterior;
}

