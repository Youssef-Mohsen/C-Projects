#include <iostream>
using namespace std;






int main()
{
	cout << "Given 4 numbers A, B, C and D. Print the last 2 digits from their Multiplication." << endl << endl;
	int x, r,q;
	
	int res = 1;
	
	
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter  four digits(-64_64): ";
		cin >> x;
		if (x > 64 || x < -64)
		{
			cout << "Error" << endl;
			break;
		}
		x = abs(x);
		res *= x;
	}
	if (res > 100)
	{

		r = res / 100;

		q = res - r * 100;

		cout << "The Result = " << res << endl;

		cout << "The Last two digits = " << q << endl;
	}
	else if (x > 64 || x < -64)
		cout << "";
	else
		cout  << "The Result = " << res << endl;

	





	system("pause");
	return 0;
}

