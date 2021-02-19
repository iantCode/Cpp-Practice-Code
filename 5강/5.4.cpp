#include <iostream>
#include <cmath> //sqrt()

int main()
{
    using namespace std;

    double x;

    tryAgain:

    cout << "Enter a non-negative number" << endl;
    cin >> x;

    if (x < 0.0)
        goto tryAgain;

    cout << sqrt(x) << endl;

    /* 문제가 있는 코드
        goto skip;
        int x = 5;
    skip:
        x += 3;
    */

    return 0;
}