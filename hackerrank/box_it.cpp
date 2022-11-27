#include <iostream>
using namespace std;

class Box{
    
    private:
        int l,b,h;

    // Constructors : 
    public:
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

        void getLength(){
            cout<<"Length : "<<l<<endl;
        }

        void getBreadth(){
            cout<<"Breadth : "<<b<<endl;
        }

        void getHeight(){
            cout<<"Height : "<<h<<endl;
        }

        void CalculateVolume(){
            cout<<"Volume of the Box is "<<(l*b*h)<<" cubic units."<<endl;
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
    obj2.getBreadth();
    obj2.getHeight();
    obj2.CalculateVolume();
    return 0;
}
