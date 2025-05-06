#include <iostream>
using namespace std;
class Distance 
{
    private:
    int inch, feet;
    public:
    Distance(int a, int b) 
    {
        inch = a;
        feet = b;
    }
    
    Distance() {}

    void get() 
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;
    }
    void display() 
    {
        cout << "Distance is: " << feet << " \nfeet and " << inch << " \ninch" << endl;
    }

    Distance add(Distance d) 
    {
        Distance temp;
        temp.inch = inch + d.inch;
        temp.feet = feet + d.feet;
        if (temp.inch >= 12) 
        {
            temp.feet += temp.inch / 12;
            temp.inch = temp.inch % 12;
        }
        return temp;
    }

    Distance sub(Distance d) 
    {
        Distance temp;
        temp.inch = inch - d.inch;
        temp.feet = feet - d.feet;
        if (temp.inch < 0) 
        {
            temp.feet -= 1;
            temp.inch += 12;
        }
        return temp;
    }

};

int main()
{
    Distance d1, d2, d3, d4;
    d1.get();
    d2.get();
    d3 = d1.add(d2);
    d4 = d1.sub(d2);
    cout << "Addition of two distances: " << endl;
    d3.display();
    cout << "Subtraction of two distances: " << endl;
    d4.display();
    return 0;
}


