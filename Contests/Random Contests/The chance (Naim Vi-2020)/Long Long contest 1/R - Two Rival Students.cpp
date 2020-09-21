#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,x,a,b,dis,temp;
        cin>> n >> x >> a >> b;

        temp = a-b;
        if(temp < 0)
            temp = -1*temp;

        if(temp+x > n-2)
            dis = n-1;
        else
            dis = temp+x;

        cout << dis << endl;
    }

    return 0;
}
