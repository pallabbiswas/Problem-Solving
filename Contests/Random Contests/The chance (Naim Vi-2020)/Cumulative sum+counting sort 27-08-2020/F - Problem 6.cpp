#include <iostream>
using namespace std;

int main()
{
    long long n,sum=0,cnt=0,l_sum=0;

    cin >> n;

    long long arr[n];

    for(long long i=0;i<n;i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for(long long i=0;i<n-1;i++)
    {
        l_sum += arr[i];
        if(2*l_sum == sum)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
