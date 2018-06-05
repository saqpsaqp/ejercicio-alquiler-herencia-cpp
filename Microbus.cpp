#include "Microbus.h"

Microbus::Microbus(char *_matricula):Transporte(_matricula)
{
}

float Microbus::calcularPrecio(int dias){
	if(dias>0)
		return PRECIO_ADIC + Transporte::calcularPrecio(dias);
	else
		return 0;
} 

