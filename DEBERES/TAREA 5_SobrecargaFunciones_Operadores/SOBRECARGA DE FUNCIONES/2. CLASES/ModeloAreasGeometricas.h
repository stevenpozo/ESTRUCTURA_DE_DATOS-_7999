/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: miércoles, 7 de noviembre de 2022 16:06:30
 * Purpose: Implementation of the class Areas
 * Enunciado del problema: Calcular el área de algunas figuras geometricas con el con funciones sobrecargadas.
 ***********************************************************************/

#if !defined(__AreaFiguras_ModeloAreasGeometricas_h)
#define __AreaFiguras_ModeloAreasGeometricas_h

class ModeloAreasGeometricas
{
public:
   virtual double calcularArea(double variableA, int seleccion)=0;
   virtual double calcularArea(double variableA, double variableB, int seleccion)=0;
   virtual double calcularArea(double variableA, double variableB, double variableC)=0;
   virtual int ingresarEnteros(void)=0;
   virtual double ingresaDoubles(void)=0;

protected:
private:

};

#endif