#include <iostream>
#include "Datos.cpp"

using namespace std;


int main(void)
{
	Datos d;
	float a;
	
//	d.ingresarEnteros();
//	d.ingresarCadenas();

/*    do
	{
    	printf("Ingrese un float: ");
        
    }while(d.ingresarFlotantes("%f", &a));
   
*/

   do
	{
    	printf("Ingrese un Reales: ");
        
    }while(d.ingresarReales("%f", &a));
   
    return 0; 
}
