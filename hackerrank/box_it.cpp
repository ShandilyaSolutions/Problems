#include <iostream>
using namespace std;

class Box{
    
    private:
        int l,b,h;

    // Constructors : 

    Box(){
        //Default constructor initializing each variable with 0
        l=0;
        b=0;
        h=0;
    }

    Box(int x, int y, int z){
        l=x;
        b=y;
        h=z;
    }

    
    int getLength(){
        cout<<"Length : "<<l<<endl;
        return 0;
    }

    int getBreadth(){
        cout<<"Breadth : "<<b<<endl;
        return 0;
    }

    int getHeight(){
        cout<<"Height : "<<h<<endl;
        return 0;
    }

    int CalculateVolume(){
        return (l*b*h);
    }
};

int main(){
    Box obj1;
    int L,B,H;
    cout<<"Enter Length : ";
    cin>>L;
    cout<<"Enter Breadth : ";
    cin>>B;
    cout<<"Enter Height : ";
    cin>>H;
    Box obj2(L,B,H);
    obj2.getLength();
    obj2.getHeight();
    obj2.getBreadth();
    obj2.CalculateVolume();
    return 0;
}
