#include <iostream>
using namespace std;

int main()
{
    int t,n,d,s=0;
    cin>>t;
    while(t>0)
    {
        t--;
        cin>>n;
        while(n>0)
        {
            d=n%10;
            s+=d;
            n=n/10;
        }
        cout<<s<<endl;
        s=0;
    }
    return 0;
}

