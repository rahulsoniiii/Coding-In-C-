#include<iostream>
using namespace std;
class Intiger{
    int a;
    public:
        void setData(int x){
            a = x;
        }
        void showData(){
            cout<<a<<endl;
        }
        // Intiger operator++(int){
        //     Intiger temp;
        //     temp.a = a++;
        //     return temp;
        // }
        // Intiger operator++(){
        //     Intiger temp;
        //     temp.a = ++a;
        //     return temp;
        // }
        friend Intiger operator++(Intiger &i,int);
        friend Intiger operator++(Intiger &i);
};
Intiger operator++(Intiger &i){
    Intiger temp;
    temp.a = ++i.a;
    return temp;
}
Intiger operator++(Intiger &i,int){
    Intiger temp;
    temp.a = i.a++;
    return temp;
}
int main(){
    Intiger x,y;
    x.setData(4);
    y = x++;
    x.showData();
    y.showData();
    Intiger p,q;
    q.setData(8);
    p = ++q;
    p.showData();
    q.showData();
    return 0;
}