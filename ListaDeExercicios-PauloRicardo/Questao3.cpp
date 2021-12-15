//Programador: Paulo Ricardo Amorim Silva
//Data: 14-12-2021
//Objetivo: Calcular o desconto de um produto

#include "Questao3.hpp"

void Questao3::receberInformacoes()
{
	std::cout << "Qual o valor do produto que deseja dar o desconto? ";
	precoProduto = validaNNegativo();

	std::cout << std::endl;
		
	std::cout << "Quanto quer dar de desconto? ";

	taxaDesconto = validaNNegativo();
}
float Questao3::calcularDesconto()
{
	return precoComDesconto = precoProduto-(precoProduto * (taxaDesconto / 100));
}