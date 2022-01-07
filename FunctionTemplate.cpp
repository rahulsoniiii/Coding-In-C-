#include<iostream>
using namespace std;
template <class X>
X big(X a, X b){
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int x = big(3,4);
    cout<<x;
}