#include <iostream>
using namespace std;
class test
{
    private:
    int A, B;
    public:
    void get()
    {
        cout << "Enter two numbers: ";
        cin >> A >> B;
    }
    void display()
    {
        cout << "A = " << A << endl;
        cout << "B = " << B << endl;
    }
    test add(test t)
    {
        test temp;
        temp.A = A + t.A;
        temp.B = B + t.B;
        return temp;
    }
    void add(test t1, test t2)
    {
        A = t1.A + t2.A;
        B = t1.B + t2.B;
    }

};

int main()
{
    test t1, t2, t3, t4;
    t1.get();
    t2.get();
    t3 = t1.add(t2); // Using return type function
    t3.display();
    t4.add(t1, t2); // Using void function
    t4.display();
    return 0;
}


