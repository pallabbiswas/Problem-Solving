#include <iostream>
using namespace std;

int main()
{
    long long weight;

    cin >> weight;

    if(weight%2==0 && weight>2)
        cout << "YES" << endl;
    else
        cout << "NO" <<  endl;

    return 0;
}
