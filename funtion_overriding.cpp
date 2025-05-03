#include <iostream>
using namespace std;
class A  // Base class
{
    protected:
    int i;
    public:
    void get()
    {
        cout << "Enter i: ";
        cin >> i;
    }
    void display()
    {
        cout << "i: " << i << endl;
    }
};
class B: public A  // Derived class
{
    protected:
    int j;
    public:
    void get()
    {
        cout << "Enter j: ";
        cin >> j;
    }
    void display()
    {
        cout << "j: " << j << endl;
    }
};
int main()
{
    A a;  // Object of base class
    B b;  // Object of derived class
    
    a.get();  // Get value of i from user
    b.get();  // Get value of j from user

    a.display();  // Display value of i
    b.display();  // Display value of j

    return 0;
}
