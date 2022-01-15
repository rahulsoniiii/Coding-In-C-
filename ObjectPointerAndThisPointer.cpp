#include<iostream>
using namespace std;
class Box{
    private:
        int l,b,h;
    public:
        void setData(int l,int b,int h){
            this->l = l;
            this->b = b;
            this->h = h;
        }
        void showData(){
            cout<<"L = "<<l<<endl;
            cout<<"B = "<<b<<endl;
            cout<<"H = "<<h<<endl;
        }
};
int main(){
    Box b, *ptr;
    b.setData(1,2,3);
    ptr = &b;
    ptr->showData();
    return 0;
}