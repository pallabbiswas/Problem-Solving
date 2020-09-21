#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int n,i=1,index=0,temp;
        cin >> n;
        int arr[n+1] = {0};
        temp = n;
        while(temp--)
        {
            cin >> arr[i];
            if(arr[i]%2==0)
                index = i;
            i++;
        }

        if(index == 0 && n == 1)
            cout << "-1" << endl;
        else if(index==0 && n>1)
            cout << "2\n1 2" << endl;
        else if(index != 0)
            cout << "1\n"<< index << endl;
        }

    return 0;
}
