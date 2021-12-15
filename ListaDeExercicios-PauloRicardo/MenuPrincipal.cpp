#include "MenuPrincipal.hpp"
#include <iostream>

float MenuPrincipal::validaNumero()
{
	while (!(std::cin >> numeroValidado ))
	{
		std::cout << "Digito invalido!" << std::endl << "Digite novamente: ";
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}

	return numeroValidado;
}

float MenuPrincipal::validaNNegativo()
{
	numeroValidado = validaNumero();

	std::cout << std::endl;

	if (numeroValidado <= 0)
	{
		std::cout << "Digito negativo invalido!!!" << std::endl << "Digite novamente: ";
		validaNNegativo();
	}

	return numeroValidado;
}