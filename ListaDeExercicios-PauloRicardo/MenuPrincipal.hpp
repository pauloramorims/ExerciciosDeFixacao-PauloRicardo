//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Validar as entradas do usu�rio

#pragma once
#include <iostream>
class MenuPrincipal
{
private:	
	float numeroValidado = 0.F;
protected:
	float validaNumero();               //metodo para verificar se a entrada do usu�rio � um numero ou n�o;
	float validaNNegativo();			//metodo que verifica se a entrada do usu�rio � um numero e positivo;
};

