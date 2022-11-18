/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: jueves, 17 de noviembre de 2022 17:06:30
 * Purpose: Implementation of simple list
 * Enunciado del problema: Lista enlazada simple, insertar,modificar,buscar,eliminar
 ***********************************************************************/

#if !defined(__ListaSimple_ModeloLista_h)
#define __ListaSimple_ModeloLista_h
#include "Nodo.h"

class ModeloLista
{
public:
   virtual void insertarLista(int dato)=0;
   virtual void mostarLista()=0;
   virtual void eliminarLista(int dato)=0;
   virtual void buscarLista(int dato)=0;
   virtual void modificarLista(int dato, int update)=0;
   virtual int validarEnteros()=0;
   virtual void menu()=0;



protected:
private:

};

#endif