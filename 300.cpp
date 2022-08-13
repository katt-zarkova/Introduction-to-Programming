//a program that finds all prime numbers from 2 to 300 with Erastothenes' algorithm and displays them on the screen 10 per line
#include <bitset>
#include <iostream>
using namespace std;

bitset<500001> Primes;
void SieveOfEratosthenes(int n)
{
    Primes[0] = 1;
    for (int i = 3; i <= n; i += 2) {
        if (Primes[i / 2] == 0) {
            for (int j = 3 * i; j <= n; j += 2 * i)
                Primes[j / 2] = 1;
        }
    }
}

int main()
{
    int n = 300;
    SieveOfEratosthenes(n);
    for (int i = 1; i <= n; i++) {
        if (i == 2)
            cout << i << ' ';
        else if (i % 2 == 1 && Primes[i / 2] == 0)
            cout << i << ' ';
        
    int count = 62;
    int columns = 10;

    for (int i = 0; i < count; i++)
    {
        printf("%9d", i);

        if ((i % columns) == 9)
        {
            printf("\n");
        }
    }
    return 0;
}
