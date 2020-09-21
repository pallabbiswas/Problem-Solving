#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,one=0,zero=0,i=0;
    cin >> n;
    char c[n];
    scanf("%s[^\n]", c);

    while(c[i] !='\0')
    {
        if(c[i] == 'z')
            zero++;
        else if(c[i] == 'n')
            one++;

        i++;
    }

    while(one--)
        {
            cout << "1";
            if(one != 0 || zero != 0)
                cout << " ";
        }
    while(zero--)
        {
            cout << "0";
            if(zero != 0)
                cout << " ";
        }
    cout << endl;

    return 0;
}
