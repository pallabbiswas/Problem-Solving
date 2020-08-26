#include <iostream>
using namespace std;

int main()
{
    long long test,num_a,num_b;

    cin >> test;

    while(test--)
    {
        cin >> num_a >> num_b;

        if(num_a<num_b)
            cout << "<" << endl;
        else if(num_a>num_b)
            cout << ">" << endl;
        else
            cout << "=" << endl;
    }

    return 0;
}
