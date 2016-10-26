#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int m,sum=0,i;
   int n[3];
   
   for (i=0;i<3;i++)
   {
       printf("請輸入三個價錢:");
       scanf("%d",&n[i]);
       sum+=n[i];
   }
   printf("總共:%d\n",sum);
   
   printf("請輸入媽媽給多少錢:");
   scanf("%d",&m);
   if(m>sum)
   {
        printf("Y");
   }
   else 
   {
        printf("N%d",sum-m);
   }
   printf("\n");
  system("PAUSE");	
  return 0;
}
