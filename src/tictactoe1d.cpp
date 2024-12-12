// Function (displayBoard) : To display the board with 3x3 grid structure
// Function (check) : To check a winning condition - row, coloumn or a diagonal
// Function (playerTurn) : To Loop until a valid input is inserted
// Function (checkTie) : To check if its a tie or not
// Function (clearScreen) : To clear the screen (Works in terminal)

// Main Function :-
// To alternate between Player 1 & 2
// Ends game when it finds winner or a tie


#include <iostream>
using namespace std;

void displayBoard(char array[], int size)
{
    for(int i = 0; i<size; i++)
    {
        if(i % 3 == 0)
        {
            cout << endl;
            cout << "+-----------+" << endl;
            cout << "| ";
        }
        cout << array[i] << " | ";
    }
    cout << endl << "+-----------+" << endl;
    cout << endl;
}

bool check(char array[])
{
    if(array[0] == array[1] && array[1] == array[2])
    {
        return true;
    }
    
    if(array[3] == array[4] && array[4] == array[5])
    {
        return true;
    }
    
    if(array[6] == array[7] && array[7] == array[8])
    {
        return true;
    }
    
    if(array[0] == array[3] && array[3] == array[6])
    {
        return true;
    }
    
    if(array[1] == array[4] && array[4] == array[7])
    {
        return true;
    }
    
    if(array[2] == array[5] && array[5] == array[8])
    {
        return true;
    }
    
    if(array[0] == array[4] && array[4] == array[8])
    {
        return true;
    }
    
    if(array[2] == array[4] && array[4] == array[6])
    {
        return true;
    }
    
    return false;
}

int playerTurn(char array[], char turn)
{
    int position;
    while (true)
    {
        cout << "Player ";
        if (turn == 'X')
        {
            cout << "1";
        }
        else
        {
            cout << "2";
        }
        cout << "'s Turn: ";
        cin >> position;

        if (position < 1 || position > 9)
        {
            cout << "Invalid input. Enter again: " << endl;
            continue;
        }
        
        if (array[position - 1] == 'X' || array[position - 1] == 'O')
        {
            cout << "Position already taken. Enter again: " << endl;
            continue;
        }
        
        break;
    }
    return position - 1;
}

bool checkTie(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] != 'X' && array[i] != 'O')
        {
            return false;
        }
    }
    
    return true;
}

void clearScreen()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main()
{
    const int size = 9;
    char array[size] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char turn = 'X';

    while (true)
    {
        clearScreen();
        displayBoard(array, 9);
        
        int position = playerTurn(array, turn);
        array[position] = turn;

        if (check(array))
        {
            clearScreen();
            displayBoard(array, 9);
            cout << "Player ";
            if (turn == 'X')
                cout << "1";
            else
                cout << "2";
            cout << " wins!\n";
            break;
        }

        if (checkTie(array, size))
        {
            clearScreen();
            displayBoard(array, 9);
            cout << "Game Tie" << endl;
            break;
        }
        
        if (turn == 'X')
        {
            turn = 'O';
        }
        else
        {
            turn = 'X';
        }
    }

    return 0;
}
