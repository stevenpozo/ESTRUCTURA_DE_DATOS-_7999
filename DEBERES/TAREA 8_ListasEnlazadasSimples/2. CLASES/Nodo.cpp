/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: jueves, 17 de noviembre de 2022 17:06:30
 * Purpose: Implementation of simple list
 * Enunciado del problema: Lista enlazada simple, insertar,modificar,buscar,eliminar
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