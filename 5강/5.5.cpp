#include <iostream>

int main()
{
    using namespace std;

    int count = 0;
    //while (count < 10)
    while (1)
    {
        cout << count << endl;
        count++;

        if (count == 10) break;
    }

    unsigned count = 10;

    while (count >= 0) //오버플로우 발동!
    {
        if (count == 0) cout << "Zero" << endl;
        else cout << count << " ";

        count--;
    }

    return 0;
}