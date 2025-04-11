// Subtracting time using structures
// Date: 2023-10-01
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    struct time{
        int hours, minutes, second ;
    };
    struct time T1, T2, T3;
    system("cls");
    cout<<"Enter first time (hours - minutes - seconds): ";
    cin>>T1.hours>>T1.minutes>>T1.second ;
    
    cout<<"Enter second time (hours - minutes - seconds): ";
    cin>>T2.hours>>T2.minutes>>T2.second ;
    
    T3.second  = T1.second  - T2.second ;
    if(T2.second  > T1.second)
    {
        T3.second  += 60;
        T3.minutes--;
        
        
    }
    
    T3.minutes  = T1.minutes  - T2.minutes ;

    if(T2.minutes > T1.minutes )
    {   T3.minutes += 60; T3.hours--;}
    
    
    T3.hours = T1.hours - T2.hours;
    if(T3.hours <=0 )
    {
        T3.hours += 12;
    }
    cout<<"hours"<<'\t'<<"minutes"<<'\t'<<"seconds"<<endl;
    
    cout<<"\nThe time Was: "<<endl;
    cout<<T3.hours<<'\t'<<T3.minutes<<'\t'<<T3.second<<endl;
    getch();
    return 0;
}