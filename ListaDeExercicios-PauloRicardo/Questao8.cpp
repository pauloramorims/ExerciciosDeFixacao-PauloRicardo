//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Verificar se a entrada do usuario e multiplo de tres ou nao


#include "Questao8.hpp"

void  Questao8::receberNumero()
{
	numero = (int)validaNumero();
}

void  Questao8::multiploDTres()
{
	if  (numero % 3 == 0) { std::cout << numero << " eh multiplo de 3" << std::endl;     }
	else                  { std::cout << numero << " NAO eh multiplo de 3" << std::endl; }
}