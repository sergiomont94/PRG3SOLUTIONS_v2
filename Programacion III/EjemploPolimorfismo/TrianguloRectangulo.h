#ifndef TRIANGULORECTANGULO_H

#define TRIANGULORECTANGULO_H

#include "Figura2D.h"

class TrianguloRectangulo: public Figura2D
{
public:
	TrianguloRectangulo();
	TrianguloRectangulo(float, float);

	void setBase(float);
	void setAltura(float);
	float getBase();
	float getAltura();

	float getArea();
	float getPerimetro();

	float getHipotenusa();

	void imprimir();

	int getTipo();

private:
	float base, altura;
};

#endif // !TRIANGULORECTANGULO_H
