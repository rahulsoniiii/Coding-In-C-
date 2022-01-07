#include<iostream>
using namespace std;
template <class X>
class Array{
    private:
        int size;
        int capacity;
        X *arr_ptr;
    public:
        Array(int capacity){
            this->size = 0;
            this->capacity = capacity;
            arr_ptr = new X[capacity];
        }
        Array(){ }
        ~Array(){
            delete []arr_ptr;
        }
        void setArray(int capacity){
            this->size = 0;
            this->capacity = capacity;
        }
        void setData(){  
            cout<<"Enter the number of elements you want to store: ";
            cin>>size;
            if (size>capacity)
            {
                cout<<"Not that much capacity.";
            }
            else
            {
                for (int i = 0; i < size; i++)
                {
                    cout<<"Enter element number "<<i+1<<": ";
                    cin>>arr_ptr[i];
                }
            }
        }
        void showData(){
            for (int i = 0; i < size; i++)
            {
                cout<<arr_ptr[i]<<" ";
            }
            cout<<endl;
        }
        void addElement(X ele){
            if (size<capacity)
            {
                arr_ptr[size] = ele;
                size++;
            }
            else{
                cout<<"Storage Full...";
            }
        }
        void pop(){
            size--;
        }
        void setElement(int index,int ele){
            if (index<=size)
            {
                for (int i = size; i <= index; i++)
                {
                    arr_ptr[size] = arr_ptr[size - 1];
                }
                arr_ptr[index] = ele;
            }
            else{
                cout<<"Not Possible ";
            }
        }
        void removeIndex(int index){
            if (index<=size)
            {
                 
                for (int i = index; i < size; i++)
                {
                    arr_ptr[i] = arr_ptr[i+1];
                }
                size--;   
            }
        }
};
int main(){
    Array <int>a1(10);
    a1.setData();
    // a1.showData();
    // a1.addElement(566);
    // a1.showData();
    // a1.pop();
    // a1.showData();
    a1.setElement(11,33);
    a1.showData();
    a1.removeIndex(3);
    a1.showData();
    return 0;
}