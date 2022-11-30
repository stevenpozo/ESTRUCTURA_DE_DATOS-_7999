/***********************************************************************
 * Module:  ModeloRolPagos.h
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:10:55
 * Purpose: Declaration of the class ModeloRolPagos
 ***********************************************************************/

#if !defined(__RolDePagos_ModeloEgreso_h)
#define __RolDePagos_ModeloEgreso_h

class ModeloEgreso
{
public:
   
   virtual double pagarValorIEES(double tasaIngresoIess)=0;
   virtual double calcularAnticipo(double totalIngreso)=0;
   virtual double calcularTotalEgreso(double valorIess, double anticipo)=0;
   virtual double calcularSueldoRecibir(double totalIngreso, double totalEgreso)=0; 
   virtual double calcularSueldoSinQuincena(double totalIngreso,double valorIess)=0;

protected:
private:

};

#endif