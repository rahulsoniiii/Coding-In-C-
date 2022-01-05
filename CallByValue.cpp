#include<iostream>
using namespace std;
int sum(int x,int y = 10) //default argument
{
    return x+y;
}
int main(){
    int a =4,b=5;
    // int s= sum(a,b);
    int s =sum(b);
    cout<<s;
    return 0;
}