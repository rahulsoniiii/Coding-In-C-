#include<iostream>
using namespace std;
class Intiger{
    int a;
    public:
        Intiger operator++(int){
            Intiger temp;
            temp.a = a++;
            return temp;
        }
        Intiger operator++(){
            Intiger temp;
            temp.a = ++a;
            return temp;
        }
        friend ostream &operator<<(ostream&,Intiger);
        friend istream &operator>>(istream&,Intiger&);
};
ostream &operator<<(ostream &dout,Intiger I){
    dout<<I.a;
    return dout;
}
istream &operator>>(istream &din,Intiger &I){
    din>>I.a;
    return din;
}
int main(){
    Intiger a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"You entered: "<<a;
}