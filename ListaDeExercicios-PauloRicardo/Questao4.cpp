//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Calcular o salário liquido de um professor

#include "Questao4.hpp"

void  Questao4::aulasDadas()
{
	aulas = validaNNegativo();
}

void  Questao4::recebeValorDaAula()
{
	valorPorHAula = validaNNegativo();
}

float Questao4::calculaSalarioBruto()
{
	return salarioBruto = aulas*valorPorHAula;
}

float Questao4::aliquotaINSS()
{
	if      (salarioBruto <= 1100.0F)                             { return 0.06F;}
	else if (salarioBruto > 1100.00F && salarioBruto <= 2203.48F) { return 0.09F;}
	else if (salarioBruto > 2203.49F && salarioBruto <= 3305.42F) { return 0.12F;}
	else if (salarioBruto > 3305.42F)                             { return 0.14F;}
}

float Questao4::calculaSalarioliquido()
{
	return salarioLiquido = salarioBruto - (salarioBruto * aliquotaINSS());
}

