#include <iostream>
#define N 8
using namespace std;

void prints(int board[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<" "<<board[i][j]<<" ";
        }
        printf("\n");
    }

}

bool isSafe(int board[N][N],int row,int col){

    int i,j;

    for(i=0;i<col;i++){
        if(board[row][i]){
            return  false;
        }
    }

    for(i=row,j=col;i>=0 && j>=0;i--,j--){
        if(board[i][j]){
            return false;
        }
    }

    for (i = row, j = col; j >= 0 && i < N; i++, j--)
    {
        if (board[i][j])
        {
            return false;
        }
    }

    return true;
}

bool solveNQ(int board[N][N],int col){

    if(col>=N){
        return true;
    }

    for(int i=0;i<N;i++){
        if(isSafe(board,i,col)){
            board[i][col]=1;
            if(solveNQ(board,col+1)){
                return true;
            }
        }
        board[i][col]=0;
    }
    return false;
}

int main(){
    int board[N][N];
    for(int i=0;i<N;i++){
        for (int j = 0; j < N; j++)
        {
            board[i][j] = 0;
        }
    }
    if (solveNQ(board, 0) == false)
    {
        printf("Solution not exits");
    }
    else
    {
        prints(board);
    }
}
