#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>

using namespace std;

int main()
{
	double x, y, R1;
	srand((unsigned)time(NULL));

	cout << "R1 = "; cin >> R1;

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;


		if ((y <= sqrt(R1 * R1 - x * x) && y != sqrt(R1 * R1 - x * x) && x >= 0 && y <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}

	cout << endl << fixed;


	for (int i = 0; i < 10; i++)
	{

		x = R1 * rand() / RAND_MAX - R1;
		y = R1 * rand() / RAND_MAX - R1;

		if ((y <= sqrt(R1 * R1 - x * x) && y != sqrt(R1 * R1 - x * x) && x >= 0 && y <= 0))

			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}
