/***********************************************************************
 * Module:  Empleado.h
 * Author:  ColegioM
 * Modified: martes, 22 de noviembre de 2022 18:24:01
 * Purpose: Declaration of the class Empleado
 ***********************************************************************/

#if !defined(__RolDePagos_Empleado_h)
#define __RolDePagos_Empleado_h
#include "ModeloEmpleado.h"
#include <string>
using namespace std;
class Empleado : public ModeloEmpleado
{
public:
   int getHorasExTrabajo(void);
   void setHorasExTrabajo(int newHorasExTrabajo);
   int getJornada(void);
   void setJornada(int newJornada);
   int getOpc(void);
   void setOpc(int newOpc);
	
	
   double getSalario(void);
   void setSalario(double newSalario);
   string getNombre(void);
   void setNombre(string newNombre);
   string getApellido(void);
   void setApellido(string newApellido);
   char* getCedula(void);
   void setCedula(char* newCedula);
   string getCargo(void);
   void setCargo(string newCargo);
   Empleado();
   Empleado pedirDatos(void);
   string pedirCargo(void) override;
   void elegirJornada(void) override;
   char* pedirCedula(void) override;
   void mostrarMenu(void) override;
   void mostrarCDoc(void) override;
   
  
protected:
private:
   string nombre;
   string apellido;
   char *cedula;
   string cargo;
   double salario;
   int horasExTrabajo;
   int jornada;
   int opc;

};

#endif