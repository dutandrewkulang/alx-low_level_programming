#include <stdio.h>
int main(void)
{
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
