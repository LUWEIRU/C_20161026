#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int m,sum=0,i;
   int n[3];
   
   for (i=0;i<3;i++)
   {
       printf("�п�J�T�ӻ���:");
       scanf("%d",&n[i]);
       sum+=n[i];
   }
   printf("�`�@:%d\n",sum);
   
   printf("�п�J�������h�ֿ�:");
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
