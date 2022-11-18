/***********************************************************************
 * Module:  Nodo.h
 * Author:  steve
 * Modified: jueves, 17 de noviembre de 2022 20:49:47
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__ListaSimple_Nodo_h)
#define __ListaSimple_Nodo_h

class Nodo
{
public:
   Nodo *getNext(void);
   void setNext(Nodo *next);
   int getDato(void);
   void setDato(int newDato);
   Nodo(int dato, Nodo *next);

protected:
private:
   Nodo *next;
   int dato;


};

#endif