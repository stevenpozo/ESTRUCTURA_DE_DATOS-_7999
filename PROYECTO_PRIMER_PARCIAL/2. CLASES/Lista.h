/***********************************************************************
 * Module:  Lista.h
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:22:09
 * Purpose: Declaration of the class Lista
 ***********************************************************************/

#if !defined(__RolDePagos_Lista_h)
#define __RolDePagos_Lista_h

#include <ModeloRolPagos.h>

class Lista : public ModeloRolPagos
{
public:
   Lista();

protected:
private:
   Nodo* cabeza;
   Nodo* cola;


};

#endif