/***********************************************************************
 * Module:  ModeloRecursivo.h
 * Author:  steve
 * Modified: domingo, 13 de noviembre de 2022 16:40:39
 * Purpose: Declaration of the class ModeloRecursivo
 ***********************************************************************/

#if !defined(__Recursividad_ModeloRecursivo_h)
#define __Recursividad_ModeloRecursivo_h
#define TAM 100
class ModeloRecursivo
{
public:
   virtual int sumarRecursivaMatrices(int matriz1[][TAM], int matriz2[][TAM], int fila, int columna)=0;
   virtual int multiplicarRecursivaMatrices(int matriz1[][TAM], int matriz2[][TAM], int fila, int columna)=0;
   virtual void imprimir(int vect[][TAM] ,int fila,int columna)=0;
   virtual void crearMatriz( int matriz[][TAM],int fila, int columna)=0;
   virtual void ingresarDatosMatriz()=0;
   virtual int ingresarEnteros(void)=0;

protected:
private:

};

#endif