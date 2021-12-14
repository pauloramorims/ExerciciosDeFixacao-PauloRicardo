#pragma once
#include "MenuPrincipal.hpp"
class Questao2 :public MenuPrincipal
{
private:
	float catetos[2];
	float hipotenusa = 0;

public:
	void receberCatetos();
	float calcularHipotenusa();
};

