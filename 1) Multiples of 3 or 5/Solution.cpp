#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unsigned long long nums[3] = {3, 5, 15};
    for(int i=0; i<3; i++)
    {
        long long count = (n-1)/nums[i];
        nums[i] = ((nums[i]*count*(count+1))/2);            
    }
    cout<<(nums[0]+nums[1]-nums[2])<<endl;    
    return 0;
}