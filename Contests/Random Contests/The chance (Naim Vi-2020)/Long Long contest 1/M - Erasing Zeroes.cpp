#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        string a;
        cin >> a;
        int fi=0,temp=0,i=0,swtch=0;
        while(a[i] != '\0')
        {
            if(a[i] == '1')
                swtch = 1;
            if(swtch==1)
            {
                if(a[i]=='0')
                    temp++;
                else if(a[i]=='1')
                {
                    fi += temp;
                    temp=0;
                }
            }
            i++;
        }
        cout << fi << endl;
    }

    return 0;
}
