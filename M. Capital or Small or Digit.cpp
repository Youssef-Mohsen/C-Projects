#include<iostream>
using namespace std;

int main(void)
{
	cout << "Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case." << endl << endl;
	char x;
	
	while(true)
	{
		cout << "Letter($ to end): ";
		cin >> x;
		

		
		
		if (x >= 'A' && x <= 'Z')
		{
			cout << "Capital letter" << endl;
			continue;
		}
		else if (x >= 'a' && x <= 'z')
		{
			cout << "Small letter" << endl;
			continue;
		}
		else if (x >= '0' && x <= '9')
		{
			cout << "Digit" << endl;
			continue;
		}
		else if (x == '$')
			break;
			else
		{
			cout << "Special Charachter" << endl;
			continue;
		}
		
	} 

	system("pause");
	return 0;
}