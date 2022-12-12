#include <iostream>
using namespace std;

int main()
{
    int t, n, d, r=0;
    cin>>t;
    while(t>0)
    {
        t--;
        cin>>n;
        while(n>0)
        {
            d=n%10;
            r=(r*10)+d;
            n=n/10;
        }
        cout<<r<<endl;
        r=0;
    }
    return 0;
}
