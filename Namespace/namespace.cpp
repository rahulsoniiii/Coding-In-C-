#include <iostream>
#include "MyNameSpace"
using namespace std;
// namespace Myspace
// {
//     int a;
//     void fun();
//     class Hello{
//         public:
//             void hello(){cout<<"Hello ";}
//     };
// }
// void Myspace::fun(){
//     cout<<"I am fun";
// }
using namespace Myspace;
int main()
{
    a = 5;
    cout << a;
    Hello x;
    cout << endl;
    x.hello();
    cout << endl;
    fun();
    return 0;
}