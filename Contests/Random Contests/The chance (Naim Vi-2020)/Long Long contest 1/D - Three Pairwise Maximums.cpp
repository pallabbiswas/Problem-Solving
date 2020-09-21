#include <iostream>
using namespace std;

int main()
{
    long long test;

    cin >> test;

    while(test--)
    {
        long long x,y,z;
        cin >> x >> y >> z;

        if(x == y && x == z )
            cout<<"YES\n"<<x<<" "<<y<<" "<<z<<endl;
        else if((x==y&&x>z)||(y==z&&x<y)||(x==z&&y<x))
        {
            int a,b;
            if(x==y){a = x; b = z;}
            else if(y==z){a = y; b = x;}
            else{a = z; b = y;}

            cout<<"YES\n"<<a<<" "<<b<<" "<<b<<endl;

        }
        else
            cout << "NO\n";
    }

    return 0;
}
