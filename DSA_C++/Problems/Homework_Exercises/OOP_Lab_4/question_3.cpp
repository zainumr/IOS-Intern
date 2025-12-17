#include <iostream>
using namespace std;

void transposed(int** matrix, int rows, int cols)
{
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout<< matrix[j][i] << ' ';
        }
        cout<< '\n';
    }
}

/*
    ================= Problem 3: Dynamic 2D Array =================
    1. Ask the user for the number of rows and columns.
    2. Dynamically allocate a 2D array using pointers-to-pointers.
    3. Take input for all elements.
    4. Print the matrix in proper format.
    5. Pass the double pointer to a function transpose(int** arr, int r, int c) that prints the transpose of
    the matrix.

*/

int main()
{
    // 1
    int rows, cols;
    cout<< "Enter Rows & Column: ";
    cin>> rows;
    cin>> cols;

    // 2
    int** matrix = new int*[rows]; // {{pR},{pR}}
    for (int i = 0; i < rows; i++) 
    {
        matrix[i] = new int[cols]; // {{pC}, {pC}, {pC}}
    }
    
    // 3
    cout<< "Enter number: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>> matrix[i][j];
        }
    }

    // 4, 5
    transposed(matrix, rows, cols);

    // memory released
    for (int i = 0; i < rows; i++) delete[] matrix[i];
    delete[] matrix;
    matrix = nullptr;
    
    

    



    return 0;
}