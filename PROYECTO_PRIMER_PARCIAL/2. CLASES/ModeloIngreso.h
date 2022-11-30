/***********************************************************************
 * Module:  ModeloRolPagos.h
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:10:55
 * Purpose: Declaration of the class ModeloRolPagos
 ***********************************************************************/

#if !defined(__RolDePagos_ModeloIngreso_h)
#define __RolDePagos_ModeloIngreso_h

class ModeloIngreso
{
public:
   virtual double calcularMontoHorasExtras(int nHoras, double salario, int jornada)=0;
   virtual double calcularTasaIngresoIESS(double montoHorasExtras, double salario)=0;
   virtual double calcularFondoReserva(double tasaIngresoIess)=0;
   virtual double calcularTotalIngreso(double tasaIngresoIess, double fondoReserva)=0;

protected:
private:

};

#endif