#pragma once
#include <iostream>
class MenuPrincipal
{
private:	
	float numeroValidado = 0.F;
protected:
	float validaNumero();               //metodo para verificar se a entrada do usuário é um numero ou não;
	float validaNNegativo();			//metodo que verifica se a entrada do usuário é um numero e positivo;
};

