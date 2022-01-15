#include<iostream>
using namespace std;
class Person{
    public:
        virtual void fun() = 0; //Pure Virtual Function
        void f1(){ cout<<"This is f1 of Person"<<endl;}
};
class Student:public Person{
    public:
        void fun(){
            cout<<"This is Fun of Student"<<endl;
        }
};
int main(){
    Student s;
    s.fun();
    s.f1();
    return 0;
}
// A class in which pure virtual function exist is known as pure virtual class
// We can't instantiate abstract class (No Object)