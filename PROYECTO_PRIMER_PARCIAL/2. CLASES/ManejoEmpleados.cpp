/*agregar objetos de c++ en un archivo de texto*/
#include<iostream>
#include <string>
#include "Ingreso.cpp"
#include "Egreso.cpp"
#include "ValidarFechaDePago.cpp"
#include "Archivo.cpp"
#include "Empleado.h"
#include "ListaDoble.cpp"
#include "Validaciones.hpp"

class ManejoEmpleados{
	
	private:
		Empleado empleado;
		Archivo archivo;
		ListaDoble listaEmpleados;
		Validaciones validacion;
	
	public:
	
	void crearRegistro(void);
	void registrarEmpleado(Empleado emp);
	Empleado CargarEmpleado(string nEmpleado);
	void LeerDatos();
	void guardarRoldePagos(Empleado);
	void buscarEmpleado(Empleado);
	void generarRoldePagos(Empleado empleado);
	Empleado menuBusqueda();
	void mostrarCdoc();
	
	ManejoEmpleados();
	~ManejoEmpleados();	
	
};

ManejoEmpleados::ManejoEmpleados(){
	this->empleado=Empleado();
	this->archivo=Archivo();
	this->archivo.setNombreCarpeta("REGISTRO");
}



ManejoEmpleados::~ManejoEmpleados(){
	
}


void ManejoEmpleados::crearRegistro(){
	archivo.crearCarpeta("REGISTRO");
	archivo.setNombreCarpeta("REGISTRO");
}

void ManejoEmpleados::registrarEmpleado(Empleado emp){
	
	listaEmpleados.insertarPorCabeza(emp);
	string cad=archivo.getNombreCarpeta()+"\\"+emp.getNombre()+" "+emp.getApellido();
	const char* path1=cad.c_str();
	
	bool bnd1=archivo.crearCarpeta(path1);
	bool bnd2=archivo.crearArchivo(cad,"Datos.txt");
	
	string guardar=emp.getNombre()+"\n"+emp.getApellido()+"\n"+emp.getCedula()+"\n"+emp.getCargo()+"\n"+to_string(emp.getSalario());
	archivo.escribirArchivo("Datos.txt",guardar);
	cout<<"\nUsuario registrado con exito c:"<<endl;

}


Empleado ManejoEmpleados::CargarEmpleado(string nEmpleado){
	
	string*datos=new string[5];
	datos=archivo.ArchivoAObjeto(nEmpleado+"\\"+"Datos.txt");	
	
	char* ced=strdup(datos[2].c_str());
	double salario=stod(datos[4]);
	
	empleado.setNombre(datos[0]);
	empleado.setApellido(datos[1]);
	empleado.setCedula(ced);
	empleado.setCargo(datos[3]);
	empleado.setSalario(salario);

	
	return empleado;
}

void ManejoEmpleados::guardarRoldePagos(Empleado emp){
	
	listaEmpleados.buscar(emp);
	
	
	/*string cad=archivo.getNombreCarpeta()+"\\"+emp.getNombre()+" "+emp.getApellido();
	const char* path1=cad.c_str();
	
	bool bnd1=archivo.crearCarpeta(path1);
	bool bnd2=archivo.crearArchivo(cad,"Datos.txt");
	
	string guardar=emp.getNombre()+"\n"+emp.getApellido()+"\n"+emp.getCedula()+"\n"+emp.getCargo()+"\n"+to_string(emp.getSalario());
	archivo.escribirArchivo("Datos.txt",guardar);
	cout<<"\nUsuario registrado con exito c:"<<endl;
	
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"\nNombre y apellido: "<<empleado.getNombre()<<" "<<empleado.getApellido()<<endl;
	cout<<"\nCargo: "<<empleado.getCargo()<<"\t\tCedula: "<<empleado.getCedula()<<endl;
	cout<<"\n-------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\t\tROL DE PAGOS"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<" INGRESOS: "<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	printf("\t*Monto horas extras: %.2f\n",montoHorasExtras);
	printf("\t*Tasa de ingreso al IESS: %.2f\n",tasaIngresoIess);
	printf("\t*Fondo de Reserva: %.2f\n",fondoReserva);
	printf("\t*Total ingreso: %.2f\n",totalIngreso);
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<" EGRESOS: "<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	printf("\t*Valor IESS: %.2f\n",valorIess);
	printf("\t*Anticipo: %.2f\n",anticipo);
	printf("\t*Total egreso: %.2f\n",totalEgreso);
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"\t*Salario total cuando recibe quincena: "<<endl;
	printf("\t*TOTAL: %.2f\n",salarioConQuincena);
	cout<<"\t*Salario total cuando no recibe quicena: "<<endl;
	printf("\t*TOTAL: %.2f\n",salarioTotal);
	cout<<"-------------------------------------------------------------------------------"<<endl;*/
	
}

