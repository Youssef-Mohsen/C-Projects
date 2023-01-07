#include <iostream>
using namespace std;
int main()
{
	int x, pos;
	long max = -10000000000000000;
	for (int i = 1; i <= 5; i++) {
		cout << "enter number: ";
		cin >> x;
		if (x > max) {
			max = x;
			pos = i;

		}
	}
	cout << "the highest number is: " << max << '\t' << "in row: " << pos << '\n';
	system("pause");
	return 0;

}
