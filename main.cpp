#include <iostream>
#include "Vehiculo.h"
#include "Transporte.h"
#include "Coche.h"
#include "Microbus.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Transporte v1;
	
	Transporte v2("AC219HS");
	
	cout << v2.getMatricula()<<endl;
	
	Transporte *v3 = new Transporte();
	
	Transporte *v4 = new Transporte("ACD218HD");
	
	cout << v4->PRECIO_BASEXDIA <<endl;
	
	cout << v4->getMatricula() << endl;
	
	cout << v3->calcularPrecio(1) <<endl;
	
	Coche c1("FS123HH");
	
	cout << c1.calcularPrecio(20) <<endl;
	
	//------------------
	Microbus m("AB123CD");
	
	cout << m.calcularPrecio(0) <<endl;
	
	return 0;
}
