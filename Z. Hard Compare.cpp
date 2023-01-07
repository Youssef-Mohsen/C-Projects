#include<iostream>
using namespace std;

int main(void)
{
	cout << "Given 4 numbers A,B,C and D. If A^B > C^D print \"YES\" otherwise, print \"NO\"" << endl << endl;
	int x, y, z, w;
	int q = 1;
	int s = 1;

	cout << "Enter numbers: ";
	cin >> x >> y >> z >> w;

	for (int i = 0; i < y; i++)
	{
		q *= x;
		
	}
		
	for (int j = 0; j < w; j++)
	{
		s *= z;
		
	}
		

	if (q > s)
		cout << "Yes" << endl;
	else
		cout << "NO" << endl;
	
			
		

	
		

	

		

	
	
	
	
	
	

	system("pause");
	return 0;
}