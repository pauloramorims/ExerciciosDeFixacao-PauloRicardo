#pragma once
#include "MenuPrincipal.hpp"

class Questao5 : public MenuPrincipal
{
private:

	float grausCentigrados = 0.F;
	float grausFahrenheit  = 0.F;
public:
	float centParaFahrenheit();
	void  recebeGCentigrados();
};

