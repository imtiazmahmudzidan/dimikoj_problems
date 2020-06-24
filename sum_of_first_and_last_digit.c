/*A programme that takes input an intiger number and give sum of it's first and last digit */


#include<stdio.h>
int main()
{
    int T,N,i,MSD,LSD;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&N);
        LSD=N%10;
       for(;N=N/10;)
       {
         if(N/10==0)
         {
             MSD=N%10;
             break;
         }

       }
       printf("Sum = %d\n",MSD+LSD);
    }
    return 0;
}
