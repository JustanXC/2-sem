#include <iostream>
#include <string>
#include <sstream>
#define k 10

using namespace std;

struct people {
	int num;
	string name;
	char gen;
	int year;
	int work;
};

people table[k] = {
{1,"Anisimov U.P.", 'M', 1940, 1957},
{2,"Ivanov I.N.", 'M', 1980, 1999},
{3,"Mahova O.I.", 'F', 1960, 1980},
{4,"Ogarev K.M.", 'M', 1971, 1990},
{5,"Egorova P.K.", 'F', 1993, 2011},
{6,"Golikova O.I.", 'F', 1972, 1960},
{7,"Sotnikov T.S.", 'M', 1943, 1960},
{8,"Komov V.I.", 'M', 1979, 2005},
{9,"Lebedev A.A.", 'M', 1959, 1981},
{10,"Dimova V.V.", 'F', 1991, 2010} };

void sort() {
	for (int i = 0; i < k; i++) {
		if (table[i].year < table[i + 1].year) {
			swap(table[i+1], table[i]);
			sort();
		}
	}
}
int main() {
	setlocale(LC_ALL, "Rus");
	int y1, y2;
	cout << "№\t" << "ФИО\t" << "       Пол\t" << "Год рожд.\t" << "Год пост." << endl;
	for (int i = 0; i < k; i++) {
		cout << table[i].num << "\t" << table[i].name << "\t" << table[i].gen << "\t" << "  " << table[i].year << "\t" << "\t" << "  " << table[i].work << endl;
	}
	float st = 0;
	for (int i = 0; i < k; i++) {
		st = st + 2022 - table[i].work;

	}
	cout << endl << "№\t" << "ФИО\t" << "       Пол\t" << "Год рожд.\t" << "Год пост." << endl;
	int schet = 0;
	for (int i = 0; i < k; i++) {
		sort();
		cout << table[i].num << "\t" << table[i].name << "\t" << table[i].gen << "\t" << "  " << table[i].year << "\t" << "\t" << "  " << table[i].work << endl;
	}
	cout << "\nСредний стаж: " << st/k;
}