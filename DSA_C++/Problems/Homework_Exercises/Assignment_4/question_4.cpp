#include <iostream>
#include <utility>
using namespace std;

class TicTacToe
{
private:
    int matrix[3][3];
    static bool nowTurn;
    static int symbol;
    int row1;
    int col1;
    int row2;
    int col2;
    
public:
    TicTacToe()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrix[i][j] = 0;
            }
        }
        
    }

    void displayBoard()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrix[i][j] = 0;

                cout<< matrix[i][j] << (j < 2 ?  " | " : " ");
            }
            cout<< '\n';
        }
    }

    void playerSymbol()
    {
        cout<< "Choose symbol - 1(✔️) or 2(❌): ";
        cin>> symbol;
    }

    void player1()
    {
        cout<< "--- Player 1 ---\n";

        cout<< "Enter Row: ";
        cin>> row1;

        cout<< "Enter col: ";
        cin>> col1;
    }

    void player2()
    {
        cout<< "--- Player 2 ---\n";

        cout<< "Enter Row: ";
        cin>> row2;

        cout<< "Enter col: ";
        cin>> col2;
    }

    

    void inputplayer()
    {
        if (symbol == 1)
        {
            player1();
        }
        else
        {
            player2();
        }
        
    }

};

bool TicTacToe::nowTurn = false;
int TicTacToe::symbol = 0;

/*
    ================= Problem: 4 =================
    1. Create a class TicTacToe that will enable you to write a complete program to play the 
    game of tic-tac-toe. 
    2. The class contains as private data a 3-by-3 two-dimensional array of integers. 
    3. The constructor should initialize the empty board to all zeros. 
    4. Allow two human players. 
    5. Wherever the first player moves, place a 1 in the specified square. Place a 2 wherever the 
    second player moves. 
    6. Each move must be to an empty square. 
    7. After each move, determine whether the game has been won or is a draw. 
    8. If you feel ambitious, modify your program so that the computer makes the moves for one 
    9f the players. 
    10. Also, allow the player to specify whether he or she wants to go first or second. 
    11. If you feel exceptionally ambitious, develop a program that will play three-dimensional 
    tic-tac-toe on a 4-by-4-by-4 board.
*/

int main()
{
    TicTacToe r1;

    return 0;
}