#include<iostream>
using namespace std;
class Intiger{
    int a,b;
    public:
        void setData(int x, int y){
            a = x;
            b =y;
        }
        void showData(){
            cout<<"a = "<<a<<endl;
            cout<<"b = "<<b<<endl;
        }
    friend int sum(Intiger);
};
int sum(Intiger i){
    return i.a + i.b;
}
int main(){
    Intiger i1;
    int total;
    i1.setData(3,4);
    i1.showData();
    total = sum(i1);
    cout<<"Sum is "<<total;
}