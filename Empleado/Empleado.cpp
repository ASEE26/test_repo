#include<iostream>
using std::endl;
using std::cout;

#include<cstring>
using std::strlen;
using std::strcpy;

#include "Empleado.h"

int Empleado::numEmpleados=0;

Empleado::Empleado(const char *const nombre,const char *const apellido, const char *const identidad, const char *const talentoH){
	primerNombre= new char[strlen(nombre)+1];
	strcpy(primerNombre,nombre);
	primerApellido= new char[strlen(apellido)+1];
	strcpy(primerApellido,apellido);
	iD= new char[strlen(identidad)+1];
	strcpy(iD,identidad);
	tH= new char[strlen(talentoH)+1];
	strcpy(tH,talentoH);
	
	contar();
}
void Empleado::contar(){
	numEmpleados++;
}
const int Empleado::getNumEmpleados(){
	return numEmpleados;
}
const char *Empleado::getPrimerNombre() const{
    return primerNombre;
}
const char *Empleado::getPrimerApellido() const{
    return primerApellido;
}
const char *Empleado::getIdentidad() const{
    return iD;
}
const char *Empleado::gettalentoHumano() const{
    return tH;
}
