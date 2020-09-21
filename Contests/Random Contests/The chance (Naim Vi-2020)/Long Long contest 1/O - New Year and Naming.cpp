#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,m,q;
    cin >> n >> m;

    char s[n][10],t[m][10];

    for(int i=0;i<n;i++)
            scanf("%s[^\n]", s[i]);
    for(int i=0;i<m;i++)
            scanf("%s[^\n]", t[i]);

    cin >> q;

    while(q--)
    {
        long long y;
        cin >> y;

        int temp,i=0;

        temp = y%n;
        if(temp==0)
            temp = n-1;
        else
            temp--;

        printf("%s", s[temp]);

        i=0;

        temp = y%m;
        if(temp==0)
            temp = m-1;
        else
            temp--;

        printf("%s", t[temp]);
        cout << endl;
    }

    return 0;
}
