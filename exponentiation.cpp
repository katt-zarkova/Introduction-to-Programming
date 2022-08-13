//a function that implements fast exponentiation (exponentiation by squaring)
#include<iostream>
using namespace std;

#define N 1000000007

long int exponentiation(long int base,
    long int exp)
{
    if (exp == 0)
        return 1;

    if (exp == 1)
        return base % N;

    long int t = exponentiation(base, exp / 2);
    t = (t * t) % N;

    if (exp % 2 == 0)
        return t;

    else
        return ((base % N) * t) % N;
}

int main()
{
    long int base;
   cout << "Enter base: ";
   cin >> base;
    long int exp;
     cout << "Enter exp: ";
    cin >> exp;

    long int modulo = exponentiation(base, exp);
    cout << modulo << endl;
    return 0;
}
