#ifndef MICROBUS_H
#define MICROBUS_H

#include "Transporte.h"

class Microbus : public Transporte
{
	
	public:
		const float PRECIO_ADIC = 2;
		Microbus(char *);
		float calcularPrecio(int);
	protected:
};

#endif
