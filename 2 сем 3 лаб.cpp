#include <iostream>
#include <ctime>
#define M 50

using namespace std;

void matrix(int a[][M], int m, int n) {
	srand(time(0));
	int i, j;

	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			a[i][j] = rand() % 100 - 50;
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

int action(int a[][M], int m, int n) {
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

int main() {
	int m1, n1, mat[M][M];

	cout << "Enter matrix size: ";
	cin >> m1 >> n1;
	cout << "Start matrix: " << endl;
	matrix(mat, m1, n1);
	cout << "Count = " << action(mat, m1, n1);
	return 0;
}