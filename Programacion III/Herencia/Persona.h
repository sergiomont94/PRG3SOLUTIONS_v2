

#ifndef PERSONA_H

#define PERSONA_H



#include <iostream>

using namespace std;

class Persona
{
public:
	Persona();
	~Persona(); //definimos destructor de clase
	
	void setNombre(string);
	void setEstadoCivil(string);
	void setEdad(int);
	void setGenero(char);

	string getNombre();
	string getEstadoCivil();
	int getEdad();
	char getGenero();

	void imprimirPersona();
	void imprimir();

protected:
	string nombre, estado_civil;
	int edad;
	char genero;

};

#endif // !PERSONA_H