//Programador: Paulo Ricardo Amorim Silva
//Data: 15-12-2021
//Objetivo: Calcular area de um retangulo ou triangulo

#include "Questao13.hpp"

float RETRI::areaRetangulo()	 
{
	return area = base * altura;
}
float RETRI::areaTriangulo()	 
{
	return area = (base * altura) / 2.F;
}
void  RETRI::receberAltura()
{
	std::cout << "Digite a altura do poligono: ";

	altura = validaNNegativo();
}

void  RETRI::receberBase()
{
	std::cout << "Digite a base do poligono: ";
	base = validaNNegativo();
}