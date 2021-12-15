//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Calcular a hipotenusa de um triangulo retangulo

#pragma once
#include "MenuPrincipal.hpp"
class Questao2 :public MenuPrincipal
{
private:
	float catetos[2];
	float hipotenusa = 0.F;

public:
	void receberCatetos();         //Metodo para receber os catetos do triangulo retangulo
	float calcularHipotenusa();    //Metodo que retorna o calculo da hipotenusa
};

