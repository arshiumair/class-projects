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
    A *ptr;  // Pointer to base class
    B obj;   // Object of derived class
    ptr = &obj;  // Pointing to derived class object

    ptr->get();  // Call derived class get() using base class pointer
    ptr->display();  // Call derived class display() using base class pointer


    return 0;
}


