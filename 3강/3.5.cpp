#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    int x, y;

    cin >> x >> y;
    cout << x << " " << y << endl;

    if (x == y)
    {
        cout << "equal" << endl;
    }
    if (x != y)
    {
        cout << "not equal" << endl;
    }
    if (x > y)
    {
        cout << "x is greater than y" << endl;
    }
    if (x < y)
    {
        cout << "x is less than y" << endl;
    }
    if (x >= y)
    {
        cout << "x is greater or equal to y" << endl;
    }
    if (x <= y)
    {
        cout << "x is less than or equal to y" << endl;
    }

    double d1(100 - 99.99); // 0.001;
    double d2(10 - 9.99);   // 0.001;

    if (d1 == d2) //not equal!
        cout << "equal" << endl;
    else
    {
        cout << "not equal" << endl;
        if (d1 > d2) cout << "d1 < d2" << endl;
        else cout << "d1 > d2" << endl;
    }

    const double epsilon = 1e-10;

    if (std::abs(d1 - d2) < epsilon)  //std::abs requires cmath
        cout << "Approxmately equal" << endl;
    else
        cout << "not equal" << endl;

    cout << std::abs(d1 - d2) << endl; //std::abs requires cmath

    return 0;
}