#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int flag = -1,i=0;
        string  a,b,c;
        cin >> a >> b >> c;

        while(a[i] != '\0')
        {
            if(a[i]==c[i] || b[i]==c[i])
                {
                    i++;
                    continue;
                }
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag == -1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
