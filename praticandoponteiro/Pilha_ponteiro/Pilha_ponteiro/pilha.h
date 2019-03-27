#include <iostream>
using namespace std;

typedef struct
{
	int topo;
	char vetor[100];

}Pilha;

//Criar nova pilha

Pilha* cria()
{
	//p= malloc(sizeof(Pilha))
	Pilha* p = new Pilha();
	p->topo = 0;

	return p;
}

//verificar se a pilha esta cheia 
int cheia(Pilha* p)
{
	return (p->topo == 100);
}

// vereifica se apilha está vazia 
int vazia(Pilha* p)
{
	return(p->topo == 0);
}

//inserir novo valor na PILHA
//retorna mensagem se a pilha estiver cheia

void push(Pilha* p,char valor)
{
	if (!cheia(p))
	{
		p->vetor[p->topo] = valor;
		p->topo++;
	}
	else {
		cout << "Pilha está cheia " << endl;
		exit(1);
	}

}
//tarefa
//criar a função para remover um item da PILHA
//retornar mensagem se pilha estiver vazia
