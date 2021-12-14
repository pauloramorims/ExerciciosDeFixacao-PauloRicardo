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
Efetuar o c�lculo da quantidade de litros de combust�vel gastos em
uma viagem, sabendo-se que o carro faz 12 km com um litro. Dever�o 
ser fornecidos o tempo gasto na viagem e a velocidade m�dia. 
O programa em C++ dever� apresentar os valores da:
- velocidade m�dia; 
- tempo gasto na viagem; 
- dist�ncia percorrida;
- quantidade de litros utilizados na viagem.
*/