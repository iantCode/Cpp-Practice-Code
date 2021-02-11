#include <iostream>

using namespace std;

namespace MyPlace
{
    namespace MyInPlace
    {
        int sayHello(void)
        {
            cout << "Hello, World" << endl;

            return 0;
        }
    }
    int sayHello(void)
    {
        cout << "Hello, World!" << endl;

        return 0;
    }
}

int sayHello(void)
{
    cout << "Hello, World!!" << endl;

    return 0;
}

int main()
{
    MyPlace::MyInPlace::sayHello();
    MyPlace::sayHello();
    sayHello();

    return 0;
}