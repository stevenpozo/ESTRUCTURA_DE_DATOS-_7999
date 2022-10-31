/***********************************************************************
 * Module:  Coordenada.cpp
 * Author:  steve
 * Modified: lunes, 31 de octubre de 2022 17:10:18
 * Purpose: Implementation of the class Coordenada
 ***********************************************************************/

#include "Coordenada.h"


Coordenada Coordenada::operator &&(const Coordenada& other) const
{
   Coordenada res(x>0 && other.x>0,y>0 && other.y>0);
   return res;
}


Coordenada Coordenada::operator ||(const Coordenada& other) const
{
   Coordenada res(x>0 || other.x>0,y>0 || other.y>0);
   return res;
}


double Coordenada::getX(void)
{
   return x;
}


void Coordenada::setX(double newX)
{
   x = newX;
}



double Coordenada::getY(void)
{
   return y;
}


void Coordenada::setY(double newY)
{
   y = newY;
}



Coordenada::Coordenada(const double x,const double y)
{
   	this->x = x;
	this->y = y;
}