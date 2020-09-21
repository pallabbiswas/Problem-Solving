#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        long long n;
        cin >> n;
        if(n==2 || n==1)
            cout << "0" << endl;
        else if(n%2==0)
            cout << n/2-1 << endl;
        else
            cout << n/2 << endl;
    }

    return 0;
}
