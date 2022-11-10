#include<stdio.h>
#include<conio.h>

int main()
{
    int Year;
    
    printf("\n Enter Your Year =>");
    scanf("%d",&Year);
    
    if(Year%4==0)
    {
      printf("\n Leap Year Is %d",Year);
      
    }
    
    else
    {
      printf("\n Not Leap Year Is %d",Year);
      
    }
    
    getch();
    return 0;
    
}    