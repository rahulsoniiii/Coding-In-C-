#include<iostream>
using namespace std;
class Intiger{
    int i;
    public:
        void setData(int x){
            i = x;
        }
        void getData(){
            cout<<i<<endl;
        }
        operator int() //Class Type to primitive type using Casting operator
        {
            return i;
        }
        Intiger(){ }
        Intiger(int x){
            i = x;
        }
};
int main(){
    Intiger x = 5;
    int y = x;
    cout<<y;
    return 0;
}