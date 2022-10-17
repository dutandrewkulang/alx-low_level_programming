#include <stdio.h>
/**
 * main - Entry path of execution
 * return: 0 when succesful
 */

int main(void)
/*{
  int outer, inner;

  for (outer = 48; outer <= 57; outer++)
    {
      for (inner = 48; inner <= 57; inner++)
	{

	  if (inner == outer)
	    {
	      continue;
	    }
	  else
	    {
	      putchar(outer);
	      putchar(inner);
	      putchar(44);
	      putchar(32);
	    }
	}
    }
  putchar(10);
  return (0);
}
*/

{

int n;
	int first;
	int second;



for (n = 1; n < 99; n++)
	{
		first = n / 10;
		second = n % 10;
		if (first < second)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (n < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
