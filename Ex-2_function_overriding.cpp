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
        A::get();  // Call base class get() to get i
        cout << "Enter j: ";
        cin >> j;
    }
    void display()
    {   
        A::display();  // Call base class display() to display i
        cout << "j: " << j << endl;
    }
};
int main()
{
    B obj;  // Create an object of derived class B
    obj.get();  // Call derived class get() to get i and j
    obj.display();  // Call derived class display() to display i and j

    return 0;
}
