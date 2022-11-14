/***********************************************************************
 * Module:  Recursividad.h
 * Author:  steve
 * Modified: domingo, 13 de noviembre de 2022 16:38:21
 * Purpose: Declaration of the class Recursividad
 ***********************************************************************/

#if !defined(__Recursividad_Recursividad_h)
#define __Recursividad_Recursividad_h
#define TAM 100
#include "ModeloRecursivo.h"

class Recursividad : public ModeloRecursivo
{
public:
   int getFila(void);
   void setFila(int newFila);
   int getColumna(void);
   void setColumna(int newColumna);
   int getOpcion(void);
   void setOpcion(int newOpcion);
   Recursividad();
   int sumarRecursivaMatrices(int matriz1[][TAM], int matriz2[][TAM], int fila, int columna) override;
   int multiplicarRecursivaMatrices(int matriz1[][TAM], int matriz2[][TAM], int fila, int columna) override;
   int ingresarEnteros(void) override;
   void imprimir(int vect[][TAM] ,int fila,int columna) override;
   void crearMatriz( int matriz[][TAM],int fila, int columna) override;
   void ingresarDatosMatriz() override;

protected:
   void finalize(void);

private:
   int fila;
   int columna;
   int opcion;


};

#endif