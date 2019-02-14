#include <iostream>

using namespace std;

void main()
{
	int x[10] = { 2,12,23,5,40,35,14,450,32,65 };
	char s[10] = { 'V','a','i', ' ','T','i','m','ã','o','!' };
	char t[5] = { 'z' };

	//posição do primeiro elemento da matriz| valor apresentado "2"
	cout << x[0] << endl;

	//posição do quinto elemento da matriz | valor apresentado "40"
	cout << x[4] << endl;

	//posição do quinto elemento da matriz | valor apresentado "T"
	cout << s[4] << endl;

	////posição do quinto elemento da matriz | valor apresentado " "
	cout << t[4] << endl; 

	//matriz multidimensional
	int z[5][5] = {
	{12, 17, 3, 741, 6},
	{22, 43, 444, 57, 1},
	{2, 66, 654, 67, 11 },
	{5, 34, 22, 41, 765},
	{9, 1, 90, 30, 666}

	};

	//Exibir o valor 17
	cout << z[0][1] << endl; 


	//Exibir o valor 30
	cout << z[4][3] << endl;

	system("pause>null");
}