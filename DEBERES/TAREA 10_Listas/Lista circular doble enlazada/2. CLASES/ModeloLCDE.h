/***********************************************************************
 * Module:  ModeloLCDE.h
 * Author:  Steven Pozo,Quilumbaquin Jairo
 * Modified: lunes, 21 de noviembre de 2022 20:19:54
 * Purpose: Declaration of the class ModeloCDE
 ***********************************************************************/

#if !defined(__ListaCircularDobleEnlazada_ModeloLCDE_h)
#define __ListaCircularDobleEnlazada_ModeloLCDE_h
#include "Nodo.h"

class ModeloLCDE
{
public:
   virtual void insertar(int)=0;
   virtual bool verificarVacio(void)=0;
   virtual void eliminar(int)=0;
   virtual void mostrar(void)=0;
   virtual void mostrarRecursivo(Nodo*,int)=0;
   virtual void buscarLista(int dato)=0;
   virtual void modificarLista(int dato, int nuevoDato)=0;
   virtual int validarEnteros(void)=0;
   virtual void menu(void)=0;

protected:
private:

};

#endif