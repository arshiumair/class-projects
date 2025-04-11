// Subtracting distance using structures
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    struct distance{
        int inch, feet;
    };
    struct distance d1, d2, d3;
    system("cls");
    cout<<"Enter first distance (feet - inches): ";
    cin>>d1.feet>>d1.inch;
   
    cout<<"Enter second distance (feet - inches): ";
    cin>>d2.feet>>d2.inch;

    cout<<"total distance is : "<<endl;
    d3.feet = d1.feet - d2.feet;
    d3.inch = d1.inch - d2.inch;
    if(d2.inch > d1.inch)
    {
        d3.inch += 12;
        d3.feet--;
        
    }
    if(d3.feet < 0)
    {cout<<"wrong input, Exiting..."; return 1;}
    
    cout<<"feet"<<'\t'<<"inche"<<endl;
    cout<<d3.feet<<'\t'<<d3.inch<<endl;
    getch();
    return 0;
}