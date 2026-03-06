#include <iostream>

using namespace std;

class Test
{
private:
    int x;

public:

    void show()
    {
        cout << "Value: " << &x << endl;
        cout << "Function address: " << &Test::show << endl;
    }
};

int main()
{
    Test obj;
    obj.show();

    Test obj2;
    obj2.show();

    return 0;
}