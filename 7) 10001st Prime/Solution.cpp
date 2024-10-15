#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long long nthPrime(long long n)
{
    if(n < 2 || n > 10001)
    {
        return 0;
    }
    int limit = n * (log(n) + log(log(n)));
    vector <bool> isPrime(limit + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    long long count = 0;

    //Sieve of Eratosthenes

    for(int i = 2; i <= limit; i++)
    {
        if(isPrime[i])
        {
            count++;
            if(count == n)
            {
                return i;
            }
            for(int j = i*i; j <= limit; j += i)

            {
                isPrime[j] = false;
            }
        }
    }
    return 0;
}

int main()
{
    long long n;
    cin >> n;
    long long ans = nthPrime(n);
    cout << ans;
}
