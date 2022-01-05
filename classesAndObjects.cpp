#include<iostream>
using namespace std;
class Complex{
    private:
        int real,img;
    public:
        void setData(int,int);
        void showData();
};
void Complex::setData(int r,int i){
    real = r;
    img = i;
}
void Complex::showData(){
    cout<<"Complex Number is "<<real<<" + "<<img<<"i\n";
}
int main(){
    Complex c1;
    c1.setData(2,3);
    c1.showData();
    return 0;
}