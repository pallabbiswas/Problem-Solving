#include <iostream>
using namespace std;

int main()
{
    int n,t=0;

    cin >> n;

    while(t != n)
    {
        if(t%2==1)
            cout << "I love ";
        else
            cout << "I hate ";
        t++;
        if(t != n)
            cout << "that ";
        else
            cout << "it" << endl;
    }

    return 0;
}
