//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Retornar uma soma dentro da condicao de se a soma resultando de dois numeros
//          for > 20, somar + 8 ao resultado / se for menor ou igual a 20 subtrair 5.

#pragma once
#include "MenuPrincipal.hpp"
class Questao7 : public MenuPrincipal
{
private:
	float numero[2] ;
	float soma = 0.F;

public:
	void  recebeNumero();       //Recebe numero e grava a soma dele na variavel soma;
	float condicionalSoma();    //Retorna o valor da soma dentro das condicoes impostas;
};

