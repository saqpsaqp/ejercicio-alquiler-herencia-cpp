#ifndef VEHICULO_H
#define VEHICULO_H

class Vehiculo
{
	char matricula[10];
	public:
		const float PRECIO_BASEXDIA = 50;
		Vehiculo(); //Por defecto
		Vehiculo(char *);
		void setMatricula(char *);
		char* getMatricula();
		virtual float calcularPrecio(int);
	protected:
};

#endif
