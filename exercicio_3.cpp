#include <iostream>
#include <locale.h>



using namespace std;

void main() {
	
	setlocale (LC_ALL,"portuguese");

	int l, c;
	int aux = 0; float result = 0;

	float matriz[2][8];

	for (l = 0; l < 2; l++)
	{
		for (c = 0; c < 8; c++) {

			if (l == 0) {
				cout << "digite o peso do cidadão " << endl;
				cin >> matriz[l][c];

				if (matriz[l][c] > 80) 
					aux++;
			

				
			}
			else {
				cout << "digite a idade do cidadão " << endl;
				cin >> matriz[l][c];
				
				result += (matriz[l][c])/8;
				
			}


		}
		



	}
	cout << result << endl;
	cout << aux << endl;
	system("pause>null");

}