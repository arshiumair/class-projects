#include <iostream>
#include <conio.h>
using namespace std;
class Date{
    private:
    int Day;
    int month;
    int year;

    public:
    void setDate(int h, int m, int s){
        year = h;
        month = m;
        Day = s;
    }

    Date add(Date D1)
    {
        Date tempd;
        tempd.Day = tempd.month = tempd.year = 0;
        tempd.Day = Day + D1.Day;
        if(tempd.Day >= 30){
            tempd.Day = tempd.Day - 30;
            tempd.month ++;
        }
        tempd.month = month + D1.month;
        if(tempd.month >= 30){
            tempd.month = tempd.month - 30;
            tempd.year ++;
        }
        tempd.year += year + D1.year;
        return tempd;
    }

    Date minus(Date D1)
    {
        Date tempd;
        tempd.Day = tempd.month = tempd.year = 0;
        tempd.Day = Day - D1.Day;
        if(tempd.Day < 0){
            tempd.Day = tempd.Day + 30;
            tempd.month --;
        }
        tempd.month = month - D1.month;
        if(tempd.month < 0){
            tempd.month = tempd.month + 30;
            tempd.year --;
        }
        tempd.year -= year - D1.year;
        return tempd;
    }

    void displayDate(){
        cout << "year: " << year << " month: " << month << "Days: "<<Day<< endl;
    }
};

int main()
{
    Date D1, D2, D3;

    D1.setDate(10, 2,12);
    D2.setDate(30, 10,45);
    D3 = D1.add(D2);
    D3.displayDate();
    getch();
    return 0;
}