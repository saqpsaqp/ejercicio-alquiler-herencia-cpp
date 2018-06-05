#include "Transporte.h"

Transporte::Transporte()
{
}

Transporte::Transporte(char *_matricula):Vehiculo(_matricula)
{
	
}

float Transporte::calcularPrecio(int dias){
	return (float)dias * (PRECIO_BASEXDIA+PRECIO_ADICXDIA);
}
