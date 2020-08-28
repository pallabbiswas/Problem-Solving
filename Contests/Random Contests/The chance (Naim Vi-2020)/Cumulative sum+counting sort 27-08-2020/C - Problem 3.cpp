#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n--)
    {
        int value;
        int arr[10] = {0};

        cin >> value;

        for(int i=1;i<=value;i++)
        {
            int temp = i;
            while(temp!=0)          //counting occurrences
            {
                arr[temp%10]++;
                temp = temp/10;
            }
        }

        for(int i=0;i<10;i++)       //Printing array
        {
            cout << arr[i];
            if(i<9)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
