// Subtracting Two Date Structures
// Date: 2023-10-01
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    struct date{
        int years, month, day ;
    };
    struct date D1, D2, D3;
    system("cls");
    cout<<"Enter first distance (years - month - days): ";
    cin>>D1.years>>D1.month>>D1.day ;
   
    cout<<"Enter day distance (years - month - days): ";
    cin>>D2.years>>D2.month>>D2.day ;
    
    D3.years = D1.years - D2.years;
    D3.month  = D1.month  - D2.month ;
    D3.day  = D1.day  - D2.day ;
    if(D2.day  > D1.day)
    {
        D3.day += 30;
        D3.month--;
        if(D2.month > D1.month)
        {   D3.month += 12 ; D3.years--;}
        
    }
    
    if(D3.years<0 || D3.month < 0 )
    {
        cout<<"\nrecheck input. Exiting....";
        return 1;
    }
    cout<<"\ntotal distance is: "<<endl;
    cout<<"years"<<'\t'<<"month"<<'\t'<<"days"<<endl;
    cout<<D3.years<<'\t'<<D3.month<<'\t'<<D3.day<<endl;

    return 0;
}