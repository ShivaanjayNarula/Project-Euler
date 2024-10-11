#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if(n == 1)
    {
        cout << 9 << endl;
        return 0;
    }
    int high = pow(10, n) - 1;
    int low = pow(10, n - 1);
    int modulo = 1337;
    for(int i = high; i >= low; i--)
    {
        string s = to_string(i);
        string k = s;
        reverse(k.begin(), k.end());
        s += k;
        long long check = stoll(s);
        for(int j = high; j >= sqrtl(check); j--)
        {
            if(check % j == 0)
            {
                cout << check % modulo << endl;
                return 0;
            }
        }
    }
    cout << 0 << endl;
    return 0;
}
