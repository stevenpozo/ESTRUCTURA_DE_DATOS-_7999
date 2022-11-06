/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: miércoles, 4 de noviembre de 2022 14:06:30
 * Purpose: Implementation of the classes
 * Enunciado del problema: Simular tabla de Amortizacion, si la fecha de pago cae domingo, moverlo al dia lunes.
 ***********************************************************************/ 

#if !defined(__Amortizacion_PrestamoAnual_h)
#define __Amortizacion_PrestamoAnual_h

#include "ModeloAmortizacionFrancesa.h"

class PrestamoAnual : public ModeloAmortizacionFrancesa
{
public:
   double getMonto_Credito(void);
   void setMonto_Credito(double newMonto_Credito);
   double getTasa_Interes(void);
   void setTasa_Interes(double newTasa_Interes);
   int getPlazo(void);
   void setPlazo(int newPlazo);
   PrestamoAnual();
   
   double calcularCuotaPagar(void) override;
   double calcularCapitalPendiente(double) override;
   double calcularIntereses(double) override;
   double calcularCuotaAmortizacion(double) override;
   void mostrarTabla(void) override;

protected:
private:
   double monto_Credito;
   double tasa_Interes;
   int plazo;


};

#endif