#include <iostream>
using namespace std;
class test
{
    private:
    int i, j;
    public:
    void get()
    {
        cin>> i >> j;
    }

    void display()
    {
        cout << "i = " << i << "j = " << j << endl;
    }
};
class test2
{
    private:
    int a, b;
    public:
    void get()
    {
        cin>> a >> b;
    }

    void display()
    {
        cout << "i = " << a << "j = " << b << endl;
    }
};
int main(){
    test t1; 
    test2 t2;
    t1.get();
    t2.get();
    t1.display();
    t2.display();
    
    return 0;
}
