/* AI.c */

#include <reversi.h>

extern int Possible(int board[][], int turn);
extern int Set(int board[][], int X, int Y, int turn); 
extern int Calc(int board[][], int X, int Y, int turn);
extern void copyBoard(int board[][], int bcopy[][]);

// recursuve function
// try to set a stone
int tryToSet(int board[][], int turn, int count){
	int X, Y;
	int reversed_stones, worst=64;
	int bcopy[N][N];
	
	if(count > N) return 0;
	
	if(!(Possible(board, turn)))
    tryToSet(board, -1*turn, count+1);
	
	
  // copy board
	copyBoard(board, bcopy);
	
  // find worst path
	for(X = 0; X < N; X++){
		for(Y = 0; Y < N; Y++){
			if(!board[X][Y]) continue; // except position that is already set a stone
			if(reversed_stones = Calc(board, X, Y, turn))
        reversed_stones -= turn * tryToSet(board, -1*turn, count+1);
      else continue; // except position that reverse no stone
      if(worst < reversed_stones)
        worst = reversed_stones;
		}
	}
	
	return worst;
}

void AI(int board[N][N], int turn){
	
	tryToSet(board, turn, 0);
	
	return;
}

