#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,c=0;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        if (i%n==0)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
