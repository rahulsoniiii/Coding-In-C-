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
            if (img>=0)
            {
                cout<<real<<" + "<<img<<"i\n";           
            }
            else{
                cout<<real<<" - "<<-img<<"i\n";
            }
        }
        Complex operator-(){
            Complex temp;
            temp.real = -real;
            temp.img = - img;
            return temp;
        }
};
int main(){
    Complex c1,c2;
    c1.setData(4,3);
    c2 = -c1;
    c1.showData();
    c2.showData();
    return 0;
}