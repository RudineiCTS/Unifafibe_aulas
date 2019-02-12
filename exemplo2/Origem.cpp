#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
	cout << "contagem regressiva..." << endl;
//exibir os numero de 10 a 1
// ao termino. mostrar a mensagem "fim"
//utilize
	for (int i = 10; i >= 1; i--)
	{
		cout << i << endl;
		Sleep(1000);
	}
cout << "FIM";
system("pause>null");
}