#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        int len=0;
        while(str[len] != '\0')
            len++;

        if(str[len-1] == 'o')
            cout << "FILIPINO\n";
        else if(str[len-1] == 'u')
            cout << "JAPANESE\n";
        else if(str[len-1] == 'a')
            cout << "KOREAN\n";
    }

    return 0;
}
