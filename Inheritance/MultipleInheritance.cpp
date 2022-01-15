#include <iostream>
using namespace std;
class Father
{
    string Fname;

public:
    void setFname(string s)
    {
        Fname = s;
    }
    void showFname()
    {
        cout << Fname<<endl;
    }
};
class Mother
{
    string Mname;

public:
    void setMname(string s)
    {
        Mname = s;
    }
    void showMname()
    {
        cout << Mname<<endl;
    }
};
class Son : public Father, public Mother
{
    string Sname;

public:
    void setSname(string s)
    {
        Sname = s;
    }
    void showData()
    {
        cout <<Sname<<endl;
        Mother::showMname();
        Father::showFname();
    }
};
int main()
{
    Son s;
    s.setFname("father");
    s.setMname("Mother");
    s.setSname("Son");
    s.showData();
    return 0;
}