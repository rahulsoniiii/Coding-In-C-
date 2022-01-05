#include<iostream>
using namespace std;
int sum(int &x,int &y){
    return x+y;
}
int main(){
    int a=4,b=6;
    int s= sum(a,b);
    cout<<s;
    return 0;
}