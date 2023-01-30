/***********************************************************************
 * Module:  ModeloLCDE.h
 * Author:  Steven Pozo, Jairo Quilumbaquin
 * Modified: jueves, 24 de noviembre de 2022 13:16:00
 * Purpose: Lista circular doblemente enlazada
 ***********************************************************************/

#include "Nodo.h"
#include <cstddef>

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


Empleado Nodo::getDato(void)
{
   return dato;
}

void Nodo::setDato(Empleado newDato)
{
   dato = newDato;
}

Nodo::Nodo(Empleado dato1)
{
	dato=dato1;
	siguiente=anterior=NULL;
	
}


Nodo::Nodo()
{
}

