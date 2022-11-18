/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: jueves, 17 de noviembre de 2022 17:06:30
 * Purpose: Implementation of simple list
 * Enunciado del problema: Lista enlazada simple, insertar,modificar,buscar,eliminar
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