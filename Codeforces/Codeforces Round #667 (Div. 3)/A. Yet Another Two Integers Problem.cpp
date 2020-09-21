#include <iostream>
using namespace std;

void output(int m, int n_1, int o, int p, int q)
{
    if(m-q >= o)
        {
            m = m-q;
        }
    else if(m-q < o)
        {
            m = n_1-m+o;
            m = o;
        }
    if(n_1-q >= p)
        {
            n_1 = n_1-q;
        }
    else if(n_1-q < p)
        {
            q = q-n_1+p;
            n_1 = n_1-q;
        }
    cout << m*n_1 << endl;
}

int main()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long a,b,x,y,n;

        cin >> a >> b >> x >> y >> n;

        if(a>b)
            output(b,a,y,x,n);
        else if(a<b)
            output(a,b,x,y,n);
        else
        {
            if(y>x)
                output(a,b,x,y,n);
            else
                output(b,a,y,x,n);
        }
    }

    return 0;
}
