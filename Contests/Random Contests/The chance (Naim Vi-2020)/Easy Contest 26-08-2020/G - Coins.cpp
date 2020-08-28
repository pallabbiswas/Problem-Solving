#include <iostream>
using namespace std;


int recurse(int sum, int cnt,int value)
{

    if(sum < value)
    {
        value--;
        recurse(sum,cnt,value);
    }
    else
    {
        cnt += sum/(value);
        sum = sum % (value);
        if(sum == 0)
            return cnt;
        value--;
        recurse(sum,cnt,value);
    }
}

int main()
{
    long long sum,cnt=0,coin_value;

    cin >> coin_value >> sum;

    cout << recurse(sum,cnt,coin_value) << endl;

    return 0;
}
