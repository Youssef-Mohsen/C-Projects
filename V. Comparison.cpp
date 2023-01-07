#include<iostream>
using namespace std;

int main(void)
{
	cout << "Given a comparison symbol S between two numbers A and B. Determine whether it is Right or Wrong." << endl
		<< "The comparison is as follows : A < B, A > B, A = B" << endl<<endl;
	int x, y;
	char op;

	cout << "Enter comparison: ";
	cin >> x >> op >> y;

	if (op == '>' && x > y)
		cout << "Right";
	else if (op == '<' && x < y)
		cout << "Right";
	else if (op == '=' && x == y)
		cout << "Right";
	else
		cout << "Wrong";
	
	



	



}