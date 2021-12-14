#pragma once
#include "MenuPrincipal.hpp"
class Questao3 : public MenuPrincipal
{
private:
	float precoProduto=0;
	float taxaDesconto=0;
	float precoComDesconto=0;

public:
	void receberInformacoes();
	float calcularDesconto();
};

