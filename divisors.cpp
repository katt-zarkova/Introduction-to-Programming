#include<iostream>

using namespace std;

int main()
{
	long int n, i;
	cout << "Enter the number: ";
	cin >> n;
	cout << endl << "Divisors of " << n << " are";

	for (i = 1; i <= n; ++i)
	{
		if (n % i == 0)
			cout << " " << i;
	}
