#include <iostream>

void printArray(int array[], int length)
{
    using namespace std;
    for (int index = 0; index < length; ++index)
    {
        cout << array[index] << " ";
    }
    cout << endl;
}

int main()
{
    using namespace std;

    //선택 정렬 원리
    /*              value   index
    3 5 2 1 4         1       3
    1 5 2 3 4         2       2
    1 2 5 3 4         3       3
    1 2 3 5 4         4       4
    1 2 3 4 5
    */

    const int length = 5;
    int temp;

    int array[length] = {3, 5, 2, 1, 4};

    printArray(array, length);

    for (int i = 0; i < length - 1; i++)
    {
        int value = array[i];
        int index = i;
        for (int j = i; j < length; j++)
        {
            value = (array[j] < value) ? array[j] : value;
            index = (value == array[j]) ? j : index;
        }

        temp = array[i];
        array[i] = array[index];
        array[index] = temp;

        printArray(array, length);
    }
}