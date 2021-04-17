#include <iostream>
using namespace std;
int main()
{
	int i, t, x, y, z;
	int arr[t];
	cin >> t;
	for (i=0 ; i<t; i++)
	{
		cin >> x >> y;
		z = x + y;
		arr[i] = z;
	}
	for (i=0; i < t; i++)
	{
		cout << arr[i] << endl;
	}
}