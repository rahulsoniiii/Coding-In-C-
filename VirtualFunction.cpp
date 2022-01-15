#include<iostream>
using namespace std;
class A{
    public:
        void f1() {cout<<"Calling class A F1"<<endl; }
        virtual void f2() {cout<<"Calling class A F2"<<endl; }
        virtual void f3() {cout<<"Calling class A F3"<<endl; }
        virtual void f4() {cout<<"Calling class A F4"<<endl; }
};
class B: public A{
    public:
        void f1() {cout<<"Calling class B F1"<<endl; }
        void f2() {cout<<"Calling class B F2"<<endl; }
        void f4(int x) {cout<<"Calling class B F4"<<endl; }
};
int main(){
    A *ptrA, objA;
    ptrA = &objA;
    ptrA->f1(); //EB A
    ptrA->f2(); //LB A
    ptrA->f3(); //LB A
    ptrA->f4(); //LB A
    // ptrA->f4(4); //Error
    cout<<"\n\n";
    A *ptrA2;
    B objB;
    ptrA2 = &objB;
    ptrA2->f1(); //EB A
    ptrA2->f2(); //LB B
    ptrA2->f3(); //LB A
    ptrA2->f4(); //LB A
    // ptrA2->f4(4); //Error
    return 0;
}
// Base Class Pointer can call object of any decendent class but its converse is not true
// Late Binding is used in Virtual Function

// In Early binding Funvtion is called on the bases of type of pointer
// In Late Binding Function          k is called on the bases of type of object