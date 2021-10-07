// < Лисецький Володимир >
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 12

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		
		if ((x <= 0 && y >= 0 && x >= -R && y <= R && pow(x + R, 2) + pow(y - R, 2) >= pow(R, 2)) ||
			(x > 0 && x < R && y > -R && y < 0 && pow(x - R, 2) + pow(y + R, 2) >= pow(R, 2)))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = (-R) + rand() * (R + R) / RAND_MAX;
			y = (-R) + rand() * (R + R) / RAND_MAX;
			if ((x <= 0 && y >= 0 && x >= -R && y <= R && pow(x + R, 2) + pow(y - R, 2) >= pow(R, 2)) ||
				(x > 0 && x < R && y > -R && y < 0 && pow(x - R, 2) + pow(y + R, 2) >= pow(R, 2)))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}