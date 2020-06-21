#include <stdio.h>
int main()
{
    int t, i, n;
    
    
    
    printf("how many numbers you wants to cheack?\n");
    
    scanf("%d", &t);
    
    for(i = 1; i <= t; i++)
    
    {
        printf("input your number and press enter to cheack\n");
        
        scanf("%d", &n);
        
        
        if (n % 2 == 0)
        {
            printf("even\n");
        }
        
        else {
            printf("odd\n");
        }
    }
    
    
    return 0;
}