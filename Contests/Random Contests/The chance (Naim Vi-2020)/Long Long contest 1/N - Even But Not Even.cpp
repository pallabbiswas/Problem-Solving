#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int n,i=0,cnt=0,ans=0;

        cin >> n;
        getchar();
        char arr[n];
        gets(arr);
        if(n==1)
            {
                cout << "-1" << endl;
                continue;
            }
        while(arr[i] != '\0')
        {
            if((int)(arr[i]-'0')%2==1)
                {
                    ans = 10*ans +(int)(arr[i]-'0');
                    cnt++;
                }
            if(cnt==2)
                break;
            i++;
        }
        if(cnt==2)
            cout << ans << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}
