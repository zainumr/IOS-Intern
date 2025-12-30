#include <iostream>
#include <utility>
using namespace std;

class TicTacToe
{
private:
    int board[3][3];
    
public:
    TicTacToe()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = 0;
            }
        }
        
    }

    void displayBoard()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<< board[i][j] << (j < 2 ?  " | " : " ");
            }
            cout<< '\n';

        }
    }

    void makeMove(int player)
    {
        int row, col;
        cout<< "Player " << player << " enter row & column: ";
        cin>> row >> col;

        while (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != 0)
        {
            cout<< "Invalid move! Try again...\n";
            cin>> row >> col;
        }

        board[row][col] = player;
    }

    bool checkWin(int player)
    {
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == player && board[i][1] == player && board[i][2] == player || 
                board[0][i] == player && board[1][i] == player && board[2][i] == player)
            {
                return true;
            }
        }

        if (board[0][0] == player && board[1][1] == player && board[2][2] == player || 
            board[0][2] == player && board[1][1] == player && board[2][0] == player)
        {
            return true;
        }

        return false;
        
    }

    bool checkDraw()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == 0)
                {
                    return false;
                }
            }
        }

        return true;
    }

};


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
    int currPlayer;

    cout<< "--- Round 1 ---\n";
    cout<< "Choose symbol - 1(✔️) or 2(❌): ";
    cin>> currPlayer;
    r1.displayBoard();

    while (true)
    {
        r1.makeMove(currPlayer);
        r1.displayBoard();
        cout<< "\n";

        if (r1.checkWin(currPlayer))
        {
            cout<< "Player " << currPlayer << " Won!\n";
            r1.displayBoard();
            break;
        }

        if (r1.checkDraw())
        {
            cout<< "It's a Draw!\n";
            r1.displayBoard();
            break;
        }
        
        currPlayer = currPlayer == 1 ? 2 : 1;
    }
    
    

    return 0;
}