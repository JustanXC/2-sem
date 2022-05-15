#include <iostream>
#include <cmath>
#include <ctime>
#include <random>
#include <iomanip>

using namespace std;

int main()       // 4 Вариант
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	cout << "Введите размер матрицы i x j\ni = ";
	int i = 5; int j = 5; 
	int A[5][5];                              // Задаем размер матрицы
	cout << "Если хотите заполнить матрицу случайными числами нажмите 1, если же хотите заполнить вручную, нажмите 0\n";
	int k = 0;
	cin >> k;
	if ((k != 0) && (k != 1))
	{
		cout << "Ошибка\n";
		return 0;
	}                                              // Выбор заполнения матрицы
	system("cls");
	if (k == 1)
	{
		cout << "Исходная матрица\n";
		for (int m = 0; m < i; m++)
		{
			for (int n = 0; n < j; n++)
			{
				A[m][n] = 0 + (rand()%50 - 19);
				cout << A[m][n] << "\t";
			} 
			cout << endl;
		}	
	}                                               // Заполнение рандомом
	else
	{
		int znach = 0;
		cout << "Введите значение элемента матрицы\n";
		for (int m = 0; m < i; m++)
		{
			for (int n = 0; n < j; n++)
			{
				cout << "i" << m+1 << n+1 << "=\n";
				cin >> znach;
				A[m][n] = 0 + znach;
			}
		}
		system("cls");
		cout << "Исходная матрица\n";
		for (int m = 0; m < i; m++)
		{
			for (int n = 0; n < j; n++)
			{
				cout << A[m][n] << "\t";
			}
			cout << endl;
		}
	}                                                // Заполнение ручками
	int kol = 0; int max = 0; int num = 0;int sumkol = 0;
	for (int m = 0; m < i; m++)
	{
		kol = 0;
		for (int n = 0; n < j; n++)
		{
			if (A[m][n] < 0)
			{
				kol++;
				sumkol++;
			}
		}
		if (kol > max)
		{
			max = kol;
			num = m;
		}
	}                                              // Нахождение макимального колва отрицательных
	cout << "\nP.S Если наибольшее количество отрицательных чисел бдует в нескольких строках, будет выведена первая из них.\n\nНаибольшее количество отрицательных чисел: " << max << "\nНаходится в " << num +1 << " строке\n\n";
	cout << "Количество отрицательных чисел: " << sumkol << "\n\n";
	cout << "Изменённая матрица\n";
	for (int m = 0; m < i; m++)
	{
		for (int n = 0; n < j; n++)
		{
			if (A[m][n] < 0)
			{
				A[m][n] = sumkol;
			}
			cout << A[m][n] << "\t";
		}
		cout << endl;
	}                                             // Изменение матрицы
}

