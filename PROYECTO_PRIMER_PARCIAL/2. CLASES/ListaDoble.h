/***********************************************************************
 * Module:  ModeloLCDE.h
 * Author:  Steven Pozo, Jairo Quilumbaquin
 * Modified: jueves, 24 de noviembre de 2022 13:16:00
 * Purpose: Lista circular doblemente enlazada
 ***********************************************************************/


#if !defined(__LIstaDoble_ListaDoble_h)
#define __LIstaDoble_ListaDoble_h

#include "ModeloListaDoble.h"
#include "Nodo.h"
#include "Empleado.h"

using namespace std;

class ListaDoble:public ModeloListaDoble{

public:
	
   int getOpc(void);
   void setOpc(int newOpc);
   int getLenght(void);
   void setLenght(int newLenght);
   
   bool verificarVacio(void) override;
   
   void mostrar(void) override;
   
   /*metodos para borrar*/
   void borrarPorCabeza() override;
   void borrarPorCola() override;
   void borrarPorPosicion(int posicion) override;
   
   /*metodos buscar y actualizar*/
   Empleado buscar(Empleado dato) override;
   
   /*Metodos para insertar*/
   void insertarPorCabeza(Empleado dato) override;
   void insertarPorCola(Empleado dato) override;
   void insertarPorPosicion(Empleado dato,int posicion) override;
   
   Empleado* convertirLista() override;
   
   ListaDoble();

protected:
private:
   Nodo* inicio;
   Nodo* fin;
   int opc;
   int lengt;

};

#endif