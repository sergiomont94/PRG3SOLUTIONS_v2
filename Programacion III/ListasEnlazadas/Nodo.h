#ifndef NODO_H

#define NODO_H


class Nodo
{
public:
	Nodo();

	void setSig(Nodo *);
	void setAnt(Nodo *);
	Nodo *getSig();
	Nodo *getAnt();

	void setValor(int);
	int getValor();

private:
	Nodo *sig, *ant;
	int valor;
};


#endif // !NODO_H
