#ifndef RECTANGULO_H

#define RECTANGULO_H

#include "Figura2D.h"

class Rectangulo: public Figura2D
{
public:
	Rectangulo();
	Rectangulo(float, float);

	void setBase(float base);
	void setAltura(float altura);
	float getBase();
	float getAltura();

	float getArea();
	float getPerimetro();

	void imprimir();

	int getTipo();

private:
	float base, altura;
};

#endif // !RECTANGULO_H
