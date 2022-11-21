/***********************************************************************
 * Module:  ModeloMatrices.h
 * Author:  steve
 * Modified: miércoles, 9 de noviembre de 2022 15:35:07
 * Purpose: Declaration of the class ModeloMatrices
 ***********************************************************************/

#if !defined(__arreglosEstaticos_ModeloMatrices_h)
#define __arreglosEstaticos_ModeloMatrices_h

class ModeloMatrices
{
public:
   virtual int** multiplicar(int **vect1,int **vect2,int filas, int columnas)=0;
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