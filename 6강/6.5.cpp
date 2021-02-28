#include <iostream>

int main()
{
    using namespace std;

    const int num_rows = 3;
    const int num_columns = 5;

    // print Index
    for (int row = 0; row < num_rows; row++)
    {
        for (int col = 0; col < num_columns; col++)
        {
            cout << "[" << row << "]" << "[" << col << "]" << '\t';
        }
        cout << endl;
    }

    int array[num_rows][num_columns] = 
    {
        {1, 2, 3, 4, 5},        //row 0
        {6, 7, 8, 9, 10},       //row 1
        {11, 12, 13, 14, 15}    //row 2
    };
    array[0][0] = 1;

    for (int row = 0; row < num_rows; row++)
    {
        for (int col = 0; col < num_columns; col++)
        {
            cout << array[row][col] << '\t';
        }
        cout << endl;
    }

    for (int row = 0; row < num_rows; row++)
    {
        for (int col = 0; col < num_columns; col++)
        {
            cout << &array[row][col] << '\t';  //다차원 배열도 일차원 배열처럼 취급!
        }
        cout << endl;
    }
}