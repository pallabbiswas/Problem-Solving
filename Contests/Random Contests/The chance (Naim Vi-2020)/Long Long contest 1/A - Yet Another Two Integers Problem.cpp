#include <iostream>
using namespace std;

int main()
{
    long long test;

    cin >> test;

    while(test--)
    {
        long long num_a,num_b;

        cin >> num_a >> num_b;

        if(num_a < num_b)
            swap(num_a,num_b);

        long long difference;

        difference = num_a-num_b;

        if(difference%10 == 0)
            cout << difference/10 << endl;
        else
            cout << difference/10+1 << endl;
    }

    return 0;
}
