

#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona
{
public:
	Persona();
	~Persona();
	
	void setNombre(string);
	void setEdad(int);
	void setEstadoCivil(string);
	void setGenero(char genero);
	
	string getNombre();
	int getEdad();
	string getEstadoCivil();
	char getGenero();

	void imprimirPersona();

protected:
	string nombre;
	int edad;
	string estado_civil;
	char genero;
};

#endif