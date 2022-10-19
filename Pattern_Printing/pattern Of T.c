#include<stdio.h>
#include<conio.h>
int main()
{
  int r = 0,c = 0,N = 0;
  
  printf("\n Enter A Value =>");
  scanf("%d",&N);
  
  printf("\n Pattern Is =>\n");
  
  for(r=1;r<=N;r++)
  {
      for(c=1;c<=N;c++)
      {
          if(r==1 || c==(N+1)/2)
          {
              printf(" * ");
              
          }
          else
          {
              printf("   ");
              
          }
      }
        printf("\n");
   }
   
   getch();
   return 0;   
          
 }      