#include <iostream>

int main()
{
    using namespace std;
    
    int count = 0;
    while (true)
    {
        cout << count << endl;
        if (count == 10) break;
        count++;
    }

    while (true)
    {
        char ch;
        cin >> ch;

        if (ch == 'b')
            break;

        if (ch == 'r')
            return 0;
    }
    cout << "Hello" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        if (i == 5) break;
    }

    //continue

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            continue;
        cout << i << endl;
    }

    int count(0);

    do
    {
        if (count == 5)
            continue;
        cout << count << endl;

    } while (++count < 10); // ++count로 continue가 진행되어도 count의 값이 바뀌도록 한다.

    while (true)
    {
        char ch;
        cin >> ch;

        cout << ch << " " << count << endl;

        if (ch == 'x')
            break;
    }

    return 0;
}