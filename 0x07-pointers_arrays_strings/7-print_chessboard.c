#include "main.h"
/**
 * print_chessboard - chess game
 * @a: pointer variable
*/
void print_chessboard(char (*a)[8])
{
int c, d;

for (c = 0; c < 8; c++)
{
for (d = 0; d < 8; d++)
{
putchar(a[c][d]);
}
putchar('\n');
}
}
