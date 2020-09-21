#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int arr[101] = {0};
        int smallest=101,largest=0,flag = -1;

        int n;
        cin >> n;

        while(n--)
        {
            int temp;
            cin >> temp;

            arr[temp]++;

            if(temp < smallest)
                smallest = temp;
            if(temp > largest)
                largest = temp;
        }

        for(int i=smallest; i<=largest; i++)
        {
            if(arr[i] == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }

    return 0;
}
