//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Realizar a conversao de Graus Centigrados para Fahrenheit

#include "Questao5.hpp"


void Questao5::recebeGCentigrados()
{
	grausCentigrados = validaNumero();
}

float Questao5::centParaFahrenheit()
{
	return grausFahrenheit = ((9 * grausCentigrados) + 160) / 5;
}