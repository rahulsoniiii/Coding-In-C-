#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    int bookId;
    char title[20];
    float price;
    void display();
} b2;
int main(){
    book b1 = {1,"C++",150};
    book b3 = b1;
    b2.bookId =2;
    b2.price = 200;
    strcpy(b2.title,"Java");
    cout<<"Displaying Book number 1...\n";
    b1.display();
    cout<<"Displaying Book number 2...\n";
    b2.display();
    cout<<"Displaying Book number 3...\n";
    b3.display();
    return 0;
}
void book::display(){
    cout<<"Book Id: "<<bookId<<endl;
    cout<<"Book Title: "<<title<<endl;
    cout<<"Book Price: "<<price<<endl;
}