#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <iomanip>

const int n = 2;
using namespace std;

struct Human
{
    string City;
    int year;
    int growth;
};

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Human q[n];
    Human z[n];
    ifstream f("1.txt", ios::in);
    if (!f.is_open()) {
        cout << "Ошибка\n\n";
        exit(0);
    }
    else {
        cout << "Файл открыт\n\n";
        //Блок записи данных в структуру
        for (int i = 0; i < n; i++)
        {
            string temp;
            f >> temp;
            q[i].City = temp;
            if (i == 0)
                for (int j = 0; j < 5; j++)
                {
                    f >> q[j].year;
                    f >> q[j].growth;
                }
            if (i == 1)
                for (int h = 0; h < 5; h++)
                {
                    int x;
                    f >> x;
                    z[h].year = x;
                    f >> x;
                    z[h].growth = x;
                }
        }

        cout << endl << endl << "\t               Таблица до внесения изменений" << endl << endl << "\t\t" << " |    " << "Город" << "    | " << setw(7) << "Год" << "    | " << setw(7) << "Прирост" << "  | " << endl;
        cout << "\t\t" << " - - - - - - - - - - - - - - - - - - - -" << endl;

        // Блок вывода таблицы матрицей
        for (int i = 0; i < n; i++)
        {
            cout << "\t\t" << " | " << setw(11) << left << q[i].City << " | ";
            if (i == 0)
                for (int j = 0; j < 5; j++)
                {
                    cout << "   " << setw(7) << q[j].year << " |    " << setw(5) << q[j].growth << " | ";
                    if (j < 4)
                        cout << endl << "\t\t" << " | " << "            | ";
                }
            if (i == 1)
                for (int h = 0; h < 5; h++)
                {
                    cout << "   " << setw(7) << z[h].year << " |    " << setw(5) << z[h].growth << " | ";
                    if (h < 4)
                        cout << endl << "\t\t" << " | " << "            | ";
                }
            cout << endl;
            cout << "\t\t ---------------------------------------";
            cout << endl;
        }

        cout << endl << endl;
        int max1 = -99;
        int max2 = -99;
        // Блок максимального прироста населения
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                for (int j = 0; j < 5; j++)
                {
                    if (q[j].growth > max1)
                        max1 = q[j].growth;
                }
            if (i == 1)
                for (int h = 0; h < 5; h++)
                {
                    if (z[h].growth > max2)
                        max2 = z[h].growth;
                }
        }

        cout << endl << endl << "                         Таблица после внесения изменений" << endl << endl << "\t" << " |    " << "Город" << "    |     " << setw(7) << "Год" << "| " << setw(7) << "Прирост" << "  |  " << setw(7) << "Максимальный прирост" << " | " << endl;
        cout << "\t" << " - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

        // Блок вывода таблицы матрицей
        for (int i = 0; i < n; i++)
        {
            cout << "\t" << " | " << setw(11) << left << q[i].City << " | ";
            if (i == 0)
                for (int j = 0; j < 5; j++)
                {
                    cout << "   " << setw(7) << q[j].year << " |    " << setw(5) << q[j].growth << " |           ";
                    if (j == 2)
                        cout << setw(6) << max1 << "      | ";
                    else
                        cout << "            | ";
                    if (j < 4)
                        cout << endl << "\t" << " | " << "            | ";
                }
            if (i == 1)
                for (int h = 0; h < 5; h++)
                {
                    cout << "   " << setw(7) << z[h].year << " |    " << setw(5) << z[h].growth << " |           ";
                    if (h == 2)
                        cout << setw(6) << max2 << "      | ";
                    else
                        cout << "            | ";
                    if (h < 4)
                        cout << endl << "\t" << " | " << "            | ";
                }
            cout << endl;
            cout << "\t ---------------------------------------------------------------";
            cout << endl;
        }
        cout << endl << endl << endl << endl;
    }
}