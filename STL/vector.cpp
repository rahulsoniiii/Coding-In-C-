#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>x = {1,2,3,4,5};
    x.push_back(6);
    x.push_back(7);
    vector <int>::iterator itr = x.begin();
    for(itr;itr != x.end(); itr++){
        cout<<*itr<<" ";
    }
    return 0;
}