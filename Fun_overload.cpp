#include <iostream>
using namespace std;
class test
{
    private:
    int i, j;
    
    public:
    void get(int a, int b)
    {
        i= a;
        j= b;
    }
    void get()
    {
        cout<<"Enter i and j: ";
        cin>>i>>j;
    }
    void get(int a)
    {
        i= a;
        j= 0;
    }

    void display()
    {
      cout<<"i = " << i <<"j = "<< j << endl;
    }
};

int main()
{
    test t1, t2, t3;
    t1.get(10, 20); // Calls the first get method 
    t2.get();     // Calls the second get method
    t3.get(30); // Calls the third get method

    t1.display();  // Calls the display method for first object
    t2.display(); // Calls the display method for 2nd object
    t3.display(); // Calls the display method for 3rd object

    return 0;
}
