#include <iostream>
using namespace std;

int main()
{
    int n,temp,flag = 0;

    cin >> n;

    while(n--)
    {
        cin >> temp;
        if(temp > 0)
            {
                flag = 1;
                break;
            }
    }

    if(flag == 0)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;

    return 0;
}
