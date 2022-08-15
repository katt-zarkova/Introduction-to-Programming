//a program that finds all prime numbers from 2 to 300 with Erastothenes' algorithm and displays them on the screen 10 per line
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX_SIZE = 3001;
    bool primes[MAX_SIZE];
    cout << "Enter n from 1 to " << MAX_SIZE -1 << ": ";
    int n; cin >> n;
    for (int i=0;i<=n;i++) primes[i]=true;
    primes[0]=false;
    primes[1]=false;

    for (int i=2;i*i<=n;i++)
    {
       if(primes[i])
       {
            for (int j=i;i*j<=n;j++) primes[i*j]=false;
       }
    }

    int ct=0;
    for (int i=2;i<=n;i++)
    {

      if (primes[i])
      {
          cout << setw(5) << i ;
          ct++;
          if (ct==10)
          {
               cout << "\n";
               ct=0;
          }
      }

    }
}
