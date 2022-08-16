#include <iostream>
#include <iomanip>
using namespace std;
const int MAXN = 100;

int main()
{
    int a[MAXN + 1];
    int k, n;
    cout << "This program calculates C(n,k)." << endl;
    do
    {
        cout << "n = ";
        cin >> n;
    } while (n<0 || n>MAXN);
    do
    {
        cout << "k = ";
        cin >> k;
    } while (k<0 || k>n);
    a[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        a[i] = 1;
        for (int j = i - 1; j >= 1; j--)
        {
            a[j] += a[j - 1];
        }
    }
    cout << "C(" << n << "," << k << ")=" << a[k];


    return 0;
}
