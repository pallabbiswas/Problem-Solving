#include <iostream>
using namespace std;

int arr[601];

int main()
{
    int n,cnt=0;

    cin >> n;

    while(n--)
    {
        int temp;
        cin >> temp;
        arr[temp]++;
        if(temp != 0 && arr[temp] == 1)
            cnt++;
    }

    cout << cnt <<endl;

    return 0;
}

