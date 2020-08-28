#include <iostream>
using namespace std;

long long arr[100];

int main()
{
    long long n;

    cin >> n;

    for(long long i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        arr[temp]++;
    }

    for(int i=0;i<100;i++)
    {
        cout << arr[i];
        if(i < 99)
            cout << " ";
    }

    cout << endl;

    return 0;
}
