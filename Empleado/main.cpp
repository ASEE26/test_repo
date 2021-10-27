#include<iostream>
using std::endl;
using std::cout;

#include"Empleado.hpp"

int main(){
	
	Empleado empleado1("Pablo", "Mejia");
	
	cout<<"El nombre del empleado es: "<<empleado1.getPrimerNombre()<<endl;
	cout<<"El apellido del empleado es: "<<empleado1.getPrimerApellido()<<endl;
	cout<<"La cantidad de empleados es: "<<empleado1.getNumEmpleados()<<endl;	

	return 0;
}