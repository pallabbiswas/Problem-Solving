#include <iostream>
using namespace std;

int main()
{
    long long n,min_v=100000000001,max_v=-1;
    cin >> n;
    int i=n;

    while(i--)
    {
        int temp;
        cin >> temp;
        if(temp>max_v)
            max_v=temp;
        if(temp<min_v)
            min_v=temp;
    }

    cout << (max_v-min_v-n+1) << endl;

    return 0;
}
