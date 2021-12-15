//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Verificar se a entrada do usuario e multiplo de tres ou nao

#pragma once
#include "MenuPrincipal.hpp"
class Questao9 : public MenuPrincipal
{
private:
	int  numero = 0    ;
	bool div10  = false;
	bool div5   = false;
	bool div2   = false;

public:
	void recebeNumero()   ;  //Recebe a entrada do usuario;
	void verificaDivisor();  //Retorna se encontrou ou nao um divisor
};

