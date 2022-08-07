//Using Euclid's standard algorithm, write a function that calculates the quotient of two natural numbers
#include <iostream>
using namespace std;
int myGCD(int a, int b)
{
    if (b == 0)
        return a;
    return myGCD(b, a % b);
}
int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "GCD: " << myGCD(a, b) << '\n';
    return 0;
}
