#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

void fillBoard(char board[8][8], int sizeX, int sizeY);
void emptyBoard(char board[8][8], int sizeX, int sizeY);
void printBoard(char board[8][8], int sizeX, int sizeY);
bool checkBoard(char board[8][8], int sizeX, int sizeY);

int main() 
{
    // Sets random seed.
    srand(time(NULL));
    
    // Game board.
    char board[8][8];
    fillBoard(board, 8, 8);
    printBoard(board, 8, 8);
    
    if(checkBoard(board, 8, 8))
    {
        cout << "\nQueen can eat soldier!" << endl;
    } else {
        cout << "\nQueen can't eat soldier!" << endl;
    }
}

void fillBoard(char board[8][8], int sizeX, int sizeY)
{
    // Makes board empty.
    emptyBoard(board, 8, 8);
    
    // Sets symbols for queen and soldier.
    char soldier = 'S';
    char queen = 'Q';
    
    // Generates random x and y.
    int randX = rand() % 8 + 0;
    int randY = rand() % 8 + 0;
    
    // Sets queeen to generated location.
    board[randY][randX] = queen;
    
    // Creates five soldiers to random locations.
    for(int i = 0; i < 5; i++)
    {
        randX = rand() % 8 + 0;
        randY = rand() % 8 + 0;
        
        // Checks if location is empty and then insert soldier
        // or in case of reserved location tells program to 
        // generate new soldier.
        if(board[randY][randX] == '-')
        {
            board[randY][randX] = soldier;
        } else 
        {
            i--;
        }
    }
    
}

void emptyBoard(char board[8][8], int sizeX, int sizeY)
{
    // Goes through board and sets '-' char to all locations.
    for(int x = 0; x < sizeX; x++)
    {
        for(int y = 0; y < sizeY; y++)
        {
            board[y][x] = '-';
        }
    }
}

void printBoard(char board[8][8], int sizeX, int sizeY)
{
    for(int x = 0; x < sizeX; x++)
    {
        for(int y = 0; y < sizeY; y++)
        {
            cout << board[y][x];
        }
        
        cout << endl;
    }
}

bool checkBoard(char board[8][8], int sizeX, int sizeY)
{
    int queenX;
    int queenY;
    bool result = false;
    
    // Finds location of queen from board.
    for(int x = 0; x < sizeX; x++)
    {
        for(int y = 0; y < sizeY; y++)
        {
            if(board[y][x] == 'Q')
            {
                queenX = x;
                queenY = y;
            }
        }
    }
    
    // Checks vertical line for soldiers.
    for(int i = 0; i < sizeY; i++)
    {
        if(board[i][queenX] == 'S') 
        {
            result = true;
        }
    }
    
    // Checks horizontal line for soldiers.
    for(int i = 0; i < sizeX; i++)
    {
        if(board[queenY][i] == 'S') 
        {
            result = true;
        }
    }
    
    // Checks diagonal lines for soldiers.
    int diagCheck;
    
    // From queen to right up.
    diagCheck = queenY;
    for (int i = queenX; i < 8; i++) {
        if(board[diagCheck][i] == 'S')
        {
            result = true;
        }
        diagCheck++;
    }
    
    // From queen to right down
    diagCheck = queenY;
    for (int i = queenX; i < 8; i++) {
        if(board[diagCheck][i] == 'S')
        {
            result = true;
        }
        diagCheck--;
    }
    
    // From queen to left down
    diagCheck = queenY;
    for (int i = queenX; i > 0; i--) {
        if(board[diagCheck][i] == 'S')
        {
            result = true;
        }
        diagCheck--;
    }
    
    // From queen to left up
    diagCheck = queenY;
    for (int i = queenX; i > 0; i--) {
        if(board[diagCheck][i] == 'S')
        {
            result = true;
        }
        diagCheck++;
    }
    
    return result;
}

