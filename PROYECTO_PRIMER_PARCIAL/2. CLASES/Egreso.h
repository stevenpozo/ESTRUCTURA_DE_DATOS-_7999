/***********************************************************************
 * Module:  Egreso.h
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:18:41
 * Purpose: Declaration of the class Egreso
 ***********************************************************************/

#if !defined(__RolDePagos_Egreso_h)
#define __RolDePagos_Egreso_h

#include "ModeloEgreso.h"

class Egreso : public ModeloEgreso
{
public:
	
   //contructor
   Egreso();
   //Funciones
   double pagarValorIEES(double tasaIngresoIess) override;
   double calcularAnticipo(double totalIngreso) override;
   double calcularTotalEgreso(double valorIess, double anticipo) override;
   double calcularSueldoRecibir(double totalIngreso, double totalEgreso) override;
   double calcularSueldoSinQuincena(double totalIngreso,double valorIess) override;

protected:
private:


};

#endif