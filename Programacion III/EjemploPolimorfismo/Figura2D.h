#ifndef FIGURA2D_H

#define FIGURA2D_H

class Figura2D
{
public:
	virtual float getArea()=0;
	virtual float getPerimetro()=0;
	virtual int getTipo()=0;
	virtual void imprimir()=0;
};

#endif // !FIGURA2D_H
