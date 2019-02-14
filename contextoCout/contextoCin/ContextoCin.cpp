#include <iostream>

using namespace std;

void main()
{
	char nome[20];
	cout << "informe um nome: " << endl;
	
	//cin >> nome;
	cin.getline(nome, 10); // informa quantos caracteres serão efetivamentos lidos
	cout << "resultado :" << nome;
	system("pause>null");
}