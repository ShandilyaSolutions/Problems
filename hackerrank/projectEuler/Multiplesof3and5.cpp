#include <iostream>
using namespace std;

void calculateSum(int n)
{
    int i,j,sum=0;
    for(i=3;i<n;i+=3)
    {
        if(i%5==0)
            continue;
        //cout<<i<<" ";
      sum=sum+i;
    }

    for(j=5;j<n;j+=5){
        //cout<<j<<" ";
        sum=sum+j;
    }
    //cout<<endl;
    cout<<sum<<endl;
}

int main()
{
    int c,t,n;
    cin>>t;
    for(c=0;c<t;c++)
    {
        cin>>n;
        calculateSum(n);
    }
    return 0;
}
