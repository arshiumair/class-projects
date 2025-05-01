#include <iostream>
using namespace std;
class test
{
    private:
    int i, j;
    public:
    void get()
    {
        cin >> i >> j;
    }

    test operator +(test pob)
    {
        test temp;
        temp.i = i + pob.i;
        temp.j = j + pob.j;
        return temp;
      
    }
    void display()
    {
      cout<<"i = " << i <<"j = "<< j;
    }
};
int main(){
    test t1, t2, t3; 
    t1.get();
    t2.get();
    t3 = t1+t2;
    t3.display();
    return 0;
}
