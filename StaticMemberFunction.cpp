// Also known as class Member Function
// Can be invoked with or without Object
// Can only access static Member Function
#include<iostream>
using namespace std;
class Account{
    private:
        int balance;
        static float roi;
    public:
        void setBalance(int b){
            balance = b;
        }
        static void setRoi(float r){
            roi = r;
        }
        void ShowData(){
            cout<<"Balance: "<<balance<<endl;
            cout<<"Rate of Interest: "<<roi;
        }
};
float Account::roi = 5;
using namespace std;
int main(){
    Account a1;
    a1.setBalance(5000);
    // a1.setRoi(2.5);
    Account::setRoi(2.5);
    a1.ShowData();
    return 0;
}