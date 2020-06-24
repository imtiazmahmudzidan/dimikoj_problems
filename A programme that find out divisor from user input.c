/*A programme that find out divisor from user input*/

#include <stdio.h>
int main()
{
    int t, i, n, j;
    
    
    
    printf("how many numbers you wants to cheack?\n");
    
    scanf("%d", &t);
    
    for(j = 1; j <= t; j++)
    
    {
         printf ("enter the number :\t");

  scanf ("%d", &n);

  for (i = 1; i <= n; i++)
    {
      if (n % i == 0)
	{
	   
	  printf ("%d \t", i);
	}

    }
    
    printf("\n");
    }
    
    
    return 0;
}
