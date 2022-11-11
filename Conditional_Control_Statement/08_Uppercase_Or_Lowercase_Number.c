#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';
    
    printf("\n Enter Your Character =>");
    scanf("%c",&Ch);
    
    if(Ch >= 'A' && Ch <= 'Z')
    {
        printf("\n Value Of Uppercase Of %c",Ch);        
    }
    else if(Ch >= 'a' && Ch <= 'z')
    {
        printf("\n Value Of Lowercase Of %c",Ch);     
    }
    else
    {
        printf("\n Invalid Characters");
    }
    
    printf("\n\n Thanks!!!");
    
    getch();
    return 0;
}     