#include <iostream>
using namespace std;

void cost_e(long long &a,long long &d,long long &e, long long &cost)
{
    while(d > 0 && a>0)
    {
        cost += e;
        d--;
        a--;
    }
}

void cost_f(long long &b,long long &c,long long &d,long long &f,long long &cost)
{
    while(b>0 && c>0 && d>0)
    {
        cost += f;
        b--;
        c--;
        d--;
    }
}

int main()
{
    long long a,b,c,d,e,f,cost=0;

    cin >>a>>b>>c>>d>>e>>f;

    if(e>=f)
    {
            cost_e(a, d, e, cost);
            if(d==0)
            {
                cout << cost << endl;
                return 0;
            }
            else
            {
                cost_f(b, c, d, f, cost);
                cout << cost << endl;
                return 0;
            }
    }
    else
    {
            cost_f(b,c,d,f,cost);
            if(d==0)
            {
                cout << cost << endl;
                return 0;
            }
            else
            {
                cost_e(a,d,e,cost);
                cout << cost << endl;
                return 0;
            }
    }
}
