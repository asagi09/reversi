#include <stdio.h>
#include <othello.h>

#define N 8 // board size
#define M 3 // read what to phasing destination
#define START_PLAYER 1 // set start prayer(1 or -1)

int Set(int b[N][N], int n, int m, int t){
	int pos = 0;
	if(n < 0 || n >= N || m < 0 || m >= N){
		return 0;
	}
	pos =  reverseUp(b, n, m, t) + reverseDown(b, n, m, t)
	     + reverseLeft(b, n, m, t) + reverseRight(b, n, m, t)
	     + reverseUpLeft(b, n, m, t) + reverseUpRight(b, n, m, t)
		 + reverseDownLeft(b, n, m, t) + reverseDoRight(b, n, m, t);
	if(pos)
		b[n][m] = turn;
	return pos;
}

int Calc(int b[N][N], int X, int Y, int turn){
	int i, j;
	int sum;
	int bcopy[N][N];
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			bcopy[i][j] = b[i][j];
		}
	}
	
	sum =  reverseUp(bcopy, X, Y turn) + reverseDown(bcopy, X, Y, turn)
	     + reverseLeft(bcopy, X, Y, turn) + reverseRight(bcopy, X, Y, turn)
	     + reverseUpLeft(bcopy, X, Y, turn) + reverseUpRight(bcopy, X, Y, turn)
	     + reverseDownLeft(bcopy, X, Y, turn) + reverseDoRight(bcopy, X, Y, turn);
	return sum;
}

int Possible(int board[N][N], int turn){
	int X, Y;
	
	for(X = 0; X < N; X++){
		for(Y = 0; Y < N; Y++){
			if(Calc(board, X, Y, turn)) return 1;
		}
	}	
	return -1;
}

void show(int b[N][N]){
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
			if(b[i][j] == 0)
				printf("   ");
			else if(b[i][j] == -1)
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

void Start(int board[][]){
	int board[N][N];
	int turn = START_PLAYER;
	int reminning_space = 59;

  initializeBoard(board);
  while(remaining_space){
    inputYourMove(board);
  }
}

void Jubge(int b[N][N]){
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

void initializeBoard(int board[][]){
	board[3][3] =  1; board[4][4] =  1;
	board[3][4] = -1; board[4][3] = -1;
	return;
}

