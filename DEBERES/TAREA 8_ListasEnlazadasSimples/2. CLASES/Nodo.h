/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: jueves, 17 de noviembre de 2022 17:06:30
 * Purpose: Implementation of simple list
 * Enunciado del problema: Lista enlazada simple, insertar,modificar,buscar,eliminar
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