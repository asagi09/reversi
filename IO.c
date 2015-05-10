#include <stdio.h>
#include <reversi.h>

extern int Possible(board, turn);

void Show(int board[N][N]){
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
			else if(board[i][j] == -1)
				printf(" x ");
			else
				printf(" o ");
		}
		printf("\n");
	}
	return;
}

void inputYourMove(int board[N][N]){
  int X, Y;

  if (!(Possible(board, turn))) return; // you can set or not.
  while(1){
    printf("input your move.(1~8): ");
    scanf("%d %d", &X, &Y);
    X--; Y--; // 1~8 -> 0~7
  }
  
}

void Jubge(int board[N][N]){
	int i, j;
	int result = 0;
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			result += b[i][j];
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

