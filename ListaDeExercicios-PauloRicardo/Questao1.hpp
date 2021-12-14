#pragma once
#include "MenuPrincipal.hpp"
class Questao1:public MenuPrincipal
{
private:
	float numero[3];
	float mediaAritimetica=0;

public:
	void receberNumero();
	float calculaMedia();
};

