#include<iostream>
using namespace std;
class Dumy{
    private:
        int a,b;
        int *p;
    public:
        void showData(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
            cout<<"*p = "<<*p<<endl;
        }
        void setData(int x,int y,int z){
            a = x;
            b = y;
            *p = z;
        }
        Dumy(){
            p = new int;
        }
        Dumy(Dumy &d){
            a =d.a;
            b = d.b;
            p =new int;
            *p = *(d.p);
        }
        ~Dumy(){
            delete p;
        }
};
int main(){
    Dumy d1;
    d1.setData(1,3,5);
    Dumy d2 = d1;//Calling Copy Constructor
    d2.showData();
    return 0;
}