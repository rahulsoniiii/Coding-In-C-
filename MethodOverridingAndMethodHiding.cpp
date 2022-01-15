#include<iostream>
using namespace std;
class A{
    public:
        void f1() {cout<<"Calling class A F1"<<endl; }
        void f2() {cout<<"Calling class A F2"<<endl; }
};
class B : public A{
    public:
        void f1() { cout<<"Calling class B F1"<<endl;} //Method Overriding
        void f2(int x) {cout<<"Calling class B F2"<<endl; } //Method Hiding
};
int main(){
    B obj;
    obj.f1(); //class B;
    // obj.f2(); //Error
    obj.f2(1); //class B
    return 0;
}
// Here early Binding in used
// Early Binding :- First Search in Derived Class then Parent class