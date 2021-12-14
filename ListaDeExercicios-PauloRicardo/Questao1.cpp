#include "Questao1.hpp"
#include "iostream"


void Questao1::receberNumero()
{
	for (int i = 0; i < 3;i++)
	{
		numero[i] = validaNumero();
		std::cout << "Numero recebido: " << numero[i] << std::endl;
	}
}

float Questao1::calculaMedia()
{
	for (int i = 0; i < 3; i++)
	{
		mediaAritimetica += numero[i];
	}

	return mediaAritimetica/3;
}