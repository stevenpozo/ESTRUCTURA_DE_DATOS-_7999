/***********************************************************************
 * Module:  Nodo.h
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:23:12
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__RolDePagos_Nodo_h)
#define __RolDePagos_Nodo_h

class Nodo
{
public:
   Nodo* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);
   Nodo* getAnterior(void);
   void setAnterior(Nodo* newAnterior);
   Nodo();

protected:
private:
   Nodo* siguiente;
   Nodo* anterior;


};

#endif