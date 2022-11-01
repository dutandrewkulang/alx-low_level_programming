#include "main.h"
void
print_chessboard(char (*a)[8])
{
	int c, d;

  /* Thinking of other ways to do this that don't use magic numbers */
  
	for (c = 0; c < 8; c++)
	{
		for (d = 0; d < 8; d++)
		{
			putchar(a[c][d]);
		}
		putchar('\n');
	}
}
