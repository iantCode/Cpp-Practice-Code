#include <iostream>

namespace a
{
    int my_var(10);
}
namespace b
{
    int my_var(20);
}

int main()
{
    using namespace std;
    using std::cout;    //cout만 using 할 경우에는 다음과 같이 사용이 가능하다.
    using std::endl;

    cout << "Hello, World!" << endl;

    /*
        using namespace a;
        using namespace b;

        //cout << my_var << endl; //my_var is ambiguous!
        cout << a::my_var << endl;
        cout << b::my_var << endl;
    */
    {
        using namespace a;
        cout << my_var << endl;
    }
    {
        using namespace b;
        cout << my_var << endl;
    }

    return 0;
}