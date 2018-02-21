#include "Persona.h"
#include <string>

Persona::Persona()
{
	cout << "Se construyo Persona...\n";
}

Persona::~Persona()
{
	cout << "Se destruyo Persona...\n";
}

void Persona::setNombre(string nombre)
{
	this->nombre = nombre;
}

void Persona::setEstadoCivil(string estado_civil)
{
	this->estado_civil = estado_civil;
}

void Persona::setGenero(char genero)
{
	this->genero = genero;
}

void Persona::setEdad(int edad)
{
	this->edad = edad;
}

string Persona::getNombre()
{
	return nombre;
}

string Persona::getEstadoCivil()
{
	return estado_civil;
}

char Persona::getGenero()
{
	return genero;
}

int Persona::getEdad()
{
	return edad;
}

void Persona::imprimirPersona()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
	cout << "Genero: " << genero << endl;
	cout << "Estado Civil: " << estado_civil << endl;
}

void Persona::imprimir()
{
	this->imprimirPersona();
}