#include <iostream>
using namespace std;

int main()
{
    int max_a=0,max_b=0,n,m;

    cin >> n;

    while(n--)
    {
        int temp;
        cin >> temp;
        if(max_a<temp)
            max_a=temp;
    }

    cin >> m;

    while(m--)
    {
        int temp;
        cin >> temp;
        if(max_b<temp)
            max_b=temp;
    }

    cout << max_a << " " << max_b << endl;

    return 0;
}
