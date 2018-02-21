
#ifndef RECTANGULO_H

#define RECTANGULO_H

#include "Figura2D.h"

class Rectangulo: public Figura2D
{
public:
	Rectangulo();
	Rectangulo(float, float);

	void setBase(float);
	void setAltura(float);

	float getBase();
	float getAltura();

	float getPerimetro();
	float getArea();

	void imprimir();

	int getTipo();

private:
	float base, altura;
};

#endif