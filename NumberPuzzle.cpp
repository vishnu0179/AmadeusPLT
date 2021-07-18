#include<iostream>
#include<time.h>
using namespace std;

int getRandomIndex(int n)
{
    srand(time(0));
    return rand() % n;
}

void displayBoard(int mat[][4], int n)
{
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    return;
}

int main()
{
    int arr[15];
    for(int  i =0;i<15;i++)
    {
        arr[i] = i+1;
    }

    for(int i = 15; i > 0; i--) {
        int random_index = getRandomIndex(i);
        swap(arr[i], arr[random_index]);
    }

    int board[4][4];
    int curr = 0;
    for(int i = 0; i<4;i++)
    {
        for(int j = 0 ; j < 4; j++)
        {
            board[i][j] = arr[curr];
            curr++;
        }
    }   

    displayBoard(board, 4);
}