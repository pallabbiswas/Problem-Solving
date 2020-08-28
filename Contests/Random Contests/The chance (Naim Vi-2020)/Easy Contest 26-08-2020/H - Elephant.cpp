#include <iostream>
using namespace std;

int step = 5;

int recurse(int distance, int cnt, int i)
{
    if(distance < step-i)
    {
        i++;
        recurse(distance,cnt,i);
    }
    else
    {
        cnt += distance/(step-i);
        distance = distance % (step-i);
        if(distance == 0)
            return cnt;
        i++;
        recurse(distance,cnt,i);
    }
}

int main()
{
    long long distance,cnt=0,i=0;

    cin >> distance;

    cout << recurse(distance,cnt,i) << endl;

    return 0;
}
