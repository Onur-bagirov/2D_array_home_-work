#include <iostream>
using namespace std;

void AddNumberX(int** new_array, int** arr)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            new_array[i][j] = arr[i][j] * arr[3 - i][j];
        }
    }
}

void AddNumberY(int** new_array, int** arr)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            new_array[i][j] = arr[i][j] * arr[i][3 - j];
        }
    }
}

void FindNumberColumn(int* min_col, int** arr)
{
    for (int i = 0; i < 4; i++)
    {
        int min_number = arr[0][i];

        for (int j = 1; j < 4; j++)
        {
            if (arr[j][i] < min_number)
            {
                min_number = arr[j][i];
            }
        }

        min_col[i] = min_number;
    }
}

void FindNumberRow(int* min_row, int** arr)
{
    for (int i = 0; i < 4; i++)
    {
        int min_number = arr[i][0];

        for (int j = 1; j < 4; j++)
        {
            if (arr[i][j] < min_number)
            {
                min_number = arr[i][j];
            }
        }

        min_row[i] = min_number;
    }
}

void PrintArray(int** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << ",";
        }
        cout << endl;
    }
}

void PrintArrayOne(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}

void main()
{
    cout << "Array : ";

    cout << "\n\n";

    int** arr = new int* [4] 
    {
            new int[4] {1, 2, 3, 4},
            new int[4] {6, 7, 8, 9},
            new int[4] {1, 2, 3, 4},
            new int[4] {5, 4, 3, 2}
    };

    PrintArray(arr, 4, 4);

    cout << "\n\n";
    cout << "======================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n";

    int** new_array_one = new int* [2];

    for (int i = 0; i < 2; i++)
    {
        new_array_one[i] = new int[4];
    }

    cout << "\n\n";

    AddNumberX(new_array_one, arr);

    cout << "Output x : ";

    cout << "\n\n";

    PrintArray(new_array_one, 2, 4);

    cout << "\n\n";
    cout << "======================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n";

    int** new_array_two = new int* [2];

    for (int i = 0; i < 2; i++)
    {
        new_array_two[i] = new int[4];
    }

    cout << "\n\n";

    AddNumberY(new_array_two, arr);

    cout << "Output y : ";

    cout << "\n\n";

    PrintArray(new_array_two, 2, 4);

    cout << "\n\n";
    cout << "======================";
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n";

    int min_number_one[4];
    FindNumberColumn(min_number_one, arr);

    cout << "Min number column : ";

    cout << "\n\n";

    PrintArrayOne(min_number_one, 4);

    cout << "\n\n";
    cout << "======================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n";

    int min_number_two[4];
    FindNumberRow(min_number_two, arr);

    cout << "Min number row : ";

    cout << "\n\n";

    PrintArrayOne(min_number_two, 4);

    cout << "\n\n";
    cout << "======================";
}
