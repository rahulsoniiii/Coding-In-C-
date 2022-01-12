#include <iostream>
using namespace std;
class Item
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
    friend class Product;
};
class Product
{
    int m, n;

public:
    void setData(int x, int y)
    {
        m = x;
        n = y;
    }
    void getData()
    {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
    }
    operator Item(){
        Item temp;
        temp.a = m;
        temp.b = n;
        return temp;
    }
};
int main(){
    Item i;
    Product p;
    p.setData(3,4);
    i = p;
    i.getData();
    return 0;
}