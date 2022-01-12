// Creating a copy of object by copying data of all member variable as it is
#include<iostream>
using namespace std;
class Dumy{
    private:
        int a,b;
    public:
        void setData(int x,int y){
            a = x;
            b = y;
        }
        void showData(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
        Dumy(Dumy &d) //Copy Constructor
        {
            a = d.a;
            b = d.b;
        }
        Dumy(){ }
};
int main(){
    Dumy d1;
    d1.setData(3,4);
    Dumy d2 = d1; //Calling Copy Constructor
    d2.showData();
    return 0;
}