//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Verificar se a entrada do usuario e multiplo de tres ou nao

#pragma once
#include "MenuPrincipal.hpp"
class Questao8 : public MenuPrincipal
{
private:
	int   numero = 0     ;

public:
	void  receberNumero();  //Recebe a entrada do usuario;
	void  multiploDTres();  //Verifica e retorna se eh ou n multiplo de 3

};

