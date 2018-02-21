
#ifndef EMPLEADOPRIVADO_H

#define EMPLEADOPRIVADO_H

#include "Empleado.h"

class EmpleadoPrivado : public Empleado
{
public:
	EmpleadoPrivado();
	EmpleadoPrivado(string, int, char, string, double, string, string);
	~EmpleadoPrivado();
};

#endif