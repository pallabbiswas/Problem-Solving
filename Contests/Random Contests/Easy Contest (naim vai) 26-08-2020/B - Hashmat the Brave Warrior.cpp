#include <iostream>
using namespace std;

int main()
{
    long long hashmat,opponent;

    while(cin >> hashmat >> opponent)
    {
        if(hashmat < opponent)
            cout << opponent-hashmat<<endl;
        else
            cout << hashmat-opponent<<endl;
    }

    return 0;
}
