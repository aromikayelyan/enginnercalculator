#include "iostream"
#include "math.h"
using namespace std;

const int ftinmile = 5280;
const double kminmile = 1.609344;

const float PI = 3.14159265358979323;
float S(float R)
{
	return (PI * (R * R));
}

int fact(int N)
{
	if (N == 0)
		return 1;

	if (N == 1)
		return 1;

	return N * fact(N - 1);
}

int sq(int a, int b)
{
	return a * b;
}

int main()
{
	setlocale(LC_ALL, "RU");
	int selection;

	cout << "Выберите действие которое хотите выполнить" << endl;
	cout << "1 - Считаит плошадь Окружности" << endl;
	cout << "2 - Считаит факториал числа" << endl;
	cout << "3 - Считаит плошадь прямоугольника(квадрата)" << endl;
	cout << "4 - переводить мили в километры" << endl;

	cout << endl;
	cin >> selection;
	cout << endl;
	switch (selection)
	{
	case 1:
		int r;
		cout << "Введите радиус окружности, чтобы считать площадь" << endl;
		cout << endl;
		cin >> r;
		cout << endl;
		cout << "Плошадь окружности с радиусом " << r << " равна\n"
			 << "\t" << S(r) << endl;
		break;

	case 2:
		int f;
		cout << "Введите число факториал которого хотите считать" << endl;
		cout << endl;
		cin >> f;
		cout << endl;
		fact(f);
		cout << "факториал числа  " << f << "\n  Равна   " << fact(f) << endl;

		break;
	case 3:
		int A, B;
		cout << "Введите первую сторону прямоугольника\n";
		cout << endl;
		cin >> A;
		cout << endl;
		cout << "Введите вторую сторону прямоугольника\n";
		cout << endl;
		cin >> B;
		cout << endl;
		sq(A, B);
		cout << "Плошадь прямоугольника равна \t" << sq(A, B) << endl;
		break;

	case 4:
	{
		int ml, ft, km, m;
		cout << "Введите растояние в милях и футах" << endl;
		cin >> ml >> ft;
		double distmile = ml + (double)ft / ftinmile;
		double distkm = distmile * kminmile;
		km = distkm;
		m = ((distkm - km) * 1000);
		cout << "расстояние в км и метрах" << endl;
		cout << " " << km << " км:" << m << " м:" << endl;
	}
	break;

	default:
		cout << "Ошибка. Такого пункта нет в менью" << endl;
	}
}
