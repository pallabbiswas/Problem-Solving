#include <iostream>
using namespace std;

int main()
{
    long long test;

    cin >> test;

    while(test--)
    {
        long long number,flag=0,length=0,temp_pre=-1,temp_cur;
        cin >> number;

        while(number--)
        {
            if(temp_pre == -1)
            {
                cin >> temp_pre;
                length++;
                continue;
            }
            cin >> temp_cur;
            if(temp_cur == temp_pre)
                length++;
            else
            {
                flag--;
            }
        }
        if(flag<0)
            cout << "1" << endl;
        else
            cout << length << endl;
    }


    return 0;
}
