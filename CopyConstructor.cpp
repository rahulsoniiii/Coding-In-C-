#include<iostream>
using namespace std;
class Complex{
    private:
        int real,img;
    public:
        Complex(Complex &c) //Copy constructor
        {
           real  = c.real;
           img = c.img;
        }
        Complex()  //Default Constructor
        { }
        void setData(int x,int y);
        void showData();
};
void Complex::setData(int x,int y){
    real = x;
    img = y;
}
void Complex::showData(){
    cout<<"Complex Number is "<<real<<" + "<<img<<"i\n";
}
int main(){
    Complex c1,c2;
    c1.setData(2,3);
    c2 = c1; //Calling copy constructor
    c1.showData();
    c2.showData();
    return 0;
}