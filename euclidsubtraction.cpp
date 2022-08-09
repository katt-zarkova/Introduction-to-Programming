#include <iostream>
using namespace std;
int myGCD(int a, int b)
{
    while (b)
    {
        a = a % b;
        swap(a, b);
    }
    return a;
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
