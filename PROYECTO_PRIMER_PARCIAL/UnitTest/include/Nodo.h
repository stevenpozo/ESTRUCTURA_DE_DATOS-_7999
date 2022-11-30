/***********************************************************************
 * Module:  ModeloLCDE.h
 * Author:  Steven Pozo, Jairo Quilumbaquin
 * Modified: jueves, 24 de noviembre de 2022 13:16:00
 * Purpose: Lista circular doblemente enlazada
 ***********************************************************************/

#if !defined(__LIstaDoble_Nodo_h)
#define __LIstaDoble_Nodo_h
template <typename T>
class Nodo
{
public:
   Nodo<T>* getSiguiente(void);
   void setSiguiente(Nodo* newSiguiente);
   Nodo<T>* getAnterior(void);
   void setAnterior(Nodo* newAnterior);
   T getDato(void);
   void setDato(T newDato);
   Nodo();
   Nodo(T);
   

protected:
	
private:
   Nodo* siguiente;
   Nodo* anterior;
   T dato;


};

#endif