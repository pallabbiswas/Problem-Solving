#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int test;
    cin >> test;
    getchar();

    while(test--)
    {
        char str[101] ="";
        cin.getline(str,101);
        int len = 0;
        while(str[len] != '\0')
            len++;
        cout << str[0];
        int i=1;
        while(i<len-1)
        {
            cout << str[i];
            i += 2;
        }
        cout << str[len-1];
        cout << endl;
    }

    return 0;
}
