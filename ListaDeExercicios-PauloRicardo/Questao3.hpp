//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Calcular o desconto de um produto

#pragma once
#include "MenuPrincipal.hpp"
class Questao3 : public MenuPrincipal
{
private:
	float precoProduto     = 0;
	float taxaDesconto     = 0;
	float precoComDesconto = 0;

public:
	void receberInformacoes();    //Metodo para receber as entradas do usuario de valor e desconto
	float calcularDesconto();     //Metodo para calcular o desconto
};

