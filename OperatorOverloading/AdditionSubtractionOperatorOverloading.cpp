#include<iostream>
using namespace std;
class Complex{
    private:
        int real,img;
    public:
        void setData(int x, int y){
            real = x;
            img = y;
        }
        void showData(){
            cout<<real<<" + "<<img<<"i \n";
        }
        // Complex operator+(Complex c){
        //     Complex temp;
        //     temp.real = real+c.real;
        //     temp.img = img+c.img;
        //     return temp;
        // }
        Complex operator+(Complex);
        Complex operator-(Complex);
};
Complex Complex::operator+(Complex c){
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}
Complex Complex::operator-(Complex c){
    Complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;
    return temp;
}
int main(){
    Complex c1,c2,c3;
    c1.setData(5,4);
    c2.setData(4,3);
    c3 = c1 + c2;
    c3.showData();
    c3 = c1 - c2;
    c3.showData();
    return 0;
}