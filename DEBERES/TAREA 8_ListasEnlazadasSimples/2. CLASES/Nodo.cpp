/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  steve
 * Modified: jueves, 17 de noviembre de 2022 20:49:47
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/

#include "Nodo.h"
#include <cstddef>

Nodo *Nodo::getNext(void)
{
   return next;
}


void Nodo::setNext(Nodo *next)
{
   this->next = next;
}


Nodo::Nodo(int dato, Nodo *nex=NULL)
{
	this->dato =dato;
	this->next=nex;
}




int Nodo::getDato(void)
{
   return dato;
}


void Nodo::setDato(int newDato)
{
   dato = newDato;
}