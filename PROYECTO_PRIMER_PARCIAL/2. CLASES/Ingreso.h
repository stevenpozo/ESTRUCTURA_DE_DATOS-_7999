/***********************************************************************
 * Module:  Ingreso.h
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:19:19
 * Purpose: Declaration of the class Ingreso
 ***********************************************************************/

#if !defined(__RolDePagos_Ingreso_h)
#define __RolDePagos_Ingreso_h

#include "ModeloIngreso.h"

class Ingreso : public ModeloIngreso
{
public:
   //constructor
   Ingreso();
   //Funciones:
   double calcularMontoHorasExtras(int nHoras, double salario, int jornada) override;
   double calcularTasaIngresoIESS(double montoHorasExtras, double salario) override;
   double calcularFondoReserva(double tasaIngresoIess) override;
   double calcularTotalIngreso(double tasaIngresoIess, double fondoReserva) override;
protected:
private:


};

#endif