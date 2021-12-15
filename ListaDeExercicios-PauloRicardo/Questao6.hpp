//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Calcular a distancia e o combustivel gasto, imprimir todos os valores envolvidos na operacao

#pragma once
#include "MenuPrincipal.hpp"

class Questao6 : public MenuPrincipal
{
private:
	float combustGasto =  0.F;
	float capacidade   = 12.F;   //Questao da
	float tempoGasto   =  0.F;   //usuario informa
	float velocMedia   =  0.F;   //usuario informa
	float distancia    =  0.F;

public:
	void  recebeVelocidade()   ; //Usuario entra com o valor da velocidade media
	void  recebeTempoGasto()   ; //Usuario entra com o valor do tempo gasto
	float getVelocidade() const; //Retorna a velocidade
	float getTempoGasto() const; //Retorna o tempo
	float calculaDistancia()   ; //Retorna o calculo da distancia percorrida
	float calculaCombustGasto(); //Retorna o calculo do combustivel gasto
};
