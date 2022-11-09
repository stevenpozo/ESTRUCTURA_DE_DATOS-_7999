/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: miércoles, 7 de noviembre de 2022 16:06:30
 * Purpose: Implementation of the class Areas
 * Enunciado del problema: Calcular el área de algunas figuras geometricas con el con funciones sobrecargadas.
 ***********************************************************************/

#if !defined(__AreaFiguras_Areas_h)
#define __AreaFiguras_Areas_h

#include "ModeloAreasGeometricas.h"


class Areas : public ModeloAreasGeometricas
{
public:
   double getVariableA(void);
   void setVariableA(double newVariableA);
   double getVariableB(void);
   void setVariableB(double newVariableB);
   double getVariableC(void);
   void setVariableC(double newAVariableC);
   Areas();
   
   double calcularArea(double variableA, int seleccion) override;
   double calcularArea(double variableA, double variableB, int seleccion) override;
   double calcularArea(double variableA, double variableB, double variableC) override;
   int ingresarEnteros(void) override;
   double ingresaDoubles(void) override;

protected:
private:
   double variableA;
   double variableB;
   double variableC;
 


};

#endif