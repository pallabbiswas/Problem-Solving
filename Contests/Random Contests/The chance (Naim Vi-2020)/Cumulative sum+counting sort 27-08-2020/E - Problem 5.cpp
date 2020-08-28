#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n,k,index=0,temp=0;

    cin >> n >> k;

    int arr[n],sum[n-k];

    for(int i=0;i<n;i++)
        cin >> arr[i];

    for(int i=0;i<k;i++)
        temp += arr[i];

    sum[0] = temp;

    for(int i=k;i<n;i++)
    {
        sum[i-k+1] = sum[i-k] + arr[i] - arr[i-k];
        if(temp > sum[i-k+1])
        {
            index = i-k+1;
            temp = sum[i-k+1];
        }
    }

    cout << index+1 << endl;

    return 0;
}
