//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Calcular o salário liquido do usuarioe;

#pragma once
#include "MenuPrincipal.hpp"

class Questao10 : public MenuPrincipal
{
private:
	float salarioBruto   = 0.F;
	float salarioLiquido = 0.F;

public:
	void  recebeSalarioBruto();     //Recebe o salario bruto do usuario
	float calculaSalarioliquido();  //retorna o calculo do salario liquido

private:	
	float aliquotaINSS();           //Verifica em qual classificacao da aliquota do INSS o usuario caira.

};

