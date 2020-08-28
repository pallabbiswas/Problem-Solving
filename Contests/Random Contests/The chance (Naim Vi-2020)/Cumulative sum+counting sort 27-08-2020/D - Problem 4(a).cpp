#include <iostream>
using namespace std;

int main()
{
    long long n,sum=0;

    cin >> n;

    long long arr[n];

    for(long long i=0;i<n;i++)
    {
        cin >> arr[i];
        arr[i] += sum;
        sum = arr[i];
    }

    long long q;

    cin >> q;

    while(q--)
    {
        long long i,j;

        cin >> i >> j;

        if(i==0)
            cout << arr[j] << endl;
        else
            cout << arr[j]-arr[i-1] << endl;
    }

    return 0;
}
