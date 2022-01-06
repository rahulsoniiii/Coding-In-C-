#include<iostream>
using namespace std;
class B;
class A{
    private:
        int x;
    public:
        A(int n){ x = n;} //Parameterized Constructor
        A() { } //Default Constructor
        void setA(int x){
            this->x = x; //this pointer
        }
        void showData(){
            cout<<"x = "<<x<<endl;
        }
        friend void sum(A,B);
};
class B{
    private:
        int y;
    public:
        B(int n){ y = n;} //Parameterized Constructor
        B() { } //Default Constructor
        void setB(int y){
            this->y = y; //this pointer
        }
        void showData(){
            cout<<"y = "<<y<<endl;
        }
        friend void sum(A,B);
};
void sum(A o1,B o2){
    cout<<"Sum is "<<o1.x + o2.y;
}
int main(){
    A x;
    B y;
    x.setA(4);
    y.setB(5);
    x.showData();
    y.showData();
    sum(x,y);
    return 0;
}