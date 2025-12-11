#include <iostream>
using namespace std;

int main()
{
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // int matrix[4][3];
    int rows = 4;
    int cols = 3;

    int key = 10;

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin>> matrix[i][j];
    //     }
    // }  

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == key)
            {
                // pair<int, int> p = {i, j};
                auto p = make_pair(i, j);
                // auto [i, j] = p;
                cout<< p.first << ", " << p.second;

            }
            
        }
        // cout<< '\n';
    }
    cout<< '\n';

    // cout<< matrix[1][1] << '\n';

    
    return 0;
}