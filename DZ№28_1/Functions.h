#pragma once
#include <iostream>

//Заполняет массив случайными числами от min до max
void fillArr(int arr[], int length, int min, int max);

//Выводит массив в консоль
template <typename T> void showArr(T arr[], int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}