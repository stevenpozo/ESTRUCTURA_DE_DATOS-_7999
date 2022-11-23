/***********************************************************************
 * Module:  Nodo.h
 * Author:  steve
 * Modified: lunes, 21 de noviembre de 2022 20:21:19
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__ListaCircularDobleEnlazada_Nodo_h)
#define __ListaCircularDobleEnlazada_Nodo_h

class Nodo
{
public:
   Nodo();
   Nodo(int,Nodo*,Nodo*);
   void setDato(int newDato);
   int getDato(void);
   Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);
   Nodo* getAnterior(void);
   void setAnterior(Nodo* newAnterior);

protected:
private:
   Nodo* siguiente;
   Nodo* anterior;
   int dato;


};

#endif