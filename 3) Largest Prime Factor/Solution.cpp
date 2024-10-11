#include <iostream>
using namespace std;
int solve(long long n)
{
    long long ans = -1;
    while(n % 2 == 0)
    {
        ans = 2;
        n /= 2;
    }
    for(long long i = 3; i*i <= n; i += 2)
    {
        while(n % i == 0)
        {
            ans = i;
            n /= i;
        }
    }
    if(n > 2)
    {
        ans = n;
    }
    return ans;
}
int main()
{
    long long n;
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}