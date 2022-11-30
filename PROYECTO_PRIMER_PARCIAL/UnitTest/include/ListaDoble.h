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

using namespace std;


template <typename T>
class ListaDoble:public ModeloListaDoble<T>{

public:
	
   int getOpc(void);
   void setOpc(int newOpc);
   	
   ListaDoble();
   int getLenght(void);
   void setLenght(int newLenght);
   
   bool verificarVacio(void) override;
   
   void mostrarRecursivo(Nodo<T>* valor,int posicion) override;
   void mostrar(void) override;
   
   /*metodos para borrar*/
 //  void borrar(T dato) override;
   void borrarPorCabeza()override;
   void borrarPorCola() override;
   void borrarPorPosicion(int posicion) override;
   
   /*metodos buscar y actualizar*/
  // void buscar(T dato) override;
   //void actualizar(T dato,T nuevoDato) override;
   
   /*Metodos para insertar*/
   void insertar(T dato) override;
   void insertarPorCabeza(T dato) override;
   void insertarPorCola(T dato) override;
   void insertarPorPosicion(T dato,int posicion) override;


protected:
private:
   Nodo<T>* inicio;
   Nodo<T>* fin;
   int opc;
   int lengt;

};

#endif