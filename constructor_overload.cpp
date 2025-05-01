#include <iostream>
using namespace std;
class test
{
    private:
    int i, j;
    public:
    test() 
    {
        i = 0; j = 0;
    }
    test(int a)
    {
        i = a; j = 0;
    }
    test(int a, int b)
    {
        i = a; j = b;
    }
    void display()
    {
        cout << "i = " << i << "j = " << j << endl;
    }
};
int main(){
    test t1; 
    test t2(5);
    test t3(5, 10);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}
