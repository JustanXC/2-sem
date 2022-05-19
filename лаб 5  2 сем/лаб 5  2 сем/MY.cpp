#include <iostream>
#include <ctime>
#include <iomanip>
#include "MY.h"

using namespace std;

void matrix(int a[][M], int m, int n) {
	int i, j;

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			a[i][j] = rand() % 100 - 50;
		}
	}
}                                           // Заполнение матрицы

void action(int a[][M], int m, int n) {
	int i, j;

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (a[i][j] < 0) {
				a[i][j] = 0;
			}
		}
	}
}                                           // Замена переменных

void print(int a[][M], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << setw(4) << a[i][j];
		}
		cout << endl;
	}
}                                           // Вывод матрицы

int action2(int a[][M], int m, int n) {
	int i, j, count = 0;

	for (i = 1; i < m; i = i + 2) {
		for (j = 0; j < n; j++) {
			if (a[i][j] > 0)
			{
				count++;
			}
		}
	}
	return count;
}

float fact(int N) {
	if (N == 0)
	{
		return 1;
	}
	else {
		return (fact(N - 1) * N);
	}
}

float func(int N) {
	double e = 0.5 * 10E-4;
	static int s = 0;
	float kal = 0;
	kal = (pow((-1), N) * (pow((pi / 6), 2 * N) / fact(2 * N)));
	if (e > abs(kal)) {
		cout << "\tN = " << s;
		return 0;
	}
	else {
		s++;
		return kal + func(N + 1);
	}
}