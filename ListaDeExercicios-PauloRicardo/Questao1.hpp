//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Calcular uma media aritmética

#pragma once
#include "MenuPrincipal.hpp"
class Questao1:public MenuPrincipal
{
private:
	float numero[3];
	float mediaAritimetica = 0.F;

public:
	void receberNumero();        //Usuario informa os valores para obter a media
	float calculaMedia();        //Retorna o calculo da media
};

