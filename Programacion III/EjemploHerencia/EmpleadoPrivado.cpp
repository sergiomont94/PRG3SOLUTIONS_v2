#include "EmpleadoPrivado.h"

EmpleadoPrivado::EmpleadoPrivado():
	Empleado("Fulano", 20, 'M', "Casado", 9000, "Vendedor", "XXXXX")
{
	cout << "Se construyo EmpleadoPrivado...\n";
}

EmpleadoPrivado::EmpleadoPrivado(string nombre, int edad, char genero, string estadoCivil, double salario, string puesto, string empresa)
	:Empleado(nombre, edad, genero, estadoCivil, salario, puesto, empresa)
{
	cout << "Se construyo EmpleadoPrivado...\n";
}

EmpleadoPrivado::~EmpleadoPrivado()
{
	cout << "Se destruyo EmpleadoPrivado...\n";
}