#include <iostream>
#include<locale>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[20] = "Gertrudes da Silva";
		cout << nome << endl;

	cout << "fulano" << endl;

	int x = 10;
	cout << "resultado: " << x << endl;
	
	/*formatação com base numerica
	cout << oct;
	cout << dec
	cout << hex;
	cout << "valor em hex " << numero << endl;

	*/

	int numero = 10;
	
	//formatação com numero reais
	float valor = 3.1214;
	cout << fixed << "real: " << valor << endl;

	//formatação com numeros cientificos
	cout << scientific << "ciencietífico: " << valor << endl;//scientific converte para valor científico

	cout << dec;//ativa o decimal novamente

	//espaçamento de texto
	int var = 10;

	cout.width(5);// o texto exibido tera um espaçameto de 5 characters
	// 10
	// 100
	//  1
	cout.fill('0');// no espaçamento sera preenchido por  0
	//0010
	//0100
	//0001
	cout << var << endl;
	
	//precisão de numeros reais 
	cout << fixed << endl; // deixa o valor no seu numero real
	float val = 23.5999;
	cout.precision(2);
	cout << " formatando casas decimais :" << val << endl;
	system("pause>null");
}
