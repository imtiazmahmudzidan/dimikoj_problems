/*A programme that takes user input of collumn and row and print the shape*/

#include <stdio.h>

int main ()
{
  int row, col, n;

  printf ("enter n\n");

  scanf ("%d", &n);

  for (row = 1; row <= n; row++)
    {

      for (col = 1; col <= n; col++)
	{



	  printf ("*");


	}
      printf ("\n");
    }

  return 0;
}
