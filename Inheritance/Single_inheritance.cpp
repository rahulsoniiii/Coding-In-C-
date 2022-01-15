#include <iostream>
using namespace std;
class Father
{
private:
    string FDOB;

protected:
    int Fage;
    string Fname;

public:
    void setFatherInfo(string FDOB, int Fage, string Fname)
    {
        this->FDOB = FDOB;
        this->Fage = Fage;
        this->Fname = Fname;
    }
    void getFatherInfo()
    {
        cout << "Father Name: " << Fname << endl;
        cout << "Father Age: " << Fage << endl;
        cout << "Father Date of Birth: " << FDOB << endl;
    }
};
class Son : public Father
{
private:
    string SDOB;

protected:
    int Sage;
    string Sname;

public:
    void setSonInfo(string SDOB, int Sage, string Sname)
    {
        this->SDOB = SDOB;
        this->Sage = Sage;
        this->Sname = Sname;
    }
    void getSonInfo()
    {
        
        cout << "Son Name: " << Sname << endl;
        cout << "Son Age: " << Sage << endl;
        cout << "Son Date of Birth: " << SDOB << endl;
    }
};
int main()
{
    Son rs;
    rs.setFatherInfo("5 Feb 2000",52,"ms");
    rs.setSonInfo("20 May 2002",20,"rs");
    rs.getSonInfo();
    rs.getFatherInfo();
    return 0;
}