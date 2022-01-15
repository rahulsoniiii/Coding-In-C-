#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    A(int k)
    {
        a = k;
        cout << "Class A Contructor Called" << endl;
    }
    ~A() { cout << "Class A Destructor Called" << endl; }
};
class B : public A
{
protected:
    int b;

public:
    B(int x, int y) : A(x)
    {
        b = y;
        cout << "Class B Constructor Called" << endl;
    }
    ~B()
    {
        cout << "Class B Destructor Called" << endl;
    }
};
int main()
{
    // A a(3);
    B b(2,7);
    return 0;
}