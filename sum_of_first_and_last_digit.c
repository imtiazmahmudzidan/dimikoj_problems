/*A programme that takes input an intiger number and give sum of it's first and last digit */


#include <stdio.h>
int main()
{
    int n, last, first, sum;
    
    
    printf("enter the number\t");
    
    scanf("%d", &n);
    
    last = n % 10;
    
    while(n > 9){
       n = n / 10;
    }
    
    first = n;
    
    
    sum = first + last;
    
    
    printf("the sum is %d", sum);
    

    return 0;
    
    
}
