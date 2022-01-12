#include<iostream>
using namespace std;
class Intiger{
    int i;
    public:
        Intiger(){

        }
        Intiger(int x){
            i = x;
        }
        void setData(int x){
            i = x;
        }
        void getData(){
            cout<<i<<endl;
        }
};
int main(){
    Intiger i = 2;
    // i = 2;
    i.getData();
    return 0;
}
// Type Conversion from Primative type to Class type Using Constructor