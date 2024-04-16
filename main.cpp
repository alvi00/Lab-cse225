#include <bits/stdc++.h>
using namespace std;
int main()
{

    int row;
    cout << "Enter the number of rows " << endl;
    cin >> row;
    int *col = new int[row];
    cout << "Enter the number of elements there will be in different rows " << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "Enter the number of elements in the " << i + 1 << " row ";
        cin >> col[i];
    }
    int **dynamic_array_of_the_array = new int *[row];
    for (int i = 0; i < row; i++)
    {
        dynamic_array_of_the_array[i] = new int[col[i]];
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cout << "Enter the value for [" << i << "] [" << j << "] = ";
            cin >> dynamic_array_of_the_array[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cout << "The value of  [" << i << "] [" << j << "] is ";
            cout << dynamic_array_of_the_array[i][j] << endl;
        }
    }

    for (int i = 0; i < row; i++)
    {
        delete[] dynamic_array_of_the_array[i];
    }
    delete[] dynamic_array_of_the_array;
    delete[] col;
    return 0;
}
