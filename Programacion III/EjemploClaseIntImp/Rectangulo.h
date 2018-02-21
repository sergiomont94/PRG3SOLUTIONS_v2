
class Rectangulo
{
public:
	Rectangulo();
	Rectangulo(int, int);
	void setBase(int);
	int getBase();
	void setAltura(int);
	int getAltura();
	int getArea();
	int getPerimetro();

	void imprimirRectangulo();

private:
	int base, altura;
};