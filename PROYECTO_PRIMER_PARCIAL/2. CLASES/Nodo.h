/***********************************************************************
 * Module:  ModeloLCDE.h
 * Author:  Steven Pozo, Jairo Quilumbaquin
 * Modified: jueves, 24 de noviembre de 2022 13:16:00
 * Purpose: Lista circular doblemente enlazada
 ***********************************************************************/

#if !defined(__LIstaDoble_Nodo_h)
#define __LIstaDoble_Nodo_h
#include "Empleado.h"
class Nodo
{
public:
   Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);
   Nodo* getAnterior(void);
   void setAnterior(Nodo* newAnterior);
   Empleado getDato(void);
   void setDato(Empleado newDato);
   Nodo();
   Nodo(Empleado);
   

protected:
	
private:
   Nodo* siguiente;
   Nodo* anterior;
   Empleado dato;


};

#endif