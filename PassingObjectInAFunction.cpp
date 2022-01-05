#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    void setData(int, int);
    void showData();
    Complex add(Complex);
};
void Complex::setData(int r, int i)
{
    real = r;
    img = i;
}
void Complex::showData()
{
    cout << "Complex Number is " << real << " + " << img << "i\n";
}
Complex Complex::add(Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setData(2, 3);
    c2.setData(3, 4);
    c3 = c1.add(c2);
    cout<<"Calculating Sum...\n";
    c3.showData();
    return 0;
}