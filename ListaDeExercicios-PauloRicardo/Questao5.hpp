//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Realizar a conversao de Graus Centigrados para Fahrenheit

#pragma once
#include "MenuPrincipal.hpp"

class Questao5 : public MenuPrincipal
{
private:

	float grausCentigrados = 0.F;
	float grausFahrenheit  = 0.F;
public:
	void  recebeGCentigrados();  //Recebe o valor e verifica se é um numero
	float centParaFahrenheit();  //Retorna o valor da conversao
};

