#include<iostream>
using std::endl;
using std::cout;

#include"Empleado.hpp"

int main(){
	
	Empleado empleado1("Pablo", "Mejia", "0501199000450", "01470");
	
	cout<<"El nombre del empleado es: "<<empleado1.getPrimerNombre()<<endl;
	cout<<"El apellido del empleado es: "<<empleado1.getPrimerApellido()<<endl;
	cout<<"La identidad del empleado es: "<<empleado1.getIdentidad()<<endl;
	cout<<"La cantidad de empleados es: "<<empleado1.getNumEmpleados()<<endl;
	cout<<"El No. Talento Humano del empleados es: "<<empleado1.gettalentoHumano()<<endl;
	return 0;
}
