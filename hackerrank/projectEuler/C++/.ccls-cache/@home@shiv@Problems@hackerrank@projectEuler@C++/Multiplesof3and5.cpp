#include <iostream>
using namespace std;

void calculateSum(int num)
{
    num--;
    // We have to find all natural numbers < n, that are multiples of 3 and 5
    int i, sum;
    //Hint : use Sn formula of an AP :2n(2a+(n−1)d)
   
    /*cout<<"last 3 :"<<(num-(num%3))<<endl;
    cout<<"last 5 :"<<(num-(num%5))<<endl;
    cout<<"last 15 :"<<(num-(num%15))<<endl;*/

    // Value of n for APs
    int n3 = ((num - (num%3)-3)/3)+1;
    int n5 = ((num - (num%5)-5)/5)+1;
    int n15 = ((num - (num%15)-15)/15)+1;

    /*cout<<"N3 ; "<<n3<<endl;
    cout<<"N5 : "<<n5<<endl;
    cout<<"N15 : "<<n15<<endl;*/

    int s3,s5,s15;

    // Sum of Aps
    if (n3==1)
        s3=3;
    else
        s3 = (int)(0.5*n3)*(6+((n3-1)*3));
    
    if (n5==1)
        s5=5;
    else
        s5 = (int)(0.5*n5)*(10+((n5-1)*5));

    if(n15==1)
        s15=15;
    else
        s15 = (int)(0.5*n15)*(30+((n15-1)*5));

    cout<<"S3 : "<<s3<<endl;
    cout<<"S5 : "<<s5<<endl;
    cout<<"S15 : "<<s15<<endl;

    sum = s3+s5-s15;

    cout<<sum<<endl;
    cout<<endl;
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
