#include <iostream>
#include <conio.h>
using namespace std;
class Distance{
    private:
    int inch;
    int feet;

    public:
    void setDistance(int f, int i){
        feet = f;
        inch = i;
    }

    Distance add(Distance d1)
    {
        Distance tempd;
        tempd.inch = tempd.feet = 0;
        tempd.inch = inch + d1.inch;
        if(tempd.inch >= 12){
            tempd.inch = tempd.inch - 12;
            tempd.feet += 1;
        }
        tempd.feet += feet + d1.feet;
        return tempd;
    }

    Distance minus(Distance d1)
    {
        Distance tempd;
        tempd.inch = tempd.feet = 0;
        tempd.inch = inch - d1.inch;
        if(tempd.inch < 0){
            tempd.inch = tempd.inch + 12;
            tempd.feet --;
        }
        tempd.feet += feet + d1.feet;
        return tempd;
    }

    void displayDistance(){
        cout << "Feet: " << feet << " Inch: " << inch << endl;
    }
};

int main()
{
    Distance d1, d2, d3;

    d1.setDistance(10, 2);
    d2.setDistance(30, 10);
    d3 = d1.add(d2);
    d3.displayDistance();
    getch();
    return 0;
}