#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        long long a,b,remainder;
        cin >> a >> b;

        remainder = a%b;

        if(remainder==0)
            cout << "0" <<endl;
        else
            cout << b-remainder << endl;
    }

    return 0;
}
