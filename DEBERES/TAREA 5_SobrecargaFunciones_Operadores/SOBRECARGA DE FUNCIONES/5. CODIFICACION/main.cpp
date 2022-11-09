/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: miércoles, 7 de noviembre de 2022 16:06:30
 * Purpose: Implementation of the class Areas
 * Enunciado del problema: Calcular el área de algunas figuras geometricas con el con funciones sobrecargadas.
 ***********************************************************************/

#include <iostream>
#include<stdio.h>
#include<clocale>
#include <stdlib.h> 
#include "Areas.cpp"
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main(){
	
	int opcion;
 	int seleccion;
	double lado, radio,ancho, largo,apotema;
	double area;
	double base, altura;
	double diagonalMayor,diagonalMenor;
	double baseMayor, baseMenor;
	
	setlocale(LC_CTYPE,"Spanish");
	Areas areas;
	cout<<"----------AREAS DE FIGURAS GEOMÉTRICAS---------"<<endl;
	cout<<"CALCULAR AREA DE: "<<endl;
	cout<<"\t1. CUADRADO"<<endl;
	cout<<"\t2. CIRCULO"<<endl;
	cout<<"\t3. RECTÁNGULO"<<endl;
	cout<<"\t4. PARALELOGRAMO"<<endl;
	cout<<"\t5. TRIANGULO"<<endl;
	cout<<"\t6. ROMBO"<<endl;
	cout<<"\t7. PENTAGONO"<<endl;
	cout<<"\t8. HEXAGONO"<<endl;
	cout<<"\t9. TRAPECIO"<<endl;
	cout<<"Seleccione: "<<endl;
	opcion = areas.ingresarEnteros();
	cout<<"\n";
	switch (opcion ){
		case 1:
			cout<<"-----------------CUADRADO-----------------"<<endl;
			cout<<"ingrese el valor del lado del cuadrado en cm: "<<endl;
			lado=areas.ingresaDoubles();
			area =areas.calcularArea(lado,1);
			cout<<"\nEl valor del area es: "<<area<<" cm^2"<<endl;
			
			system("PAUSE");
			system("CLS");
			fflush(stdin);
			return main();
			break;
		case 2:
			cout<<"-----------------CIRCULO-----------------"<<endl;
			cout<<"ingrese el valor del radio del circulo en cm: "<<endl;
			radio=areas.ingresaDoubles();
			area =areas.calcularArea(radio,2);
			cout<<"\nEl valor del area es: "<<area<<" cm^2"<<endl;
			
			system("PAUSE");
			system("CLS");
			fflush(stdin);
			return main();
			break;
		case 3:
			cout<<"-----------------RECTANGULO-----------------"<<endl;
			cout<<"ingrese el valor del ancho en cm: "<<endl;
			ancho=areas.ingresaDoubles();
			cout<<"\ningrese el valor del largo en cm: "<<endl;
			largo=areas.ingresaDoubles();
			area =areas.calcularArea(ancho,largo,3);
			cout<<"\nEl valor del area es: "<<area<<" cm^2"<<endl;
			
			system("PAUSE");
			system("CLS");
			fflush(stdin);
			return main();
			break;
		case 4:
			cout<<"-----------------PARALELOGRAMO-----------------"<<endl;
			cout<<"ingrese el valor de la base en cm: "<<endl;
			base=areas.ingresaDoubles();
			cout<<"\ningrese el valor de la altura en cm: "<<endl;
			altura=areas.ingresaDoubles();
			area =areas.calcularArea(base, altura,4);
			cout<<"\nEl valor del area es: "<<area<<" cm^2"<<endl;
			
			system("PAUSE");
			system("CLS");
			fflush(stdin);
			return main();
			break;
		case 5:
			cout<<"-----------------TRIANGULO-----------------"<<endl;
			cout<<"ingrese el valor de la base en cm: "<<endl;
			base=areas.ingresaDoubles();
			cout<<"\ningrese el valor de la altura en cm: "<<endl;
			cin>>altura;
			area =areas.calcularArea(base,altura,5);
			cout<<"\nEl valor del area es: "<<area<<" cm^2"<<endl;
			
			system("PAUSE");
			system("CLS");
			fflush(stdin);
			return main();
			break;
		case 6:
			cout<<"-----------------ROMBO-----------------"<<endl;
			cout<<"ingrese el valor de la diagonal mayor en cm: "<<endl;
			diagonalMayor=areas.ingresaDoubles();
			cout<<"\ningrese el valor de la diagonal menor en cm: "<<endl;
			diagonalMenor=areas.ingresaDoubles();
			area =areas.calcularArea(diagonalMayor,diagonalMenor,6);
			cout<<"\nEl valor del area es: "<<area<<" cm^2"<<endl;
			
			system("PAUSE");
			system("CLS");
			fflush(stdin);
			return main();
			break;
		case 7:
			cout<<"-----------------PENTAGONO-----------------"<<endl;
			cout<<"ingrese el valor de un lado en cm: "<<endl;
			lado=areas.ingresaDoubles();
			cout<<"\ningrese el valor de la apotema en cm: "<<endl;
			apotema =areas.ingresaDoubles();
			area =areas.calcularArea(lado,apotema,7);
			cout<<"\nEl valor del area es: "<<area<<" cm^2"<<endl;
			
			system("PAUSE");
			system("CLS");
			fflush(stdin);
			return main();
			break;
		case 8:
			cout<<"-----------------HEXAGONO-----------------"<<endl;
			cout<<"ingrese el valor de un lado en cm: "<<endl;
			lado=areas.ingresaDoubles();
			cout<<"\ningrese el valor de la apotema en cm: "<<endl;
			apotema=areas.ingresaDoubles();
			area =areas.calcularArea(lado,apotema,8);
			cout<<"\nEl valor del area es: "<<area<<" cm^2"<<endl;
			
			system("PAUSE");
			system("CLS");
			fflush(stdin);
			return main();
			break;
		case 9:
			cout<<"-----------------TRAPECIO-----------------"<<endl;
			cout<<"ingrese el valor de un base mayor en cm: "<<endl;
			baseMayor=areas.ingresaDoubles();
			cout<<"\ningrese el valor de la base menor en cm: "<<endl;
			baseMenor=areas.ingresaDoubles();
			cout<<"\ningrese el valor de la altura en cm: "<<endl;
			altura=areas.ingresaDoubles();
			area =areas.calcularArea(baseMayor,baseMenor,altura);
			cout<<"\nEl valor del area es: "<<area<<" cm^2"<<endl;
			
			system("PAUSE");
			system("CLS");
			fflush(stdin);
			return main();
			break;
		default:
			cout<<"\n La opcion seleccionada no es correcta";
			
			system("PAUSE");
			system("CLS");
			fflush(stdin);
			return main();
			break;
	} 
	
	return 0;
}