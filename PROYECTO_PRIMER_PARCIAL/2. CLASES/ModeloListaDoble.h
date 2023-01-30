/***********************************************************************
 * Module:  ModeloLCDE.h
 * Author:  Steven Pozo, Jairo Quilumbaquin
 * Modified: jueves, 24 de noviembre de 2022 13:16:00
 * Purpose: Lista circular doblemente enlazada
 ***********************************************************************/

#if !defined(__LIstaDoble_ModeloListaDoble_h)
#define __LIstaDoble_ModeloListaDoble_h
#include "Nodo.h"
using namespace std;

class ModeloListaDoble
{
public:

   virtual bool verificarVacio(void)=0;
   
   /*Metodos para insertar*/
   virtual void insertarPorCabeza(Empleado dato)=0;
   virtual void insertarPorCola(Empleado dato)=0;
   virtual void insertarPorPosicion(Empleado dato,int posicion)=0;
   
   virtual void mostrar(void)=0;
   /*metodos para borrar*/
   virtual void borrarPorCabeza()=0;
   virtual void borrarPorCola()=0;
   virtual void borrarPorPosicion(int posicion)=0;
   
   virtual Empleado buscar(Empleado dato)=0;
   virtual Empleado* convertirLista()=0;

protected:
private:

};

#endif