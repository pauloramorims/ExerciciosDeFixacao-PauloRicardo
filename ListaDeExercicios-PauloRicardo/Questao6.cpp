//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Calcular a distancia e o combustivel gasto, imprimir todos os valores envolvidos na operacao

#include "Questao6.hpp"

void  Questao6::recebeVelocidade()
{
	velocMedia = validaNNegativo();
}

void  Questao6::recebeTempoGasto()
{
	tempoGasto = validaNNegativo();
}

float Questao6::calculaDistancia()
{
	return distancia = velocMedia * (tempoGasto/60);       //realiza o calculo em horas, por isso divide por 60;
}

float Questao6::calculaCombustGasto()
{
	return combustGasto = calculaDistancia() / capacidade;
}

float  Questao6::getVelocidade() const
{
	return velocMedia;
}

float Questao6::getTempoGasto() const
{
	return tempoGasto/60;                                 //retorna o tempo em horas
}