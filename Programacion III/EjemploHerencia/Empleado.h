
#ifndef EMPLEADO_H

#define EMPLEADO_H

#include "Persona.h"

class Empleado : public Persona
{
public:
	Empleado();
	Empleado(string, int, char, string, double, string, string);
	~Empleado();

	void setSalario(double);
	void setPuesto(string);
	void setEmpresa(string);

	double getSalario();
	string getPuesto();
	string getEmpresa();

	void imprimirEmpleado();


protected:
	double salario;
	string puesto;
	string empresa;
};

#endif