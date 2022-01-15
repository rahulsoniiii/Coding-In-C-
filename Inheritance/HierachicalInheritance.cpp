#include<iostream>
using namespace std;
class Father{
    string Fname;
    public:
        void setFname(string x){
            Fname = x;
        }
        void showFname(){
            cout<<"Father Name: "<<Fname<<endl;
        }
};
class Daughter:public Father{
    string Dname;
    public:
        void setDname(string x){
            Dname = x;
        }
        void showDname(){
            cout<<"Daughter Name: "<<Dname<<endl;
        }
};
class Son:public Father{
    string Sname;
    public:
        void setSname(string x){
            Sname = x;
        }
        void showSname(){
            cout<<"Son Name: "<<Sname<<endl;
        }
};
int main()
{
                                // Driver Program
    // Son s;
    // s.setFname("father");
    // s.setSname("Son");
    // s.showFname();
    // s.showSname();
    // Daughter d;
    // d.setFname("father");
    // d.setDname("Son");
    // d.showFname();
    // d.showDname();
    // Father f;
    // f.setFname("Father");
    // f.showFname();
    return 0;
}