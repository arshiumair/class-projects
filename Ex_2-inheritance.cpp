#include <iostream>
using namespace std;
class Number  // Base class
{
    protected:
    int num;
    char name[20];

};

class student: public Number    // Sub class
{
    private:
    int grade;
    public:
    void getname()
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void getnum()
    {
        cout << "Enter roll number: ";
        cin >> num;
    }
    void getgrade()
    {
        cout << "Enter grade: ";
        cin >> grade;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll number: " << num << endl;
        cout << "Grade: " << grade << endl;
    }
};

class employee: public Number   // Sub class
{
    private:
    int salary;
    public:
    void getname()
    {
        cout << "Enter name: ";
        cin >> name;
    }
    void getnum()
    {
        cout << "Enter employee number: ";
        cin >> num;
    }
    void getsalary()
    {
        cout << "Enter salary: ";
        cin >> salary;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Employee number: " << num << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    student s;  // Creating an object of student class
    employee e;  // Creating an object of employee class
    s.getname();
    s.getnum();
    s.getgrade();
    
    e.getname();
    e.getnum();
    e.getsalary();
    s.display();    // Displaying student details
    cout << endl;
    e.display();   // Displaying employee details
    
    

    return 0;
}
