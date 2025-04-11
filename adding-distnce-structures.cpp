//Distance structures
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    struct distance{
        int inch, feet;
    };
    struct distance d1, d2, d3;
    top:
    system("cls");
    cout<<"Enter first distance (feet - inches): ";
    cin>>d1.feet>>d1.inch;
    if(d1.inch > 11 )
    {
        cout<<"wrong input. redirecting.."<<endl;
        getch();
        goto top;
    }
    top2:
    cout<<"Enter second distance (feet - inches): ";s
    cin>>d2.feet>>d2.inch;

    if(d2.inch > 11 )
    {
        cout<<"wrong input. redirecting.."<<endl;
        getch();
        goto top2;
    }
    cout<<"total distance is : "<<endl;
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;
    if(d3.inch >= 12)
    {
        d3.inch -= 12;
        d3.feet++;
        
    }
    
    cout<<"feet"<<'\t'<<"inche"<<endl;
    cout<<d3.feet<<'\t'<<d3.inch<<endl;
    getch();
    return 0;
}