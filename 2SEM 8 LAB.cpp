#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <Windows.h>
#define k 10

using namespace std;

struct aero {
	string num;
	string start;
	string end;
};

void XR() {
	//Заполнение файла структурой
	aero tab[k];
	string s;
	cout << "Введите\n\n";
	for (int i = 0; i < k; i++) {
		;
		cout << "\nНомер рейса, пункт отпрвления, пункт прибытия (через пробел)\n";
		cin >> tab[i].num;
		cin >> tab[i].start;
		cin >> tab[i].end;
	}
	system("cls");

	//запись в файл

	ofstream file("data.dat", ios::binary);
	file.write((char*)&tab, sizeof(tab));
	file.close();
}
void print(aero tmp[]) {
	cout << "Список всех рейсов\n\n№ рейса" << setw(30) << "Пункт отправления" << setw(30) << "Пункт прибытия\n";
	for (int i = 0; i < k; i++) {
		cout << tmp[i].num << "\t\t\t" << tmp[i].start << "\t\t\t\t" << tmp[i].end << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	aero tmp[k];

	// XR();

	//чтение из файла

	ifstream fin("data.dat", ios::binary);
	if (fin.is_open()) {
		cout << "Файл открыт\n\n";
	}
	else {
		cout << "Ошибка чтения файла\n\n";
		exit(404);
	}
	string usr; int count = 0;
	cout << "Введите город отпрвления или прибытия для поиска: ";
	cin >> usr;
	for (int i = 0; i < k; i++) {
		fin.read((char*)&tmp, sizeof(tmp));
		if (tmp[i].start == usr || tmp[i].end == usr) {
			cout << endl << "№ рейса" << setw(30) << "Пункт отправления" << setw(30) << "Пункт прибытия\n";
			cout << tmp[i].num << "\t\t\t" << tmp[i].start << "\t\t\t\t" << tmp[i].end << endl;
			count++;
		}
	}
	fin.close();
	if (count == 0) {
		cout << "Такого рейса не найдено\n\n";
	}
	// print(tmp);
	return 0;
}

