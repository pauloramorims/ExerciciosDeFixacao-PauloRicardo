//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Calcular o sal�rio liquido de um professor

#pragma once
#include "MenuPrincipal.hpp"

class Questao4 :public MenuPrincipal
{
private:						
	int   aulas          = 0;
	float valorPorHAula  = 0.F;   //0.F faz com que a vari�vel inicia-se com um valor float
	float salarioBruto   = 0.F;
	float salarioLiquido = 0.F;

public:
	float calculaSalarioBruto();   //Retorna o sal�rio BRUTO do professor
	void  aulasDadas();            //Recebe o valor de aulas e realiza a validacao
	void  recebeValorDaAula();     //Recebe o valor do valor da hora aula e realiza a validacao
	float calculaSalarioliquido(); //Retorna o sal�rio LIQUIDO do professor
	float aliquotaINSS();          //Retorna a taxaINSS

};

