#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Задача 1.
	cout << "Задача 1.\nВведите длину массива A: ";
	cin >> n;
	cout << "Введите длину массива B: ";
	cin >> m;

	int* dArrA = new int[n];
	int* dArrB = new int[m];

	fillArr(dArrA, n, 10, 20);
	fillArr(dArrB, m, 30, 40);
	cout << "Массив A:\n";
	showArr(dArrA, n);
	cout << "Массив B:\n";
	showArr(dArrB, m);

	int* dArrC = new int[n+m];

	for (int i = 0; i < n; i++)
		dArrC[i] = dArrA[i];
	for (int i = n; i < n + m; i++)
		dArrC[i] = dArrB[i-n];

	delete[] dArrA;
	delete[] dArrB;

	cout << "Массив С:\n";
	showArr(dArrC, n + m);
	
	return 0;
}