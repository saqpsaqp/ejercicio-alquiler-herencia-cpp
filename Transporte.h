#ifndef TRANSPORTE_H
#define TRANSPORTE_H
#include "Vehiculo.h"

class Transporte : public Vehiculo
{
	public:
		const float PRECIO_ADICXDIA = 1.5;
		Transporte();
		Transporte(char *);
		virtual float calcularPrecio(int);
	protected:
};

#endif
