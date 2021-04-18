#include<iostream>
using namespace std;

int main()
{
	int i, n, t;
	cin>>t;
	for (i =0; i < t; i++){
		cin>>n;
		int sum=0;
		while (n > 0)
		{
			sum = sum + n%10;
			n = n/10;
		}
		cout<<sum<<endl;
	}
}