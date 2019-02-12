#include <iostream>
#include <locale>
#include <windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");
	int nota = 0;
	cout << "digite sua nota";
	cin >> nota;
	switch (nota) {
	case 7:
	cout << "tente melhorar" << endl;
			break;
		
	case 8:
	case 9:
	cout << "Ok" << endl;
			break;
		
	
		
	case 10:
		cout << "Bom" << endl;
		break;
			
	default:
			cout << "precisa estudar mais...";
	}
	system("pause>null");

}