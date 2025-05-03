
#include <iostream>
using namespace std;
class A  // Base class  (abstract class)
{
    protected:
    int i;
    public:

    virtual void get() = 0;  // Pure virtual function
    virtual void display() = 0;  // Pure virtual function
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
    A *ptr;  // Pointer to base class
    B obj;   // Object of derived class
    ptr = &obj;  // Pointing to derived class object

    ptr->get();  // Call derived class get() using base class pointer
    ptr->display();  // Call derived class display() using base class pointer


    return 0;
}


