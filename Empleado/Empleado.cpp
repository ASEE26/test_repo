#include<iostream>
using std::endl;
using std::cout;

#include<cstring>
using std::strlen;
using std::strcpy;

#include"Empleado.hpp"

int Empleado::numEmpleados=0;

Empleado::Empleado(const char *const nombre,const char *const apellido){
	primerNombre= new char[strlen(nombre)+1];
	strcpy(primerNombre,nombre);
	primerApellido= new char[strlen(apellido)+1];
	strcpy(primerApellido,apellido);
	contar();
}
void Empleado::contar(){
	numEmpleados++;
}
const int Empleado::getNumEmpleados()const{
	return numEmpleados;
}
const char Empleado::getPrimerNombre()const{
    return primerNombre;
}
const char Empleado::getPrimerApellido()const{
    return primerApellido;
}
