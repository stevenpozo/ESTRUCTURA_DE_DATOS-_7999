/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creación: sábado, 29 de octubre de 2022 16:53:36
 * Purpose: declaración de la interface
 * Enunciado del problema: Crear un programa que nos permita validar el ingreso de datos de tipo entero, flotante, char y double.
 ***********************************************************************/ 

#if !defined(__Deber2_1parte_Modelo_h)
#define __Deber2_1parte_Modelo_h

class Modelo
{
public:
   virtual int ingresarReales(const char* fm, void* var)=0;
   virtual int ingresarFlotantes(const char* fm, void* var)=0;
   virtual int ingresarEnteros(void)=0;
   virtual char ingresarCadenas(void)=0;

protected:
private:
	double reales;
   int enteros;
   float flotantes;
   char cadenas;
};

#endif