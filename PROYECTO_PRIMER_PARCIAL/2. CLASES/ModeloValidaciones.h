/***********************************************************************
 * Module:  ModeloRolPagos.h
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:10:55
 * Purpose: Declaration of the class ModeloRolPagos
 ***********************************************************************/

#if !defined(__RolDePagos_ModeloValidaciones_h)
#define __RolDePagos_ModeloValidaciones_h

#include <string>
using namespace std;

class ModeloValidaciones
{
public:
   virtual int validarEnteros()=0;
   virtual bool verificarLongitud(char *p)=0;
   virtual int LongitudCadena(char *cedula)=0;
   virtual char* validarEnterosCedula()=0;
   virtual double validarDoubles()=0;
   virtual string validarStrings()=0;
   virtual int* splitNumber(char* number)=0;
   virtual bool verificacion1(char* numCedula)=0;
   virtual bool verificacion2(char* numCedula)=0;
   virtual bool verificacion3(char* numCedula)=0;
   virtual bool verificacionCedula(char* numCedula)=0;
 
protected:
private:

};

#endif