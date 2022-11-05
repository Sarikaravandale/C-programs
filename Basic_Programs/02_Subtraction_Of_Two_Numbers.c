#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,Sub = 0;
    
    printf("\n Enter Frist Number =>");
    scanf("%d",&No1);
    
    printf("\n Enter Second Number =>");
    scanf("%d",&No2);
    
    Sub = No1 - No2;
    
    printf("\n Subtraction Is %d - %d = %d",No1,No2,Sub);
    
    getch();
    return 0;
    
}    
    
    