#include "EmpleadoPrivado.h"

EmpleadoPrivado::EmpleadoPrivado():
	Empleado("Fulano", 20, 'M', "Soltero", 10000, "Programador", "Monge")
{
	cout << "Se construyo EmpleadoPrivado...\n";
}

EmpleadoPrivado::EmpleadoPrivado(string nombre, int edad, char genero, 
								 string estado_civil, double salario, 
								 string puesto, string empresa):
				 Empleado(nombre, edad, genero, estado_civil, salario, puesto,
					 empresa)
{
	cout << " Se construyo EmpleadoPrivado...\n";
}

EmpleadoPrivado::~EmpleadoPrivado()
{
	cout << "Se destruyo EmpleadoPrivado...\n";
}
