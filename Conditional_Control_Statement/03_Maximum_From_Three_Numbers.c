#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,No3 = 0;
    
    printf("\n Enter Your Number  =>");
    scanf("%d%d%d",&No1,&No2,&No3);
    
    if(No1 > No2 && No1 > No3)
    {
        printf("\n No1 Is Maximum Of %d",No1);
        
    }
    if(No2 > No1 && No2 > No3)
    {
        printf("\n No2 Is Maximum Of %d",No2);
        
    }
    if(No3 > No1 && No3 > No2)
    {
        printf("\n No3 Is Maximum Of %d",No3);
        
    }
    
    printf("\n Thanks!!!");
    
    getch();
    return 0;
    
}    