#include <iostream>
using namespace std;
int main(void)
{
	cout << "Enter number to determine prime or not prime" << endl << endl;

	int x;
	char ch;
	do {
		cout << "enter number: ";
		cin >> x;
		if (x >= 1) {
			for (int i = 1; i <= 10; i++) {
				if (x % 2 == 0) {
					cout << "not prime\n";
					break;
				}
				else if (x % 3 == 0) {
					cout << "not prime\n";
					break;
				}
				else {
					cout << "prime\n";
					break;
				}
			}
			cout << "click 'y' if u want another?\n";
			cin >> ch;
		}
		else {
			cout << "invalid value\n";
			break;
		}
			

		} while (ch == 'y');
	

	system("pause");
	return 0;
}