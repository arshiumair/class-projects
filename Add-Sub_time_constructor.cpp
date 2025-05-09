#include <iostream>
using namespace std;
class Time 
{
    private:
    int second, minute, hour;
    public:
    Time(int a, int b, int c) 
    {
        second = a;
        minute = b;
        hour = c;
    }
     
    Time() {}
    void display() 
    
    {
        cout << "Time is: " << hour << ":" << minute << ":" << second << endl;
    }

    Time add(Time d) 
    {
        Time temp;
        temp.second = second + d.second;
        temp.minute = minute + d.minute;
        temp.hour = hour + d.hour;
        if (temp.second >= 60) 
        {
            temp.minute += temp.second / 60;
            temp.second = temp.second % 60;
        }
        if (temp.minute >= 60) 
        {
            temp.hour += temp.minute / 60;
            temp.minute = temp.minute % 60;
        }
        return temp;
     }

    Time sub(Time t) 
    {
        Time temp;
        temp.second = second - t.second;
        temp.minute = minute - t.minute;
        temp.hour = hour - t.hour;
        if (temp.second < 0) 
        {
            temp.minute -= 1;
            temp.second += 60;
        }
        if (temp.minute < 0) 
        {
            temp.hour -= 1;
            temp.minute += 60;
        }
        if(temp.hour < 0)
        {
            temp.hour += 12;
        }

        return temp;
    }

};

int main()
{
    Time t1(50,45,4), t2(20, 40, 3), t3, t4;
    t3 = t1.add(t2);
    t4 = t1.sub(t2);
    cout << "Addition of time: " << endl;
    t3.display();
    cout << "Subtraction of time: " << endl;
    t4.display();
    return 0;
}


