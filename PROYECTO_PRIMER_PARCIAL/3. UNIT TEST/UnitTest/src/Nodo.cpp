/***********************************************************************
 * Module:  ModeloLCDE.h
 * Author:  Steven Pozo, Jairo Quilumbaquin
 * Modified: jueves, 24 de noviembre de 2022 13:16:00
 * Purpose: Lista circular doblemente enlazada
 ***********************************************************************/

#include "Nodo.h"
#include <cstddef>

template <typename T>
Nodo<T>* Nodo<T>::getSiguiente(void)
{
   return siguiente;
}

template <typename T>
void Nodo<T>::setSiguiente(Nodo* newSiguiente)
{
   siguiente = newSiguiente;
}

template <typename T>
Nodo<T>* Nodo<T>::getAnterior(void)
{
   return anterior;
}

template <typename T>
void Nodo<T>::setAnterior(Nodo* newAnterior)
{
   anterior = newAnterior;
}


template <typename T>
T Nodo<T>::getDato(void)
{
   return dato;
}

template <typename T>
void Nodo<T>::setDato(T newDato)
{
   dato = newDato;
}

template <typename T>
Nodo<T>::Nodo(T dato1)
{
	dato=dato1;
	siguiente=anterior=NULL;
	
}


template <typename T>
Nodo<T>::Nodo()
{
}

