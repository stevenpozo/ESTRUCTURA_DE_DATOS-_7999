/***********************************************************************
 * Module:  ListaCDE.h
 * Author:  Steven Pozo,Quilumbaquin Jairo
 * Modified: lunes, 21 de noviembre de 2022 20:19:54
 * Purpose: Declaration of the class ListaCDE
 ***********************************************************************/

#if !defined(__ListaCircularDobleEnlazada_ListaCDE_h)
#define __ListaCircularDobleEnlazada_ListaCDE_h

#include "ModeloLCDE.h"
#include "Nodo.h"

class ListaCDE : public ModeloLCDE
{
public:
	
   int getOpc(void);
   void setOpc(int newOpc);	
   ListaCDE();
   void insertar(int) override;
   bool verificarVacio(void) override;
   void eliminar(int) override;
   void mostrar(void) override;
   void mostrarRecursivo(Nodo*,int dato) override;
   void buscarLista(int dato) override;
   void modificarLista(int dato, int nuevoDato) override;
   int validarEnteros(void) override;
   void menu(void) override;

protected:
private:
   Nodo* cabeza;
   Nodo* cola;
   int opc;

};

#endif