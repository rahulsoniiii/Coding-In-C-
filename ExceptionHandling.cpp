#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    try
    {
        if(b==0){
            throw string("Division by Zero Not Possible");
        }
        else{
            cout<<"Division is "<<a/b;
        }
    }
    catch(string s)
    {
        cout<<s;
    }
    
    return 0;
}