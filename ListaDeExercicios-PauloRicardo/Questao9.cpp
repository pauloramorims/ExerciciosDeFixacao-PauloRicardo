//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Verificar se a entrada do usuario e multiplo de dez, cinco, dois ou nenhum destes;

#include "Questao9.hpp"

void Questao9::recebeNumero()
{
	numero = (int)validaNumero();
}

void Questao9::verificaDivisor()
{
	if (numero % 10 == 0)         { div10 = true; std::cout << numero << " eh multiplo de 10" <<  std::endl;}
	if (numero % 5  == 0)         { div5  = true; std::cout << numero << " eh multiplo de 5"  <<  std::endl;}
	if (numero % 2  == 0)         { div2  = true; std::cout << numero << " eh multiplo de 2"  <<  std::endl;}

	if (!div10 && !div2 && !div5) { std::cout << "Nenhum multiplo encontrado!!" << std::endl; }

}