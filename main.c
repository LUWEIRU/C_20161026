#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int m,n;
   scanf("%d",&m);
   scanf("%d",&n);
   if(m<n)printf("N%d",n-m);
   else printf("Y");
   

  system("PAUSE");	
  return 0;
}
