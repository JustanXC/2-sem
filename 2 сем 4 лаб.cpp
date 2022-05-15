#include <iostream>
#include <cmath>
#define pi 3.14

using namespace std;

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
	double e = 0.5 * 10E-10;
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

int main() {
	int N = 0;
	cout << "Cos(pi/6) = " << cos(pi / 6);
	cout << "\tRecursion = " << func(N);
	}
