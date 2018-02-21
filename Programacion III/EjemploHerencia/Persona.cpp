#include "Persona.h"
#include <string>

Persona::Persona()
{ 
	cout << "Se contruyo Persona...\n"; 
}

Persona::~Persona()
{ 
	cout << "Se destruyo Persona...\n"; 
}

void Persona::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Persona::setEdad(int edad)
{
	this->edad = edad;
}

void Persona::setEstadoCivil(string estadoCivil)
{
	this->estado_civil = estadoCivil;
}

void Persona::setGenero(char genero)
{
	this->genero = genero;
}

string Persona::getNombre()
{
	return nombre;
}

int Persona::getEdad()
{
	return edad;
}

string Persona::getEstadoCivil()
{
	return estado_civil;
}

char Persona::getGenero()
{
	return genero;
}

void Persona::imprimirPersona()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
	cout << "Genero: " << genero << endl;
	cout << "Estado Civil: " << estado_civil << endl;
}