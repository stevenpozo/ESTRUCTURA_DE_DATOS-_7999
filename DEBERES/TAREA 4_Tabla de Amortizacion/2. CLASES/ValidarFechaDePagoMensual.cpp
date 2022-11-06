/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creacion: miércoles, 4 de noviembre de 2022 14:06:30
 * Purpose: Implementation of the classes
 * Enunciado del problema: Simular tabla de Amortizacion, si la fecha de pago cae domingo, moverlo al dia lunes.
 ***********************************************************************/ 

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include<cmath>
#include <ctime>

using namespace std;


int zellersAlgorithm(int day, int month, int year){
	
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

int* GetCurrentDate1(){
	
	time_t now = time(0);
   	tm *ltm = localtime(&now);
   	
   	int &anio=ltm->tm_year;
   	int &mes=ltm->tm_mon;
   	int &dia=ltm->tm_mday;
   	
   	static int date[3]={dia,mes+1,anio+1900};

   	return date;
}

void generatePayDatesMontly(int nCuotas,int pos){
	
	const int* actDate;
	int months[nCuotas];
	int years[nCuotas];
	int days[nCuotas];
	
	actDate=GetCurrentDate1();
	
	int mont=actDate[1];
	int year=actDate[2];
	
	for(int i=1;i<=nCuotas;i++){
		mont+=1;
		
			if(mont==13){
				year+=1;
				mont=1;
			}
			
		months[i]=mont;	
		years[i]=year;
	}
	
	
	
	for(int i=1;i<=nCuotas;i++){
		
		if(zellersAlgorithm(actDate[0], months[i], years[i])==0){
			days[i]=actDate[0]+2;
		}else if(zellersAlgorithm(actDate[0], months[i], years[i])==1){
			days[i]=actDate[0]+1;
		}else{
			days[i]=actDate[0];
		}
	}
	
	
		cout<<days[pos]<<"/"<<months[pos]<<"/"<<years[pos]<<endl;	
		
	
		
}