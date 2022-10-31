/***********************************************************************
 * Module:  Coordenada.h
 * Author:  steve
 * Modified: lunes, 31 de octubre de 2022 17:10:18
 * Purpose: Declaration of the class Coordenada
 ***********************************************************************/

#if !defined(__SobreCargaDeDatos_Coordenada_h)
#define __SobreCargaDeDatos_Coordenada_h

class Coordenada
{
public:
   Coordenada operator &&(const Coordenada& other) const;
   Coordenada operator ||(const Coordenada& other) const;
   double getX(void);
   void setX(double newX);
   double getY(void);
   void setY(double newY);
   Coordenada(const double x, const double y);

protected:
private:
   double x;
   double y;


};

#endif