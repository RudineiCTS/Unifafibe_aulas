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
	
	/*formata��o com base numerica
	cout << oct;
	cout << dec
	cout << hex;
	cout << "valor em hex " << numero << endl;

	*/

	int numero = 10;
	
	//formata��o com numero reais
	float valor = 3.1214;
	cout << fixed << "real: " << valor << endl;

	//formata��o com numeros cientificos
	cout << scientific << "cienciet�fico: " << valor << endl;//scientific converte para valor cient�fico

	cout << dec;//ativa o decimal novamente

	//espa�amento de texto
	int var = 10;

	cout.width(5);// o texto exibido tera um espa�ameto de 5 characters
	// 10
	// 100
	//  1
	cout.fill('0');// no espa�amento sera preenchido por  0
	//0010
	//0100
	//0001
	cout << var << endl;
	
	//precis�o de numeros reais 
	cout << fixed << endl; // deixa o valor no seu numero real
	float val = 23.5999;
	cout.precision(2);
	cout << " formatando casas decimais :" << val << endl;
	system("pause>null");
}
