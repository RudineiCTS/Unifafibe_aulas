#include <iostream>

using namespace std;

//exemplo fun��o com parametros
/*int multiplicacao(int valor1, int valor2)
{
	return valor1 * valor2;// o "return" pode retornar calculos 
}

void main()
{
	//solicitar dois valores inteiros p/ user
	int numero1, numero2;
	cout << "resultado da multiplica��o : " << endl;
	cout << "digite o primeiro valor:" << endl;
	cin >> numero1;
		cout << "digite o segundo valor :" << endl;
    cin >> numero2;

	cout << multiplicacao(numero1, numero2) << endl;

	system("pause>null");
}
*/

//exemplo fun��o com multiplos retornos
/*int comparar(int primeiro, int segundo)
{
	if (primeiro == segundo)
		return 0;
	else if (primeiro > segundo)
		return 1;
	else
		return 2;

}



void main()
{
	cout << "resultado : " << comparar(1,2)<< endl;


}
*/

//exemplo de fu���o recursiva

//criar fu���o recursiva com o nome "fatorial"
//retornar resultado com o tipo long
//exemplo fatorial : 5!=5.4.3.2.1
//fatorial de 1 ou 0= 1
unsigned long fatorial(int n)
{
	unsigned long resultado;
	if ((n == 1) ||( n == 0))
		return 1;
	
	//fatorial?
	resultado = n * fatorial(n - 1);
}


void main()
{
	unsigned long fat; // "usigned" n�o permite valores negativos 
	

	cout << "informe um valor :" << endl;
	int numero;
	cin >> numero;


	fat = fatorial(numero); // fat armazena o retorno da fun��o fatorial 
	cout << "o fatoria de " << numero << "=" << fat << endl;

	system("pause>null");

}
