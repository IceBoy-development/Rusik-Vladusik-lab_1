//Задание 2
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int n = 10;
int main()
{
	int i;
	setlocale(0, "rus");
	int mas[n];
	srand(time(0));
	printf("Сгенерированный массив:\n");
	for (i = 0; i < n; i++) {
		mas[i] = rand() % 99; // диапазон случайных чисед от 0 до 100
		printf("%d ", mas[i]);
	}
	printf("\n");
	return 0;
}
