
/*A programme that will print 1000 to 1 in reverse in different line and there will 5 eliments in every line*/

#include <stdio.h>

int
main ()
{
  for (int i = 1000; i >= 1; i--)
    {


      if (i % 5 == 0)
	{
	  printf ("\n");
	}


      printf ("%d\t", i);
    }

  return 0;
}
