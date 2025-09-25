#include <iostream>
#include <cmath>
#include <string>
using namespace std;

template <typename T>
void my_input(T& value, string text) {
	cout << text;
	cin >> value;
}

int main() {
	setlocale(LC_ALL, "RU");
	
	double a, b, c;
	cout << "Введите коэффиенты квадратного уравнения" << endl;

	my_input(a, "Введите значение для переменной a: ");
	my_input(b, "Введите значение для переменной b: ");
	my_input(c, "Введите значение для переменной c: ");

	if (a == 0) {
		if (b == 0)
			cout << "Корней нет.";
		else
			cout << "Единственный корень при a = 0: " << -c / b;
	}
	else {
		double D = pow(b, 2) - 4 * a * c;
		cout << "Дискриминант: " << D << endl;

		if (D > 0) {
			double x1, x2;
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);

			cout << "Корни квадратного уравнения: " << x1 << " ; " << x2;
		}
		else if (D == 0) {
			double x1;
			x1 = -b / (2 * a);
			cout << "Единственный корень: ";

			if (x1 == 0)
				cout << abs(x1);
			else
				cout << x1;
		}
		else
			cout << "Корней нет.";
	}
	return 0;
}
