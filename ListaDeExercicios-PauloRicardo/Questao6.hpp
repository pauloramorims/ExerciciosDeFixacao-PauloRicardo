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
	void  recebeVelocidade()   ;
	void  recebeTempoGasto()   ;
	float getVelocidade() const;
	float getTempoGasto() const;
	float calculaDistancia()   ;
	float calculaCombustGasto();
};

/*
Efetuar o cálculo da quantidade de litros de combustível gastos em
uma viagem, sabendo-se que o carro faz 12 km com um litro. Deverão 
ser fornecidos o tempo gasto na viagem e a velocidade média. 
O programa em C++ deverá apresentar os valores da:
- velocidade média; 
- tempo gasto na viagem; 
- distância percorrida;
- quantidade de litros utilizados na viagem.
*/