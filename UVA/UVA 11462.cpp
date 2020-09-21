#include <iostream>
using namespace std;

int main()
{
    while(1)
    {
        long long arr[100] = {0};

        long long n,cnt=0;
        cin >> n;

        if(n==0)
            break;

        for(long long i=0;i<n;i++)
        {
            int temp;
            cin >> temp;
            arr[temp]++;
        }

        for(int i=0;i<100;i++)
        {
            while(arr[i]--)
            {
                cnt++;
                cout << i;
                if(cnt < n)
                    cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
