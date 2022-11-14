/***********************************************************************
 * Module:  Matriz.h
 * Author:  steve
 * Modified: miércoles, 9 de noviembre de 2022 15:38:11
 * Purpose: Declaration of the class Matriz
 ***********************************************************************/

#if !defined(__arreglosEstaticos_Matriz_h)
#define __arreglosEstaticos_Matriz_h

#include "ModeloMatrices.h"

class Matriz : public ModeloMatrices
{
public:
   int getFilas(void);
   void setFilas(int newFilas);
   int getColumnas(void);
   void setColumnas(int newColumnas);
   int getOpcion(void);
   void setOpcion(int newColumnas);
   
   
   Matriz();
   ~Matriz();
   int** sumaMatriz(int **vect1,int **vect2,int filas, int columnas) override;
   int** multiplicar(int **vect1,int **vect2,int filas, int columnas) override;
   void encerar(int **,int) override;
   void limpiarMatriz(int **, int ) override;
   void imprimir(int **,int) override;
   int** crearMatriz(int,int) override;
   void ingresarDatosMatriz(int **,int) override;
   int ingresarEnteros(void) override;
   void pedirTamanioMatriz(void) override;

protected:
private:
   int filas;
   int columnas;
   int opcion;



};

#endif