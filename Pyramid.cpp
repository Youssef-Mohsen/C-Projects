#include <iostream>
using namespace std;

int main(void)
{
    int height;
    cout << "Enter the height of the triangle : ";
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= (height - i); j++)
        {
            cout << " ";
        }
        for (int z= 0; z <=i; z++)
        {
            cout << "# ";
        }
        cout << endl;
    }
}
	

	