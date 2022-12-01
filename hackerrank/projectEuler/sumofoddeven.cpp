#include <iostream>
using namespace std;

void calculateSum(int n)
{
    // int i=0,j=1,sum=0;
    int sum=0, Se=0,So=0;
    int lo,le; //For storing last terms of the series
    int No, Ne;
    
    //Use AP, sum of n terms
    if(n%2==0)
    {
        le = n;
        lo=(n-1);
        No=Ne=int(n/2);
    }
    else{
        le=(n-1);
        lo=n;
        No=int(n/2);
        Ne=n-No;
    }

    cout<<"Last odd term : "<<lo<<endl;
    cout<<"Last even term  : "<<le<<endl;

    So = int((1+lo)*No*0.5);
    Se = int((2+le)*Ne*0.5);

    cout<<"Sum of odd terms : "<<So<<endl;
    cout<<"Sum of even terms  : "<<Se<<endl;
    
    /*
    sum = So+Se;   
    cout<<sum<<endl; */
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
