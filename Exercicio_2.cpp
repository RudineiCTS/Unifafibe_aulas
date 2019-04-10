#include <iostream>

using namespace std;

void main() {

	unsigned int numero;
	float soma = 0;
	cout << " digite um numero : " << endl;
	cin >> numero;
	for (int i = 1; i <= numero; i++) {

		soma += 1 / float(i);

	}
	cout << soma << endl;


	system("pause>null");
}



