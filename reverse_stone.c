/* reverse_stone.c */

#include <reversi.h>

int reverse_left(STONE board[N][N], int X, int Y, int turn){
	int c=1;
	int sum;
	
	while(!(board[X-c][Y] == turn)){ // find a stone that is same colors
		if(X-c < 0 || board[X-c][Y] == 0) // search out of the board or empty
			return 0;
		if(board[X-c][Y] == turn^3) // find a stone that is opposite colors
			c++;
	}

  sum = c-1; // set return value
  while(c > 1){ // reverse stones
    c--;
    board[X-c][Y] = turn;
  }

  return sum;
}

int reverse_right(STONE board[N][N], int X, int Y, int turn){
	int c=1;
	int sum;
	
	while(!(board[X+c][Y] == turn)){ // find a stone that is same colors
		if(X+c == N || board[X+c][Y] == 0) // search out of the board or empty
			return 0;
		if(board[X+c][Y] == turn^3) // find a stone that is opposite colors
			c++;
	}

  sum = c-1; // set return value
  while(c > 1){ // reverse stones
    c--;
    board[X+c][Y] = turn;
  }

  return sum;
}

int reverse_up(STONE board[N][N], int X, int Y, int turn){
	int c=1;
	int sum;
	
	while(!(board[X][Y-c] == turn)){ // find a stone that is same colors
		if(Y-c < 0 || board[X][Y-c] == 0) // search out of the board or empty
			return 0;
		if(board[X][Y-c] == turn^3) // find a stone that is opposite colors
			c++;
	}

  sum = c-1; // set return value
  while(c > 1){ // reverse stones
    c--;
    board[X][Y-c] = turn;
  }

  return sum;
}


int reverse_down(STONE board[N][N], int X, int Y, int turn){
	int c=1;
	int sum;
	
	while(!(board[X][Y+c] == turn)){ // find a stone that is same colors
		if(Y+c == N || board[X][Y+c] == 0) // search out of the board or empty
			return 0;
		if(board[X][Y+c] == turn^3) // find a stone that is opposite colors
			c++;
	}

  sum = c-1; // set return value
  while(c > 1){ // reverse stones
    c--;
    board[X][Y+c] = turn;
  }

  return sum;
}

int reverse_left_up(STONE board[N][N], int X, int Y, int turn){
	int c=1;
	int sum;
	
	while(!(board[X-c][Y-c] == turn)){ // find a stone that is same colors
		if(X-c < 0 || Y-c < 0|| board[X-c][Y-c] == 0) // search out of the board or empty
			return 0;
		if(board[X-c][Y-c] == turn^3) // find a stone that is opposite colors
			c++;
	}

  sum = c-1; // set return value
  while(c > 1){ // reverse stones
    c--;
    board[X-c][Y-c] = turn;
  }

  return sum;
}

int reverse_left_down(STONE board[N][N], int X, int Y, int turn){
	int c=1;
	int sum;
	
	while(!(board[X+c][Y-c] == turn)){ // find a stone that is same colors
		if(X-c == N || Y-c < 0|| board[X+c][Y-c] == 0) // search out of the board or empty
			return 0;
		if(board[X+c][Y-c] == turn^3) // find a stone that is opposite colors
			c++;
	}

  sum = c-1; // set return value
  while(c > 1){ // reverse stones
    c--;
    board[X+c][Y-c] = turn;
  }

  return sum;
}

int reverse_right_up(STONE board[N][N], int X, int Y, int turn){
	int c=1;
	int sum;
	
	while(!(board[X-c][Y+c] == turn)){ // find a stone that is same colors
		if(X-c < 0 || Y+c == N|| board[X-c][Y+c] == 0) // search out of the board or empty
			return 0;
		if(board[X-c][Y+c] == turn^3) // find a stone that is opposite colors
			c++;
	}

  sum = c-1; // set return value
  while(c > 1){ // reverse stones
    c--;
    board[X-c][Y+c] = turn;
  }

  return sum;
}

int reverse_right_down(STONE board[N][N], int X, int Y, int turn){
	int c=1;
	int sum;
	
	while(!(board[X-c][Y-c] == turn)){ // find a stone that is same colors
		if(X+c == N || Y+c == N|| board[X+c][Y+c] == 0) // search out of the board or empty
			return 0;
		if(board[X+c][Y+c] == turn^3) // find a stone that is opposite colors
			c++;
	}

  sum = c-1; // set return value
  while(c > 1){ // reverse stones
    c--;
    board[X+c][Y+c] = turn;
  }

  return sum;
}

