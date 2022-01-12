// Instialization of constant and reference variable is not possible inside constructor ,it can be instialized by using Instializer list
#include<iostream>
using namespace std;
class Dummy{
    private:
        int a,b;
        const int x;
        int &y;
    public:
        Dummy(int &n): x(5),y(n) //Intializer List
        { 
            a = 0;
            b = 0;
        }
        void setData(int a,int b){
            this->a = a;
            this->b = b;
        }
        void showData(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
        }
};
int main(){
    int m = 6;
    Dummy d(m);
    d.setData(1,3);
    d.showData();
    return 0;
}