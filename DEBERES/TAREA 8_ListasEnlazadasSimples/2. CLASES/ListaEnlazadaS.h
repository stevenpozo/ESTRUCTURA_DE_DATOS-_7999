/***********************************************************************
 * Module:  ListaEnlazadaS.h
 * Author:  steve
 * Modified: jueves, 17 de noviembre de 2022 20:49:47
 * Purpose: Declaration of the class ListaEnlazadaS
 ***********************************************************************/

#if !defined(__ListaSimple_ListaEnlazadaS_h)
#define __ListaSimple_ListaEnlazadaS_h

#include "ModeloLista.h"
#include "Nodo.h"
#pragma once

class ListaEnlazadaS : public ModeloLista
{
public:
	
   ListaEnlazadaS();
   void insertarLista(int dato)  override;
   void mostarLista() override;
   void eliminarLista(int dato) override;
   void buscarLista(int dato) override;
   void modificarLista(int dato, int update) override;
   int validarEnteros() override;
   void menu() override;
   int getOpc(void);
   void setOpc(int newOpc);
   

protected:
private:
   Nodo *start;
   Nodo *end;
   int opc;


};

#endif