#include <iostream>
#include <ctime>
#include "Functions.h"

//«аполн€ет массив случайными числами от min до max
void fillArr(int arr[], int length, int min, int max) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (max - min) + max;
}