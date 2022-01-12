#include<iostream>
using namespace std;
class Intiger{
    int a;
    public:
        Intiger operator+(Intiger i){
            Intiger temp;
            temp.a += i.a;
            return temp;
        }   
        Intiger operator-(Intiger i){
            Intiger temp;
            temp.a -= i.a;
            return temp;
        }      
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
          Intiger operator--(int){
            Intiger temp;
            temp.a = a--;
            return temp;
        }
        Intiger operator--(){
            Intiger temp;
            temp.a = --a;
            return temp;
        }
        bool operator<=(Intiger i){
            return (a<=i.a);
        }
        bool operator>=(Intiger i){
            return (a>=i.a);
        }
        bool operator!=(Intiger i){
            return (a!=i.a);
        }
        bool operator==(Intiger i){
            return (i.a == a);
        }
        friend ostream& operator<<(ostream&,Intiger);
        friend istream& operator>>(istream&,Intiger&);
};
ostream& operator<<(ostream &dout,Intiger i){
    dout<<i.a;
    return dout;
}
istream& operator>>(istream &din,Intiger &i){
    din>>i.a;
    return din;
}
int main(){
                                    // Driver Code
    // Intiger i,j;
    // cout<<"Enter a number: ";
    // cin>>i;
    // cout<<"You entered ";
    // cout<<i<<endl;
    //  cout<<"Enter a number: ";
    // cin>>j;
    // cout<<"You entered ";
    // cout<<j;
    // bool test = (i==j);
    // cout<<endl<<test;
    return 0;
}