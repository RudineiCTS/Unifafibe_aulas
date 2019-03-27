#include <iostream>
#include <locale>
using namespace std;

void main() 
{
	setlocale(LC_ALL, "Portuguese");
	/* RESUMO : 
	- O Endere�o (&) : Acessa o endere�o de uma vari�vel
	- O Ponteiro (*): Acessa o conteudo e declara ponteiro */

	cout << "Operadores un�rios " << endl;
	// & e *

	int valor = 10;
	cout << "Valor " << valor << endl;
	cout << "&valor " << &valor << endl; // escreve o endere�o da vari�vel "valor"/ endere�o 0086F8D4

	//Operador Ponteiro
	cout << endl << "Operador Ponteiro " << endl;
	int*p_valor = 0;//defini��o de ponteiro
	//o ponteiro  deve ser obrigatoriamento inicializada 

	p_valor = &valor;
	//armazena o endere�o da posi��o referenciada

	cout << "p_valor : "<< p_valor << endl;      //exibe o endere�o da vari�vel = 003AF924
	cout << "*p_valor : "<< *p_valor << endl;   // exibe o conte�do da vari�vel = 10
	cout << "&p_valor : " << &p_valor << endl;  //exibe o endere�o do ponteiro = 003AF918 (obs:sempre muda o endere�o)

	//Opera��es aritm�ticas
	cout << "Opera��es aritm�ticas " << endl;
	valor++;//valor = valor + 1
	cout << "valor : " << valor << endl; // 11
	cout << "*p_valor : " << *p_valor << endl; // 11 //conte�do do ponteiro que tem o endere�o da vari�vel

	//Opera��es diretas no ponteiro 
	cout << endl << "Opera��es diretas no ponteiro " << endl;
	(*p_valor)++; //modifica o conteudo do ponteiro (atribui +1)

	cout << "valor : " << valor << endl; // altera o conteudo da vari�vel
	cout << "*p_valor : " << *p_valor << endl;

	//Indremento no ponteiro

	cout << "Incremento direto no ponteiro " << endl;
	p_valor++; //percorre mem�ria

	cout << " valor : " << valor << endl;

	cout << " * p_valor : " << *p_valor << " no endere�o (p_valor)"<< endl;

	//decremento para observar posi��es 
	cout << "Decremento direto no ponteiro " << endl;
	p_valor--; // retorna para o endere�o anterior (no caso do inteiro, ele vai retorna 4bytes)
	cout << "*p_valor :" << *p_valor << " no endere�o (p_valor)" << p_valor << endl; 



	//Alocando mem�ria

	cout << "Alocando m�moria " << endl;
	cout << "tamanho inteiro :" << sizeof(int) << endl;
	cout << "tamanho char :" << sizeof (char) << endl;
	cout << "tamanho float :" << sizeof(float) << endl;
	cout << "tamanho double :" << sizeof(double) <<endl;
	
	//stack: pilha de mem�ria do sistema -- somente acessamos
	//heap: �rea da mem�ria em que o programador � respons�vel --  onde manipulamos 


	system("pause>null");
}