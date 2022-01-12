#include <iostream>
using namespace std;
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
    friend class Item;
};
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
    Item(){

    }
    Item( Product &p){
        a = p.m;
        b = p.n;
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