#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0;
    
    printf("\n Enter Two Numbers =>");
    scanf("%d%d",&No1,&No2);
    
    if(No1 > No2)
    {
        printf("\n No1 Is Maximum Of %d",No1);
        
    }
    else
    {
        printf("\n No2 Is Maximum Of %d",No2);
        
    }
    
    printf("\n Thanks!!!");
    
    getch();
    return 0;
    
}     