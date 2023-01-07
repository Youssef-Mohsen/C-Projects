#include<iostream>
using namespace std;


int main(void)
{
	int x, y, z;



	cout << " First Side of triangle: ";
	cin >> x;
	cout << " Second Side of triangle: ";
	cin >> y;
	cout << " Third Side of triangle: ";
	cin >> z;

	if (x == y && y == z)
	{
		cout << "Equilateral" << endl;
	}
	else if (x != y && y != z && x != z)
	{
		cout << "Scalene" << endl;
	}
	else
	{
		cout << "Isoscles" << endl;
	}

	system("pause");
	return 0;
}