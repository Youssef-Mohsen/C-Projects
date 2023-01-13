 
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two intervals and the output will be the intersection (no negative numbers!)" << endl << endl;

	int x, y, z, w;
	char v;
	do
	{
		cout << "Enter first Intervals: " << endl;
		cin >> x >> y;

		cout << "Enter second Intervals: " << endl;
		cin >> z >> w;
		if (x >= 0 && y >= 0 && z >= 0 && w >= 0)

		{
			if (w > y && y > z && z >x)
				cout << "The intersection = " << z << '-' << y << endl;
			else if (y > w && w > x && x > z)
				cout << "The intersection = " << x << '-' << w << endl;
			else if (w > x && x > z && z > y)
				cout << "The intersection = " << z << '-' << x << endl;
			else if (z > x && x > w && w > y)
				cout << "The intersection = " << w << '-' << x << endl;
			else if (z > y && y > w && w > x)
				cout << "The intersection = " << w << '-' << y << endl;
			else if (y > z && z > x && x > w)
				cout << "The intersection = " << x << '-' << z << endl;
			else if (x > z && z > y && y > w)
				cout << "The intersection = " << y << '-' << z << endl;
			else if (x > w && w > y && y > z)
				cout << "The intersection = " << y << '-' << w << endl;
			else
				cout << "No Intersection" << endl;
		}
		else
			cout << "No Negative numbers" << endl;
		cout << endl;
		cout << "Again?" << endl;
		cin >> v;
	} while (v == 'y');
}

