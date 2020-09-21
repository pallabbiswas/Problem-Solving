#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n,i=0,eight=0,len=0;
        string str;
        cin >> n >> str;
        if(n<11)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            while(str[i] != '\0')
            {
                if(str[i] == '8' && eight == 0)
                    eight++;
                if(eight>0)
                    len++;
                if(len>10)
                    break;
                i++;
            }
        }
        if(len>10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }


    return 0;
}
