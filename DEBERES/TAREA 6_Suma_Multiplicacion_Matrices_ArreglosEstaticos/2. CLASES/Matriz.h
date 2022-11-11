/***********************************************************************
 * Module:  Matriz.h
 * Author:  steve
 * Modified: miércoles, 9 de noviembre de 2022 15:38:11
 * Purpose: Declaration of the class Matriz
 ***********************************************************************/

#if !defined(__arreglosEstaticos_Matriz_h)
#define __arreglosEstaticos_Matriz_h
#define TAM 100

#include "ModeloMatrices.h"

class Matriz : public ModeloMatrices
{
public:
   int getFilas(void);
   void setFilas(int newFilas);

   Matriz();
   ~Matriz();
   int getColumnas(void);
   void setColumnas(int newColumnas);
   int getOpcion(void);
   void setOpcion(int newOpcion);
   
   void sumaMatriz(int vect1[][TAM],int vect[][TAM],int filas, int columnas) override;
   void multMatriz(int vect1[][TAM],int vect[][TAM],int filas, int columnas) override;
   void imprimir(int [][TAM],int,int) override;
   void crearMatriz(int matriz[TAM][TAM], int fila, int columna) override;
   void ingresarDatosMatriz() override;
   int ingresarEnteros(void) override;

protected:
private:
   int filas;
   int columnas;
   int opcion;


};

#endif