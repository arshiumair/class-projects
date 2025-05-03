#include <iostream>
using namespace std;
class Number
{
    protected:
    int num;
    char name[20];
    public:
    void getname()
    {
        cout<<"Enter name: ";
        cin>>name;
    }
    void displayname()
    {
        cout<<"Name: "<<name<<endl;
    }
    void getnum()
    {
        cout<<"Enter number: ";
        cin>>num;
    }
    void displaynum()
    {
        cout<<"Number: "<<num<<endl;
    }
};

class test: public Number
{
    
};
int main()
{
    test t;  // Creating an object of derived class
    t.getname();
    t.getnum();
    t.displayname();
    t.displaynum();

    return 0;
}
