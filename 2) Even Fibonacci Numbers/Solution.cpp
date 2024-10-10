#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long ans = 2;
    long long a = 2;
    long long b = 8;
    while (b <= n)
    {
        ans += b;
        long long temp = 4 * b + a;
        a = b;
        b = temp;
    }
    cout << ans << endl;
    return 0;
}
