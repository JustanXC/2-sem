#include <iostream>
#include <ctime>
#include <iomanip>
#define M 50

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

int main() {
	int m1, n1, mat[M][M];
	srand(time(0));

	cout << "Enter matrix size: ";
	cin >> m1 >> n1;
	cout << "Start matrix: " << endl;
	matrix(mat, m1, n1);
	print(mat, m1, n1);
	cout << endl << "Finish matrix: " << endl;
	action(mat, m1, n1);
	print(mat, m1, n1);
	return 0;
}                                           // Тело программы