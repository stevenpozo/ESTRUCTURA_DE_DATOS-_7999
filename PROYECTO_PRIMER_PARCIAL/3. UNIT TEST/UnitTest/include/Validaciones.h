/***********************************************************************
 * Module:  Egreso.h
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:18:41
 * Purpose: Declaration of the class Egreso
 ***********************************************************************/

#if !defined(__RolDePagos_Validaciones_h)
#define __RolDePagos_Validaciones_h

#include "ModeloValidaciones.h"
#include <string>
using namespace std;

class Validaciones : public ModeloValidaciones
{
public:
	
   int validarEnteros() override;
   int LongitudCadena(char *cedula) override;
   bool verificarLongitud(char *p) override;
   char* validarEnterosCedula() override;
   double validarDoubles() override;
   string validarStrings() override;
   int* splitNumber(char* number) override;
   bool verificacion1(char* numCedula) override;
   bool verificacion2(char* numCedula) override;
   bool verificacion3(char* numCedula) override;
   bool verificacionCedula(char* numCedula) override;
   Validaciones();

protected:
private:


};

#endif