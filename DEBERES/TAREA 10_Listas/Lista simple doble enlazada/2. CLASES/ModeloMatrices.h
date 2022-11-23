/***********************************************************************
 * Universidad de las fuerzas Armadas ESPE
 * ESTRUCTURA DE DATOS
 * Module:  ModeloMatrices.h
 * Author:  Steven Pozo. Jairo Quilumbaquin
 * Modified: miércoles, 20 de noviembre de 2022 15:35:07
 * Purpose: Elevar a n potencia una matriz 
 ***********************************************************************/

#if !defined(__arreglosEstaticos_ModeloMatrices_h)
#define __arreglosEstaticos_ModeloMatrices_h

class ModeloMatrices
{
public:
   virtual int** multiplicarMatriz(int **vect1,int **vect2,int filas, int columnas)=0;
   virtual int** elevarPotencia(int** matrix, int** res,int exp,int iter)=0;
   virtual void encerar(int **,int)=0;
   virtual void limpiarMatriz(int **, int )=0;
   virtual void imprimir(int **,int)=0;
   virtual int** crearMatriz(int,int)=0;
   virtual void ingresarDatosMatriz(int **,int)=0;
   virtual int ingresarEnteros(void)=0;
   virtual void pedirTamanioMatriz(void)=0;

protected:
private:

};

#endif