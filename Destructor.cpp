#include<iostream>
using namespace std;
class complex{
    private:
        int real,img;
    public:
        complex(int x ,int y) //Parameterized Constructor
        {
            real = x;
            img = y;
        }
        complex() //Default Constructor
        {  }
        void setData(int,int);
        void showData();
        ~complex(){
            cout<<"Destructor Called\n";
        }
};
void complex::setData(int r,int i){
    real = r;
    img = i;
}
void complex::showData(){
    cout<<"Complex Number is "<<real<<" + "<<img<<"i\n";
}
int main(){
    complex c1(3,4),c2 = complex(6,7) , c3;
    return 0;
}