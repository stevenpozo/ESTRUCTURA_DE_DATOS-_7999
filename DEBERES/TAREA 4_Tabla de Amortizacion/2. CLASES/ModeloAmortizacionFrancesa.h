/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: miércoles, 4 de noviembre de 2022 14:06:30
 * Purpose: Implementation of the classes
 * Enunciado del problema: Simular tabla de Amortizacion, si la fecha de pago cae domingo, moverlo al dia lunes.
 ***********************************************************************/ 

#if !defined(__Amortizacion_ModeloAmortizacionFrancesa_h)
#define __Amortizacion_ModeloAmortizacionFrancesa_h

class ModeloAmortizacionFrancesa
{
public:
   virtual double calcularCuotaPagar(void)=0;
   virtual double calcularCapitalPendiente(double)=0;
   virtual double calcularIntereses(double)=0;
   virtual double calcularCuotaAmortizacion(double)=0;
   virtual void mostrarTabla(void)=0;

protected:
private:

};

#endif