#include<stdio.h>
#include<conio.h>

int main()
{
  int No1 = 0,No2 = 0;
  
  printf("\n Enter Frist Number =>");
  scanf("%d",&No1);
  
  printf("\n Enter Second Number =>");
  scanf("%d",&No2);
  
  if(No1 > 0)
  {
      printf("\n Given No1 Is Positive Number Of %d",No1);
      
  }
  else
  {
      printf("\n Given No2 Is Positive Number Of %d",No2);
  
  }
  printf("\n Thanks!!!");
  
  getch();
  return 0;
  
}  
  