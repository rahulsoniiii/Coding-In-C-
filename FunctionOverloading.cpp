#include<iostream>
using namespace std;
int area(int,int);
float area(int);
int main(){
    int r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    float a1 = area(r);
    cout<<"Area of circle is "<<a1<<endl;
    int l,b;
    cout<<"Enter length and breath of rectangle: ";
    cin>>l>>b;
    int a2 = area(l,b);
    cout<<"Area of rectangle is "<<a2<<endl;
    return 0;
}
float area(int r){
    return 3.14*r*r;
}
int area(int l, int b){
    return l*b;
}