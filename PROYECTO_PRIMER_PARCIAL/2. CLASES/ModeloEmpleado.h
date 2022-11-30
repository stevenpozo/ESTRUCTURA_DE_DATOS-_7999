/***********************************************************************
 * Module:  ModeloRolPagos.h
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:10:55
 * Purpose: Declaration of the class ModeloRolPagos
 ***********************************************************************/

#if !defined(__RolDePagos_ModeloEmpleado_h)
#define __RolDePagos_ModeloEmpleado_h
#include <iostream>
#include <stdlib.h>

using namespace std;
class ModeloEmpleado
{
public:
   virtual void elegirJornada(void)=0;
   virtual char* pedirCedula(void)=0;
   virtual string pedirCargo(void)=0;
   virtual void mostrarMenu(void)=0;
   virtual void mostrarCDoc(void)=0;
  

protected:
private:

};

#endif