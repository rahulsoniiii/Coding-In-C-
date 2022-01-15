#include <iostream>
using namespace std;
class student
{
protected:
    string name;
    int age;
    int Class;

public:
    void setName(string s)
    {
        name = s;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setClass(int c)
    {
        Class = c;
    }
};
class test : virtual public student
{
protected:
    int physics, maths;

public:
    void setTestMarks(int p, int m)
    {
        physics = p;
        maths = m;
    }
};
class sports : virtual public student
{
protected:
    int game;

public:
    void setGameScore(int g)
    {
        game = g;
    }
};
class result : public test, public sports
{
private:
    float percentage;

public:
    void showResult()
    {
        percentage = (maths + physics + game) / 3.0;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Class: " << Class << endl;
        cout << "Physics: " << physics << endl;
        cout << "Maths: " << maths << endl;
        cout << "Game: " << game << endl;
        cout << "percentage = " << (float)(physics + maths + game) / 3.0 << endl;
        if (percentage >= 36)
        {
            cout << "Congrulations!! You passed ";
        }
        else
        {
            cout << "You failed";
        }
    }
};
int main()
{
    result s1;
    s1.setAge(19);
    s1.setClass(2);
    s1.setGameScore(75);
    s1.setName("Rahul");
    s1.setTestMarks(87, 95);
    s1.showResult();
}