#include <iostream>
using namespace std;

int main()
{
    int n,mx=-1,sum=0,fil=0,mn=101;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
        if(arr[i] > mx)
            mx = arr[i];
        if(arr[i] < mn)
            mn = arr[i];
    }

    if(mx == mn)   //if an array has same minimum & maximum value
    {              //minimum value theory
        cout << 2*mx+1 << endl;
        return 0;
    }

    int temp_max = 2*(sum/n+1);
    int temp_min = 2*(sum/n-1);

    if(temp_max<mx) //if temp_max is smaller than maximum in the array, maximum is the answer
    {
        cout << mx << endl;
        return 0;
    }

    if(temp_min < mx)    //to make sure the loop starts from max value in the array
        temp_min = mx;

    for(int i=temp_min;i<=temp_max;i++)
    {
        int sum_new = 0;
        for(int j=0;j<n;j++)
        {
            sum_new += i-arr[j];
        }

        if(sum_new>sum)
            {
                fil = i;
                break;
            }
    }

    cout << fil << endl;

    return 0;
}
