/* IO.c */

#include <stdio.h>
#include <reversi.h>

void show(STONE board[N][N]){
	int i, j, k;
	for(i = 0; i < N; i++){
		if(i){
			for(k = 0; k < N*4-1; k++){
			printf("-");
			}
		}
		printf("\n");
		for(j = 0; j < N; j++){
			if(j)
				printf("|");
			if(board[i][j] == 0)
				printf("   ");
			else if(board[i][j] == 2)
				printf(" x ");
			else
				printf(" o ");
		}
		printf("\n");
	}
	return;
}

int input_move(STONE board[N][N], int turn){
  int X, Y;

  if (!possible(board, turn)){
    printf("You can't set a stone anywhere.\nYou will pass.\n");
    return 0;
  }
  while(1){
    printf("input your move.(1~8): ");
    scanf("%d %d", &X, &Y);
    X--; Y--; // 1~8 -> 0~7
  }

  return set(board, X, Y, turn);
  
}

void jubge(STONE board[N][N]){
	int x, y;
	int result = 0;
	
	for(x = 0; x < N; x++){
		for(y = 0; y < N; y++){
			result += board[x][y];
		}
	}
	
	if(result == 0)
		printf("draw game");
	else if(result > 0)
		printf("o is winner");
	else
		printf("x is winner");
	return;
}

