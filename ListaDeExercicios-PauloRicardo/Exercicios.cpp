#include "Questao1.hpp"
#include "Questao2.hpp"
#include "Questao3.hpp"
#include "Questao4.hpp"
#include "Questao5.hpp"
#include "Questao6.hpp"
#include "Questao7.hpp"
#include "Questao8.hpp"
#include "Questao9.hpp"
#include "Questao10.hpp"
#include "Questao11.hpp"
#include "Questao12.hpp"
#include "Questao13.hpp"

using namespace std;

void questao1()
{
	Questao1 teste;

	cout << "Digite 3 numeros para obter sua media: " << endl;
	teste.receberNumero();
	cout << "Minha media eh: " << teste.calculaMedia() << endl;
}
	//-----------------------------------------------------------------------------------------------------------------------
	
void questao2()
{
	Questao2 questao2;

	questao2.receberCatetos();
	cout << "Minha hipotenusa eh: " << questao2.calcularHipotenusa() << endl;
}
	//-----------------------------------------------------------------------------------------------------------------------
void questao3()
{
	Questao3 questao3;

	questao3.receberInformacoes();
	cout << "Preco atualizado para: R$" << questao3.calcularDesconto() << endl;
}

void questao4()
{
	//-----------------------------------------------------------------------------------------------------------------------
	Questao4 salarioDoProfessor;

	cout << "Quantas horas/aulas voce realizou este mes? ";
	salarioDoProfessor.aulasDadas();

	cout << "Quanto custa sua hora/aula em R$ ? ";
	salarioDoProfessor.recebeValorDaAula();

	cout << "Seu salario BRUTO eh de: R$" << salarioDoProfessor.calculaSalarioBruto() << endl << endl;
	cout << "A taxa do INSS foi de " << salarioDoProfessor.aliquotaINSS() * 100.F << "% ." << endl << endl;
	cout << "Seu salario LIQUIDO eh de: R$" << salarioDoProfessor.calculaSalarioliquido() << endl;
}
	//-----------------------------------------------------------------------------------------------------------------------
	
void questao5()
{
	Questao5 converteParaF;
	cout << "Valor em graus centigrados (C): ";
	converteParaF.recebeGCentigrados();
	cout << "Conversao para Fahrenheit realizada: " << converteParaF.centParaFahrenheit() << " F" << endl << endl;
}
	//-----------------------------------------------------------------------------------------------------------------------
void questao6()
{
	Questao6 combustivelGasto;

	cout << "Qual foi a velocidade média durante a viagem? ";
	combustivelGasto.recebeVelocidade();
	cout << endl;

	cout << "Quanto tempo durou a viagem, em minutos? ";
	combustivelGasto.recebeTempoGasto();
	cout << endl;

	cout << "Foi percorrido a distancia de " << combustivelGasto.calculaDistancia() << " Km,";
	cout << " durante " << combustivelGasto.getTempoGasto() << " hora(s)";
	cout << ", a uma media de " << combustivelGasto.getVelocidade() << " Km/H." << endl;
	cout << "O combustivel gasto foi de: " << combustivelGasto.calculaCombustGasto() << "L" << endl;
}
	//-----------------------------------------------------------------------------------------------------------------------
void questao7()
{
	Questao7 somaCond;

	cout << "Digite 2 numeros para obter sua soma condicional!" << endl;
	somaCond.recebeNumero();
	cout << endl;

	cout << "O resultado da soma condicional eh: " << somaCond.condicionalSoma() << endl;
}
	//-----------------------------------------------------------------------------------------------------------------------
void questao8()
{
	Questao8 multiploDeTres;

	cout << "Digite um numero para verificarmos se eh um multiplo de 3: ";
	multiploDeTres.receberNumero();
	multiploDeTres.multiploDTres();

	cout << endl;
}
	//-----------------------------------------------------------------------------------------------------------------------
void questao9()
{
	Questao9 multiplos;

	cout << "Digite um numero para verificarmos se ha um multiplo: ";
	multiplos.recebeNumero();
	multiplos.verificaDivisor();
}
	//-----------------------------------------------------------------------------------------------------------------------
void questao10()
{
	Questao10 calcSalario;

	cout << "Quanto vc recebou esse mes? R$ ";
	calcSalario.recebeSalarioBruto();

	cout << "Seu Salario Liquido eh de: R$" << calcSalario.calculaSalarioliquido() << endl << endl;
}
	//-----------------------------------------------------------------------------------------------------------------------
void questao11()
{
	Questao11 imprime100a1;

	imprime100a1.imprime100a1();
}
	//-----------------------------------------------------------------------------------------------------------------------
void questao12()
{
	Questao12 convertPolegada;

	convertPolegada.imprimeTabela();
}
	//-----------------------------------------------------------------------------------------------------------------------
void questao13()
{
	RETRI areapolig;
	int resposta;

	cout << "Deseja saber a area de qual poligono?" << endl << "[1] Triangulo   [2] Retangulo" << endl << endl;
	cin >> resposta;
	cin.clear();
	cin.ignore();


	if (resposta == 1) {
		areapolig.receberBase(); areapolig.receberAltura();
		cout << "A area do poligono eh: " << areapolig.areaTriangulo() << " m2";
	}

	else if (resposta == 2) {
		areapolig.receberBase(); areapolig.receberAltura();
		cout << "A area do poligono eh: " << areapolig.areaRetangulo() << " m2";
	}

	else { cout << " Digito invalido!!! " << endl; questao13(); return;; }

	cout << endl;
}