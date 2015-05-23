/* reversi.h */
#include <stdbool.h>

#define N 8 // board size
#define DEEP 3 // read what to phasing destination

typedef unsigned char STONE; // 0:empty, 1:o, 2:x

#define EMPTY 0
#define BLACK 1
#define WHITE 2

// decide black and white player
// 1: human, 2: AI
#define BLACK_PLAYER 1
#define WHITE_PLAYER 2

#define START_PLAYER BLACK // set start prayer(1 or 2)

// reverse stone.c
int reverse_left(STONE board[N][N], int x, int y, int turn);
int reverse_right(STONE board[N][N], int x, int y, int turn);
int reverse_up(STONE board[N][N], int x, int y, int turn);
int reverse_down(STONE board[N][N], int x, int y, int turn);
int reverse_left_up(STONE board[N][N], int x, int y, int turn);
int reverse_left_down(STONE board[N][N], int x, int y, int turn);
int reverse_right_up(STONE board[N][N], int x, int y, int turn);
int reverse_right_down(STONE board[N][N], int x, int y, int turn);

// control_board.c
int set(STONE board[N][N], int x, int y, int turn);
int calc(STONE board[N][N], int x, int y, int turn);
bool possible(STONE board[N][N], int turn);
void copy_board(STONE board[N][N], STONE bcopy[N][N]);

// AI.c
int try_to_set(STONE board[N][N], int turn, int count);
void AI(STONE board[N][N], int turn);

// IO.c
void show(STONE board[N][N]);
int input_move(STONE board[N][N], int turn);

// start.c
void start_game(STONE board[N][N]);
void jubge(STONE board[N][N]);
void initialize_board(STONE board[N][N]);

