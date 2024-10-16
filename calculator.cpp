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

	cout << "Select the action you want to perform" << endl;
	cout << "1 - Calculates the area of ​​a circle" << endl;
	cout << "2 - Calculates the factorial of a number" << endl;
	cout << "3 - Calculates the area of ​​a rectangle (square)" << endl;
	cout << "4 - convert miles to kilometers" << endl;

	cout << endl;
	cin >> selection;
	cout << endl;
	switch (selection)
	{
	case 1:
		int r;
		cout << "Enter the radius of a circle to calculate the area" << endl;
		cout << endl;
		cin >> r;
		cout << endl;
		cout << "Area of ​​a circle with radius " << r << " equal to\n"
			 << "\t" << S(r) << endl;
		break;

	case 2:
		int f;
		cout << "Enter the factorial number you want to calculate" << endl;
		cout << endl;
		cin >> f;
		cout << endl;
		fact(f);
		cout << "factorial of a number  " << f << "\n equal   " << fact(f) << endl;

		break;
	case 3:
		int A, B;
		cout << "Enter the first side of the rectangle\n";
		cout << endl;
		cin >> A;
		cout << endl;
		cout << "Enter the second side of the rectangle\n";
		cout << endl;
		cin >> B;
		cout << endl;
		sq(A, B);
		cout << "The area of ​​the rectangle is \t" << sq(A, B) << endl;
		break;

	case 4:
	{
		int ml, ft, km, m;
		cout << "Enter distance in miles and feet" << endl;
		cin >> ml >> ft;
		double distmile = ml + (double)ft / ftinmile;
		double distkm = distmile * kminmile;
		km = distkm;
		m = ((distkm - km) * 1000);
		cout << "distance in km and meters" << endl;
		cout << " " << km << " км:" << m << " м:" << endl;
	}
	break;

	default:
		cout << "Error. There is no such item in the menu" << endl;
	}
}
