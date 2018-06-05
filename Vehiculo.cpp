#include "Vehiculo.h"
#include <string.h>

Vehiculo::Vehiculo()
{
	strcpy(this->matricula, "");
}

Vehiculo::Vehiculo(char *_matricula)
{
	strcpy(this->matricula, _matricula);
}

void Vehiculo::setMatricula(char *_matricula)
{
	strcpy(this->matricula, _matricula);
}

char* Vehiculo::getMatricula()
{
	return this->matricula;
}

float Vehiculo::calcularPrecio(int dias){
	return dias * PRECIO_BASEXDIA;
}
