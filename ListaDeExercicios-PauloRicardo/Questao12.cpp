//Programador: Paulo Ricardo Amorim Silva
//Data: 15-12-2021
//Objetivo: Imprimir tabela de conversoes de polegada para centimetros

#include "Questao12.hpp"

void Questao12::imprimeTabela()
{
	std::cout << "   ------------------------------------ " << std::endl;
	std::cout << "   |    POLEGADAS    |   CENTIMETROS  | " << std::endl;
	std::cout << "   ------------------------------------ " << std::endl;


	for (int i = 1; i <= 20; i++)
	{
		if      (i < 4)  { std::cout << "   |       " << i << "''       |     " << i * centimetros << " cm    |" << std::endl; }
		else if (i < 10) { std::cout << "   |       " << i << "''       |    "  << i * centimetros << " cm    |" << std::endl; }
		else             { std::cout << "   |       " << i << "''      |    "   << i * centimetros << " cm    |" << std::endl; }
	}	
	std::cout << "   ------------------------------------" << std::endl;
}