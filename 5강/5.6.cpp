#include <iostream>

int main()
{
    using namespace std;

    int selection;

    do
    {
        cout << "1. add" << endl;
        cout << "2. sub" << endl;
        cout << "3. mult" << endl;
        cout << "4. div" << endl;
        cin >> selection;
    } while (selection <= 0 || selection >= 5);  //do - while 다음에 ; 찍어야함

    cout << "You selected " << selection << endl;

    return 0;
}