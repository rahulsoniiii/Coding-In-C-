#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    int bookId;
    char title[20];
    float price;
} b2;
void display(book b){
    cout<<"Book Id: "<<b.bookId<<endl;
    cout<<"Book Title: "<<b.title<<endl;
    cout<<"Book Price: "<<b.price<<endl;
}
int main(){
    book b1 = {1,"C++",150};
    book b3 = b1;
    b2.bookId =2;
    b2.price = 200;
    strcpy(b2.title,"Java");
    cout<<"Displaying Book number 1...\n";
    display(b1);
    cout<<"Displaying Book number 2...\n";
    display(b2);
    cout<<"Displaying Book number 3...\n";
    display(b3);
    return 0;
}
