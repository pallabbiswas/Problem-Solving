#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;

    cin >> str;

    int len=0,cnt=0;

    while(str[len] != '\0')
    {
        if(str[len] == 'a')
            cnt++;
        len++;
    }
    if((2*cnt)>=(len+1))
        cout << len << endl;
    else
        cout << (2*cnt-1) << endl;

    return 0;
}
