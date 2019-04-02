#include <iostream>
#include <stdlib.h>

using namespace std;
#include "pilha.h"

void main()
{
	/*disponibilizar os seguintes recursos:
	1- Criar Pilha
	2- asicionar elemnto na pilha
	3- remover todos os elemntos (exibindo-os)
	4- remover um elemento da pilha
	5- remover Pilha
	6- encerrar
	*/
	int escolha;
	char valor;
	int flag = 1;
	Pilha* r = 0;

	while (flag == 1) {
	cout << "1- Criar Pilha " << endl;
	cout << "2- adicionar elemnto na pilha" << endl;
	cout << "3- remover todos os elemntos (exibindo-os)" << endl;
	cout << "4- remover um elemento da pilha " << endl;
	cout << "5- remover Pilha" << endl;
	cout << "6- encerrar" << endl;
	cin >> escolha;

	
	
		switch (escolha)
		{
		case 1:
			r = cria();
			

		
			break;
		case 2:
			cout << "digite um numero para inserir na pilha" << endl;
			cin >> valor;
			push(r, valor);



			break;
		case 3:
			while (!vazia(r)) {
				cout << pop(r) << endl;
			}


			break;
		case 4:
			cout << pop(r);

			break;
		case 5:
			liberar(r);

			break;
		case 6:
			
			flag = 2;
			

			break;
		}
}
	cout << "programa encerrado" << endl;

}