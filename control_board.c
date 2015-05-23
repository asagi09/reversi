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

	pos =  reverse_left(board, X, Y, turn) + reverse_right(board, X, Y, turn)
	     + reverse_up(board, X, Y, turn) + reverse_down(board, X, Y, turn)
	     + reverse_left_up(board, X, Y, turn) + reverse_right_down(board, X, Y, turn)
	     + reverse_right_up(board, X, Y, turn) + reverse_right_down(board, X, Y, turn);
	if(pos)
		board[X][Y] = turn;
	return pos;
}

int calc(STONE board[N][N], int X, int Y, int turn){
	int sum;
	STONE bcopy[N][N];
  copy_board(board, bcopy);
	
	sum =  reverse_left(bcopy, X, Y ,turn) + reverse_right(bcopy, X, Y, turn)
	     + reverse_up(bcopy, X, Y, turn) + reverse_down(bcopy, X, Y, turn)
	     + reverse_left_down(bcopy, X, Y, turn) + reverse_left_down(bcopy, X, Y, turn)
	     + reverse_right_up(bcopy, X, Y, turn) + reverse_right_down(bcopy, X, Y, turn);

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

