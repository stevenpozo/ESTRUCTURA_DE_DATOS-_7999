/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: miércoles, 4 de noviembre de 2022 14:06:30
 * Purpose: Implementation of the classes
 * Enunciado del problema: Simular tabla de Amortizacion, si la fecha de pago cae domingo, moverlo al dia lunes.
 ***********************************************************************/ 

//programa para validar fechas

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include<cmath>
#include <ctime>

using namespace std;


int zellersAlgorithm1(int day, int month, int year){
	
   int mon;
   string weekday[7] = {"Saturday"/*0*/,"Sunday"/*1*/,"Monday"/*2*/,"Tuesday"/*3*/, "Wednesday"/*4*/,"Thursday"/*5*/,"Friday"/*6*/};
   
   if(month > 2)
      mon = month; //for march to december month code is same as month
   else{
      mon = (12+month); //for Jan and Feb, month code will be 13 and 14
      year--; //decrease year for month Jan and Feb
   }
   int y = year % 100; //last two digit
   int c = year / 100; //first two digit
   int w = (day + floor((13*(mon+1))/5) + y + floor(y/4) + floor(c/4) + (5*c));
   w = w % 7;
   return w;
}

int* GetCurrentDate(){
	
	time_t now = time(0);
   	tm *ltm = localtime(&now);
   	
   	int &anio=ltm->tm_year;
   	int &mes=ltm->tm_mon;
   	int &dia=ltm->tm_mday;
   	
   	static int date[3]={dia,mes+1,anio+1900};

   	return date;
}

void generatePayDatesYear(int nCuotas, int pos){
	
	const int* actDate;
	int months[nCuotas];
	int years[nCuotas];
	int days[nCuotas];
	
	actDate=GetCurrentDate();
	
	for(int i=1;i<=nCuotas;i++){	
		years[i]=actDate[2]+i;
	}
		
	
	for(int i=1;i<=nCuotas;i++){
		
		if(zellersAlgorithm1(actDate[0], actDate[1], years[nCuotas])==0){
			days[nCuotas]=actDate[0]+2;
		}else if(zellersAlgorithm1(actDate[0], actDate[1], years[nCuotas])==1){
			days[i]=actDate[0]+1;
		}else{
			days[i]=actDate[0];
		}
	}
	
	
		cout<<days[pos]<<"/"<<actDate[1]<<"/"<<years[pos]<<endl;	
	
}
	
