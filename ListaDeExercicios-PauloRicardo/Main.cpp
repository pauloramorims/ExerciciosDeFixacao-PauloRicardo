#include <iostream>
#include "Exercicios.hpp"


int main()
{
	std::cout.precision(2);
	std::cout << std::fixed;
	
    setlocale(LC_ALL, "portuguese");
    int opcao;
    bool sair = false;

    while (!sair)//repete o menu ate o usuario decidir sair
    {
        cabecalho();
        std::cin >> opcao;

        std::cout << "Numero: " << opcao;

        std::cin.clear();
        std::cin.ignore();


        system("clear || cls");

        switch (opcao)//tolower esta sendo utilizado para transformar todos os char's em minusculo
        {
        case 1://executa o exercicio 1
            questao1();
            std::cout << std::endl;
            break;

        case 2://executa o exercicio 2
            questao2();
            std::cout << std::endl;
            break;

        case 3://executa o exercicio 3
            questao3();
            std::cout << std::endl;
            break;

        case 4://executa o exercicio 4
            questao4();
            std::cout << std::endl;
            break;

        case 5://executa o exercicio 5
            questao5();
            std::cout << std::endl;
            break;

        case 6://executa o exercicio 6
            questao6();
            std::cout << std::endl;
            break;

        case 7://executa o exercicio 7
            questao7();
            std::cout << std::endl;
            break;

        case 8://executa o exercicio 8
            questao8();
            std::cout << std::endl;
            break;

        case 9://executa o exercicio 9
            questao9();
            std::cout << std::endl;
            break;

        case 10://executa o exercicio 10
            questao10();
            std::cout << std::endl;
            break;

        case 11://executa o exercicio 11
            questao11();
            std::cout << std::endl;
            break;

        case 12://executa o exercicio 12
            questao12();
            std::cout << std::endl;
            break;

        case 13://executa o exercicio 13
            questao13();
            std::cout << std::endl;
            break;

        case 14://sai do programa
            sair = true;
            break;
        default://qualquer valor que o usuario digitar que nao atenda aos requisitos retorna invalido  
            std::cout << "Valor invalido!!" << std::endl;
            std::cout << std::endl;
            break;
        }
    }

    system("pause");
	




	
}
