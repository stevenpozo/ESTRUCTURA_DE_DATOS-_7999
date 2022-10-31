/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creación: sábado, 29 de octubre de 2022 16:53:36
 * Purpose: estresarnos
 * Enunciado del problema: Crear un programa que nos permita validar el ingreso de datos de tipo entero, flotante, char y double.
 ***********************************************************************/ 

#if !defined(__Deber2_1parte_Datos_h)
#define __Deber2_1parte_Datos_h

#include "Modelo.h"

class Datos : public Modelo
{
public:
   double getReales(void);
   void setReales(double newReales);
   int getEnteros(void);
   void setEnteros(int newEnteros);
   float getFlotantes(void);
   void setFlotantes(float newFlotantes);
   char getCadenas(void);
   void setCadenas(char newCadenas);
   
   int ingresarReales(const char* fm, void* var) override;
   char ingresarCadenas() override;
   int ingresarFlotantes(const char* fm, void* var) override;
   int ingresarEnteros() override;
   Datos();

protected:
private:
   double reales;
   int enteros;
   float flotantes;
   char cadenas;


};

#endif