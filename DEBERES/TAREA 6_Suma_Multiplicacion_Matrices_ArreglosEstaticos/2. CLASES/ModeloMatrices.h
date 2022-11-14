/***********************************************************************
 * Module:  ModeloMatrices.h
 * Author:  steve
 * Modified: miércoles, 9 de noviembre de 2022 15:35:07
 * Purpose: Declaration of the class ModeloMatrices
 ***********************************************************************/

#if !defined(__arreglosEstaticos_ModeloMatrices_h)
#define __arreglosEstaticos_ModeloMatrices_h
#define TAM 100
class ModeloMatrices
{
public:
   virtual void sumaMatriz(int vect1[][TAM],int vect[][TAM],int filas, int columnas)=0;
   virtual void multMatriz(int vect1[][TAM],int vect[][TAM],int filas, int columnas)=0;
   virtual void imprimir(int [][TAM],int,int)=0;
   virtual void crearMatriz(int [TAM][TAM],int,int)=0;
   virtual void ingresarDatosMatriz()=0;
   virtual int ingresarEnteros(void)=0;

protected:
private:

};

#endif