/* control_board.c */

#include <reversi.h>
#include <stdbool.h>

void copy_board(STONE board[N][N], STONE bcopy[N][N]){
  int x, y;
  for(x=0; x<N; x++)
    for(y=0; y<N; y++)
      bcopy[x][y] = board[x][y];
  return;
}

int set(STONE board[N][N], int X, int Y, int turn){
	int pos = 0;

	if(X < 0 || X >=N || Y < 0 || Y >= N){
		return 0;
	}

	pos =  reverseUp(board, X, Y, turn) + reverseDown(board, X, Y, turn)
	     + reverseLeft(board, X, Y, turn) + reverseRight(board, X, Y, turn)
	     + reverseUpLeft(board, X, Y, turn) + reverseUpRight(board, X, Y, turn)
	     + reverseDownLeft(board, X, Y, turn) + reverseDownRight(board, X, Y, turn);
	if(pos)
		board[X][Y] = turn;
	return pos;
}

int calc(STONE board[N][N], int X, int Y, int turn){
	int sum;
	STONE bcopy[N][N];
  copy_board(board, bcopy);
	
	sum =  reverseUp(bcopy, X, Y ,turn)
       + reverseDown(bcopy, X, Y, turn)
	     + reverseLeft(bcopy, X, Y, turn)
       + reverseRight(bcopy, X, Y, turn)
	     + reverseUpLeft(bcopy, X, Y, turn)
       + reverseUpRight(bcopy, X, Y, turn)
	     + reverseDownLeft(bcopy, X, Y, turn)
       + reverseDownRight(bcopy, X, Y, turn);

	return sum;
}

bool possible(STONE board[N][N], int turn){
	int x, y;
	
	for(x = 0; x < N; x++){
		for(y = 0; y < N; y++){
			if(calc(board, x, y, turn))
        return false;
		}
	}	
	return true;
}

void initializeBoard(STONE board[N][N]){
	board[3][3] =  1; board[4][4] =  1;
	board[3][4] =  2; board[4][3] =  2;
	return;
}

