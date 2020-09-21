#include <iostream>
using namespace std;


int main()
{
     int test;
     cin >> test;

     while(test--)
     {
         long long a,b,n,cnt=0;
         cin >> a >> b >> n;

         while(a<=n && b<=n)
         {
             if(a<b) a+=b;
             else b+=a;

             cnt++;
         }
         cout << cnt << endl;
     }

    return 0;
}
