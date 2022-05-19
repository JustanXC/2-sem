#include <iostream>
#include <ctime>
#include "MY.h"

using namespace std;

int main()
{
	int m1, n1, mat[M][M];
	srand(time(0));
	cout << "Enter matrix size 1: ";
	cin >> m1 >> n1;
	cout << "Start matrix 1: " << endl;
	matrix(mat, m1, n1);
	print(mat, m1, n1);
	cout << endl << "Action 1: " << endl;
	action(mat, m1, n1);
	print(mat, m1, n1);
	cout << "\nEnter matrix size 2: ";
	cin >> m1 >> n1;
	cout << "Start matrix 2: " << endl;
	matrix(mat, m1, n1);
	print(mat, m1, n1);
	cout << "\nCount = " << action2(mat, m1, n1) << endl;
	int N = 0;
	cout << "\nCos(pi/6) = " << cos(pi / 6);
	cout << "\tRecursion = " << func(N) << endl;
	return 0;
}

