//*PILHA SIMPLES*//
#include <iostream>

using namespace std;


const int MAX = 5;
int base, topo;
int pilha[MAX];

void empilhar(int valor);//push
int desempilhar();
int vazia();
int cheia();


void main() {
	base = 0, topo = 0;

	//CRIAR MENU PARA SOLICITA��O A��ES NA PILHA 
}
// verificar se a pilha est� vazia
//retorna 1 se   a pillha estiver vazia
// retrona 0 se a pilha n�o estiver vazia
int vazia()
{
	return(base == topo);
}

// verificar se apilha esta cheia
// retorna 1 se a pilha estiver cheia
//retona 0 se a pilha n�o estiver cheia 
int cheia() {
	return (topo == MAX);
}

void empilhar(int valor) {
	if (!cheia())
	{
		//inserir um novo valor
	}
}