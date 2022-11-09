/***********************************************************************
 * UFA-ESPE
 * Nombres: Steven Pozo,Quilumbaquin Jairo
 * Fecha de creación: lunes, 31 de octubre de 2022 16:53:36
 * Purpose: estresarnos
 * Enunciado del problema: Sobrecarga de operadores (&&,||)
 ***********************************************************************/ 

#if !defined(__SobreCargaDeDatos_Coordenada_h)
#define __SobreCargaDeDatos_Sobrecarga_h

class Sobrecarga
{
public:
 
   Sobrecarga operator &&(const Sobrecarga &m) const;
   double getX(void);
   void setX(double newX);
   double getY(void);
   void setY(double newY);
   double getA(void);
   void setA(double newA);
   double getB(void);
   void setB(double newB);
   
   Sobrecarga(const double x, const double y, const double a, const double b);
   double ingresaDoubles(void);
   Sobrecarga();

protected:
private:
   double x;
   double y;
   double a;
   double b;


};

#endif