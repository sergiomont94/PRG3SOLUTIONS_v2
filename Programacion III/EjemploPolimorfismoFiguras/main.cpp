
#include <iostream>
#include "Figura2D.h"
#include "Rectangulo.h"
#include "TrianguloRectangulo.h"

#include <conio.h>


void imprimirFigura(Figura2D *figura)
{
	if(figura->getTipo() == 2)
	{
		TrianguloRectangulo *tr = (TrianguloRectangulo *)figura;
		std::cout << "Hipotenusa: " << tr->getHipotenusa() << " ";
	}

	figura->imprimir();
}


int main()
{
	
	Figura2D *figuras[4];

	figuras[0] = new Rectangulo(4, 6);
	figuras[1] = new Rectangulo(5, 8);
	figuras[2] = new TrianguloRectangulo(4, 6);
	figuras[3] = new TrianguloRectangulo(5, 8);


	for(int i = 0; i < 4; i++)
	{
		//figuras[i]->imprimir();
		imprimirFigura(figuras[i]);
	}

	getch();
}