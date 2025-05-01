//Overaloading Operator as prefix (++Obj)
#include <iostream>
using namespace std;
class test
{
    private:
    int i, j;

    public:
    void get()
    {
      cin >> i;
      cin >> j;
    }

    void operator ++()
    {
        i ++;
        j ++;
    }
    void display()
    {
        cout << "i = " << i << "j = " << j << endl;
    }
};
int main(){
    test t1; 
    t1.display();
    ++t1;
    t1.display();
    return 0;
}
