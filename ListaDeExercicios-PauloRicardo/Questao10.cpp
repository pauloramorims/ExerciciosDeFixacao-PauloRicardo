//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Calcular o salário liquido do usuarioe;

#include "Questao10.hpp"

void  Questao10::recebeSalarioBruto()
{
	salarioBruto = validaNNegativo();
}

float Questao10::aliquotaINSS()
{
	if      (salarioBruto <= 600.0F)                            { return 0.0F ; }
	else if (salarioBruto > 600.00F && salarioBruto <= 1200.0F) { return 0.2F ; }
	else if (salarioBruto > 1200.0F && salarioBruto <= 2000.0F) { return 0.25F; }
	else                                                        { return 0.30F; }
}

float Questao10::calculaSalarioliquido()
{
	return salarioLiquido = salarioBruto - (salarioBruto * aliquotaINSS());
}
