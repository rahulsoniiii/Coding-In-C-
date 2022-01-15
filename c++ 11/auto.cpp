#include<iostream>
using namespace std;
int main()
{
    auto x = 45.55f;
    cout<<x<<endl;
    decltype(x) z = 11.5;
    cout<<z;
    return 0;
}