#include <iostream>
#include<stdlib.h>
using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
int n;

void Draw()
{
    system("cls");
    cout << "PLAYER - 1 [X] PLAYER - 2 [O]" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << matrix[0][0] << "  | " << matrix[0][1] << "   |  " << matrix[0][2] << " " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << matrix[1][0] << "  | " << matrix[1][1] << "   |  " << matrix[1][2] << " " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << matrix[2][0] << "  | " << matrix[2][1] << "   |  " << matrix[2][2] << " " << endl;
    cout << "     |     |     " << endl;
}
void Input()
{
    int a;
    cout << "It's " << player << " turn. " << "Enter number on board: ";
    cin >> a;

    if (a == 1)
    {
        if (matrix[0][0] == '1')
            matrix[0][0] = player;
        else
        {
            cout << "Board index already in use!" << endl;
            Input();
        }
    }
    else if (a == 2)
    {
        if (matrix[0][1] == '2')
            matrix[0][1] = player;
        else
        {
            cout << "Board index already in use!" << endl;
            Input();
        }
    }
    else if (a == 3)
    {
        if (matrix[0][2] == '3')
            matrix[0][2] = player;
        else
        {
            cout << "Board index already in use!" << endl;
            Input();
        }
    }
    else if (a == 4)
    {
        if (matrix[1][0] == '4')
            matrix[1][0] = player;
        else
        {
            cout << "Board index already in use!" << endl;
            Input();
        }
    }
    else if (a == 5)
    {
        if (matrix[1][1] == '5')
            matrix[1][1] = player;
        else
        {
            cout << "Board index already in use!" << endl;
            Input();
        }
    }
    else if (a == 6)
    {
        if (matrix[1][2] == '6')
            matrix[1][2] = player;
        else
        {
            cout << "Board index already in use!" << endl;
            Input();
        }
    }
    else if (a == 7)
    {
        if (matrix[2][0] == '7')
            matrix[2][0] = player;
        else
        {
            cout << "Board index already in use!" << endl;
            Input();
        }
    }
    else if (a == 8)
    {
        if (matrix[2][1] == '8')
            matrix[2][1] = player;
        else
        {
            cout << "Board index already in use!" << endl;
            Input();
        }
    }
    else if (a == 9)
    {
        if (matrix[2][2] == '9')
            matrix[2][2] = player;
        else
        {
            cout << "Board index already in use!" << endl;
            Input();
        }
    }
    else
        cout << endl << "Invalid input, please try again!" << endl;

}
void TogglePlayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
} 

int prevmat;
int flag = 0;
char Wincondition()
{
    /*if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';      
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
     
        
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';*/
     
    bool rowwin = true;
    for (int i = 0; i < 3; i++)
    {
       //cout<<"i" << i << " ";
        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] != matrix[i][0]) {
                rowwin = false;
                //cout << "j" << j << " ";
                break;
            }
           //cout << "da";
            else {
                rowwin = true;
            }
        }
        //cout << "g";
    if (rowwin == true) {
        //cout << "y";
        return player ;
       // break;
    }
    
       
    }
   
    
   /*
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';

     if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';
    */
    bool colwin = true;
    for (int j = 0; j < 3; j++)
    {
        //cout<<"i" << i << " ";
        for (int i = 1; i < 3; i++) {
            if (matrix[i][j] != matrix[0][j]) {
                colwin = false;
                //cout << "j" << j << " ";
                break;
            }
            //cout << "da";
            else {
                colwin = true;
            }

        }
        //cout << "g";
        if (colwin == true) {
            //cout << "y";
            return player;
            // break;
        }


    }

    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';

    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    else            
    return '/';
    
}

int main()
{
    n = 0;
    Draw();
    while (true)
    {
        n++;
        Input();
        Draw();
       //Wincondition();  
       if (Wincondition() == 'O')
       {
           cout << "O wins!" << endl;
           break;
       }
        
        else if (Wincondition() == 'X')
       {
           cout << "X wins!" << endl;
           break;
       }
        else if (Wincondition() == '/' && n == 9)
        {
            cout << "It's a draw!" << endl;
            break;
        }
        TogglePlayer();
    }
    return 0;
}