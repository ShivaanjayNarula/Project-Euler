#include <iostream>
using namespace std;

int gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int n;
    cin >> n;
    long long ans = 1;
    for(int i = 2; i <= n; i++)
    {
        ans = lcm(ans, i);
    }
    cout << ans;
    return 0;
}
