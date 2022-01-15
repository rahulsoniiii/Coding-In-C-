#include<iostream>
using namespace std;
int main()
{
    int *ptr = new int[4];
    cout<<"Enter 4 numbers: ";
    for (int i = 0; i < 4; i++)
    {
        cin>>ptr[i];
    }
    cout<<"You entered: ";
    for (int i = 0; i < 4; i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete []ptr;
    return 0;
}