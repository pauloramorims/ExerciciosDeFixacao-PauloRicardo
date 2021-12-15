//Programador: Paulo Ricardo Amorim Silva
//Data: 15-12-2021
//Objetivo: Calcular area de um retangulo ou triangulo

#pragma once
#include "MenuPrincipal.hpp"
class RETRI : public MenuPrincipal
{
private:
	float altura = 0.F;
	float base   = 0.F;
	float area   = 0.F;

public:
	float areaRetangulo();
	float areaTriangulo();
	void  receberAltura();
	void  receberBase()  ;

};

