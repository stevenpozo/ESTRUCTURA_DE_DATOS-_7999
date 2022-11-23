/***********************************************************************
 * Universidad de las fuerzas Armadas ESPE
 * ESTRUCTURA DE DATOS
 * Module:  ModeloMatrices.h
 * Author:  Steven Pozo. Jairo Quilumbaquin
 * Modified: miércoles, 20 de noviembre de 2022 15:35:07
 * Purpose: Elevar a n potencia una matriz 
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
   
   
   Matriz();
   int** multiplicarMatriz(int **vect1,int **vect2,int filas, int columnas) override;
   int** elevarPotencia(int** matrix, int** res,int exp,int iter) override;
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


};

#endif