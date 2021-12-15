//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Retornar uma soma dentro da condicao de se a soma resultando de dois numeros
//          for > 20, somar + 8 ao resultado / se for menor ou igual a 20 subtrair 5.

#include "Questao7.hpp"

void  Questao7::recebeNumero()
{
	for (int i = 0; i < 2; i++)
	{
		std::cout << "Numero(" << i + 1 << "): ";
		numero[i] = validaNumero();

		std::cout << std::endl;

		soma += numero[i];
	}
}

float Questao7::condicionalSoma()
{
	if      (soma  > 20.F) { return soma + 8.F; }
	else if (soma <= 20.F) { return soma - 5.F; }
}
