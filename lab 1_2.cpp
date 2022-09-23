#include <iostream>
#include <windows.h>
#include <stdlib.h>

using namespace std;

const int N = 10;

int main()
{
	setlocale(LC_ALL, "rus");
	int mass[N], max, min, r;

	printf("Элементы массива: ");
	for (int i = 0; i < N; i++)
	{
		mass[i] = rand() % 99;
		printf("%d ", mass[i]);
	}
	printf("\n");

	max = mass[0];
	min = mass[0];
	for (int i = 1; i < N; i++)
	{
		if (max < mass[i]) max = mass[i];
		if (min > mass[i]) min = mass[i];
	}

	printf("Min:%d\n", min);
	printf("Max:%d\n", max);
	r = max - min;
	printf("Разность:%d\n ", r);

	return 0;
}
