#include<stdio.h>
#include<conio.h>

int main()
{
    int Vote;
    
    printf("\n Enter Your Vote =>");
    scanf("%d",&Vote);
    
    if(Vote > 18)
    {
        printf("\n Eligible For Vote %d",Vote);
        
    }
    else
    {
        printf("\n Eligible For Not Vote %d",Vote);
        
    }
    
    printf("\n Thanks!!!");
    
    
    getch();
    return 0;
}    