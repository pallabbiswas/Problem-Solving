#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        long long n,m;
        cin >> n >> m;
        if(n==1)
            cout << "0\n";
        else if(n == 2)
            cout << m << endl;
        else
            cout << 2*m << endl;
    }

    return 0;
}
