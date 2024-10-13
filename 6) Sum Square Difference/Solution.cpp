#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum1 = 0;
    long long sum2 = 0;
    long long ans = 0;
    for(int i = 1; i <= n; i++)
    {
        sum1 += i;
        sum2 += i * i;
    }
    ans = (sum1 * sum1) - sum2;
    cout << ans << endl;
    return 0;
}
