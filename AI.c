/* AI.c */

#include <reversi.h>

// recursuve function
// try to set a stone
int try_to_set(STONE board[N][N], int turn, int count){
	int X, Y;
	int reversed_stones, worst=64;
	STONE bcopy[N][N];
	
	if(count > DEEP)
    return 0;
	
	if(!(possible(board, turn)))
    try_to_set(board, turn^3, count+1);
	
  // copy board
	copy_board(board, bcopy);
	
  // find worst path
	for(X = 0; X < N; X++){
		for(Y = 0; Y < N; Y++){
			if(!board[X][Y])
        continue; // except position that is already set a stone
			if(reversed_stones = calc(board, X, Y, turn))
        reversed_stones -= turn * try_to_set(board, -1*turn, count+1);
      else
        continue; // except position that reverse no stone
      if(worst < reversed_stones)
        worst = reversed_stones;
		}
	}
	
	return worst;
}

void AI(STONE board[N][N], int turn){
	
	try_to_set(board, turn, 0);
	
	return;
}

