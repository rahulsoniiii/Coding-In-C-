#include<iostream>
using namespace std;
int sum(int *a,int *b){
    return (*a+*b);
}
int main(){
    int a= 4,b=6;
    int s = sum(&a,&b);
    cout<<s;
    return 0;
}