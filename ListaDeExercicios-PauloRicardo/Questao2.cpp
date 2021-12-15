//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Calcular a hipotenusa de um triangulo retangulo

#include "Questao2.hpp"
#include <iostream>
#include <cmath>

void Questao2::receberCatetos()
{
	for (int i = 0; i < 2; i++)
	{
		catetos[i] = validaNNegativo();
		std::cout << "Cateto (" << i+1 << "): " << catetos[i] << std::endl;

		hipotenusa += catetos[i] * catetos[i];
	}
}
float Questao2::calcularHipotenusa()
{
	return sqrt(hipotenusa);
}