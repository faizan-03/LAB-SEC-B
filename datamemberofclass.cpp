#include <iostream>

using namespace std;

class Test
{
private:
    int x;

public:

    void show()
    {
        cout << "Object address: " << this << endl;
        cout << "Data member x address: " << &x << endl;
    }
};

int main()
{
    Test obj;
    obj.show();

    Test obj2;
    obj2.show();

    void (Test::*f1)() = &Test::show;
    void (Test::*f2)() = &Test::show;
    cout << boolalpha << "Same member function pointer: " << (f1 == f2) << endl;

    return 0;
}