void ManejoEmpleados::buscarEmpleado(Empleado emp){
	if(!listaEmpleados.verificarVacio()){
		listaEmpleados.buscar(emp);	
	}else{
		cout<<"Lista vacia"<<endl;
	}
	
}


void ManejoEmpleados::LeerDatos(){
	
	if(!listaEmpleados.verificarVacio()){
		listaEmpleados.mostrar();
	}else{
		cout<<"Lista vacia"<<endl;
	}
	
}


void ManejoEmpleados::generarRoldePagos(Empleado empleado){
	
	Ingreso ingreso;
	Egreso egreso;
	Empleado emp2;
	
	if(!listaEmpleados.verificarVacio()){
		emp2=menuBusqueda();
		empleado=listaEmpleados.buscar(emp2);
	if(!empleado.getNombre().empty()){
		
	double montoHorasExtras, tasaIngresoIess, fondoReserva, totalIngreso;
	double valorIess, anticipo, totalEgreso, salarioConQuincena, salarioTotal;
	int *fecha;
	
	montoHorasExtras=ingreso.calcularMontoHorasExtras(empleado.getHorasExTrabajo(),empleado.getSalario(),empleado.getJornada());
	tasaIngresoIess=ingreso.calcularTasaIngresoIESS(montoHorasExtras,empleado.getSalario());
	fondoReserva=ingreso.calcularFondoReserva(tasaIngresoIess);
	totalIngreso=ingreso.calcularTotalIngreso(tasaIngresoIess,fondoReserva); 
				
	valorIess=egreso.pagarValorIEES(tasaIngresoIess);
	anticipo=egreso.calcularAnticipo(totalIngreso);
	totalEgreso=egreso.calcularTotalEgreso(valorIess,anticipo);
	salarioConQuincena=egreso.calcularSueldoRecibir(totalIngreso,totalEgreso);
	salarioTotal=egreso.calcularSueldoSinQuincena(totalIngreso,valorIess);
				
				
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"\nNombre y apellido: "<<empleado.getNombre()<<" "<<empleado.getApellido()<<endl;
	cout<<"\nCargo: "<<empleado.getCargo()<<"\t\tCedula: "<<empleado.getCedula()<<endl;
	cout<<"\n-------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\t\tROL DE PAGOS"<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<" INGRESOS: "<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	printf("\t*Monto horas extras: %.2f\n",montoHorasExtras);
	printf("\t*Tasa de ingreso al IESS: %.2f\n",tasaIngresoIess);
	printf("\t*Fondo de Reserva: %.2f\n",fondoReserva);
	printf("\t*Total ingreso: %.2f\n",totalIngreso);
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<" EGRESOS: "<<endl;
	cout<<"-------------------------------------------------------------------------------"<<endl;
	printf("\t*Valor IESS: %.2f\n",valorIess);
	printf("\t*Anticipo: %.2f\n",anticipo);
	printf("\t*Total egreso: %.2f\n",totalEgreso);
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"\t*Salario total cuando recibe quincena: "<<endl;
	printf("\t*TOTAL: %.2f\n",salarioConQuincena);
	cout<<"\t*Salario total cuando no recibe quicena: "<<endl;
	printf("\t*TOTAL: %.2f\n",salarioTotal);
	cout<<"-------------------------------------------------------------------------------"<<endl;
	
	mostrarFechaActual();
		}
		
	
	}else{
		cout<<"Lista vacia"<<endl;
	}
	
}

Empleado ManejoEmpleados::menuBusqueda(){
	Empleado emp;
	string nombre;
	cout<<"Ingrese el 1er Apellido del Empleado"<<endl;
	nombre=validacion.validarStrings();
	emp.setApellido(nombre);
	
	return emp;
}

void ManejoEmpleados::mostrarCdoc(){
	string cdoc="D:\\Documentos2\JAIRO\SEGUNDO\ESTRUCTURAS DE DATOS\PROYECTO\7. PROYECTO\PROYECTO\PROYECTO_V2\PROYECTO\MANEJO_ARCHIVOS\REGISTRO\cDoc\html";
	string path1=archivo.getPath()+cdoc;
	const char* path2=strdup(path1.c_str());
	system(path2);
	
}
