#include <iostream>
#include <conio.h>
using namespace std;
class Time{
    private:
    int second;
    int minute;
    int hour;

    public:
    void setTime(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
    }

    Time add(Time T1)
    {
        Time tempt;
        tempt.second = tempt.minute = tempt.hour = 0;
        tempt.second = second + T1.second;
        if(tempt.second >= 60){
            tempt.second = tempt.second - 60;
            tempt.minute += 1;
        }
        tempt.minute = minute + T1.minute;
        if(tempt.minute >= 60){
            tempt.minute = tempt.minute - 60;
            tempt.hour += 1;
        }
        tempt.hour += hour + T1.hour;
        return tempt;
    }

    Time minus(Time T1)
    {
        Time tempt;
        tempt.second = tempt.minute = tempt.hour = 0;
        tempt.second = second - T1.second;
        if(tempt.second < 0){
            tempt.second = tempt.second + 60;
            tempt.minute --;
        }
        tempt.minute = minute - T1.minute;
        if(tempt.minute < 0){
            tempt.minute = tempt.minute + 60;
            tempt.hour --;
        }
        tempt.hour += hour + T1.hour;
        if(tempt.hour < 0){
            tempt.hour += 12;
        }
        return tempt;
    }

    void displayTime(){
        cout << "hour: " << hour << " minute: " << minute << "seconds: "<<second<< endl;
    }
};

int main()
{
    Time T1, T2, T3;

    T1.setTime(10, 2,12);
    T2.setTime(30, 10,45);
    T3 = T1.add(T2);
    T3.displayTime();
    getch();
    return 0;
}