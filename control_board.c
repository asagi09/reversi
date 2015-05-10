/* control_board.c */

#include <stdio.h>
#include <reversi.h>

extern int reverseUp(int board[N][N], int X, int Y, int turn);
extern int reverseDown(int board[N][N], int X, int Y, int turn);
extern int reverseLeft(int board[N][N], int X, int Y, int turn);
extern int reverseRight(int board[N][N], int X, int Y, int turn);
extern int reverseUpLeft(int board[N][N], int X, int Y, int turn);
extern int reverseUpRight(int board[N][N], int X, int Y, int turn);
extern int reverseDownLeft(int board[N][N], int X, int Y, int turn);
extern int reverseDownRight(int board[N][N], int X, int Y, int turn);

void copyBoard(int board[][], int bcopy[][]){
  int X, Y;
  for(X=0; X<N; X++)
    for(Y=0; Y<N; Y++)
      bcopy[X][Y] = board[X][Y]
  return;
}

int Set(int b[N][N], int n, int m, int t){
	int pos = 0;
	if(n < 0 || n >= N || m < 0 || m >= N){
		return 0;
	}
	pos =  reverseUp(board, n, m, turn) + reverseDown(board, n, m, turn)
	     + reverseLeft(board, n, m, turn) + reverseRight(board, n, m, turn)
	     + reverseUpLeft(board, n, m, turn) + reverseUpRight(board, n, m, turn)
	     + reverseDownLeft(board, n, m, turn) + reverseDoRight(board, n, m, turn);
	if(pos)
		b[n][m] = turn;
	return pos;
}

int Calc(int board[N][N], int X, int Y, int turn){
	int sum;
	int bcopy[N][N];
	
  copyBoard(board, bcopy);
	
	sum =  reverseUp(bcopy, X, Y turn)
       + reverseDown(bcopy, X, Y, turn)
	     + reverseLeft(bcopy, X, Y, turn)
       + reverseRight(bcopy, X, Y, turn)
	     + reverseUpLeft(bcopy, X, Y, turn)
       + reverseUpRight(bcopy, X, Y, turn)
	     + reverseDownLeft(bcopy, X, Y, turn)
       + reverseDownRight(bcopy, X, Y, turn);

	return sum;
}

int Possible(int board[][], int turn){
	int X, Y;
	
	for(X = 0; X < N; X++){
		for(Y = 0; Y < N; Y++){
			if(Calc(board, X, Y, turn)) return 1;
		}
	}	
	return 0;
}

void initializeBoard(int board[][]){
	board[3][3] =  1; board[4][4] =  1;
	board[3][4] = -1; board[4][3] = -1;
	return;
}

