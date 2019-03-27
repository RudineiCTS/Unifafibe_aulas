#include <iostream>
#include <locale>
using namespace std;

void main() 
{
	setlocale(LC_ALL, "Portuguese");
	/* RESUMO : 
	- O Endereço (&) : Acessa o endereço de uma variável
	- O Ponteiro (*): Acessa o conteudo e declara ponteiro */

	cout << "Operadores unários " << endl;
	// & e *

	int valor = 10;
	cout << "Valor " << valor << endl;
	cout << "&valor " << &valor << endl; // escreve o endereço da variável "valor"/ endereço 0086F8D4

	//Operador Ponteiro
	cout << endl << "Operador Ponteiro " << endl;
	int*p_valor = 0;//definição de ponteiro
	//o ponteiro  deve ser obrigatoriamento inicializada 

	p_valor = &valor;
	//armazena o endereço da posição referenciada

	cout << "p_valor : "<< p_valor << endl;      //exibe o endereço da variável = 003AF924
	cout << "*p_valor : "<< *p_valor << endl;   // exibe o conteúdo da variável = 10
	cout << "&p_valor : " << &p_valor << endl;  //exibe o endereço do ponteiro = 003AF918 (obs:sempre muda o endereço)

	//Operações aritméticas
	cout << "Operações aritméticas " << endl;
	valor++;//valor = valor + 1
	cout << "valor : " << valor << endl; // 11
	cout << "*p_valor : " << *p_valor << endl; // 11 //conteúdo do ponteiro que tem o endereço da variável

	//Operações diretas no ponteiro 
	cout << endl << "Operações diretas no ponteiro " << endl;
	(*p_valor)++; //modifica o conteudo do ponteiro (atribui +1)

	cout << "valor : " << valor << endl; // altera o conteudo da variável
	cout << "*p_valor : " << *p_valor << endl;

	//Indremento no ponteiro

	cout << "Incremento direto no ponteiro " << endl;
	p_valor++; //percorre memória

	cout << " valor : " << valor << endl;

	cout << " * p_valor : " << *p_valor << " no endereço (p_valor)"<< endl;

	//decremento para observar posições 
	cout << "Decremento direto no ponteiro " << endl;
	p_valor--; // retorna para o endereço anterior (no caso do inteiro, ele vai retorna 4bytes)
	cout << "*p_valor :" << *p_valor << " no endereço (p_valor)" << p_valor << endl; 



	//Alocando memória

	cout << "Alocando mémoria " << endl;
	cout << "tamanho inteiro :" << sizeof(int) << endl;
	cout << "tamanho char :" << sizeof (char) << endl;
	cout << "tamanho float :" << sizeof(float) << endl;
	cout << "tamanho double :" << sizeof(double) <<endl;
	
	//stack: pilha de memória do sistema -- somente acessamos
	//heap: área da memória em que o programador é responsável --  onde manipulamos 


	system("pause>null");
}