#include <stdio.h>

int main()
{
    int szam1;
    int szam2;
    printf("n1: ");
    scanf("%d",&szam1);
    printf("n2: ");
    scanf("%d",&szam2);
    
    if (szam1>szam2){
        printf(">");
    }
    
    if (szam1<szam2){
    printf("<");
    }
    
    if(szam1==szam2){
    printf("=");
    }
    return 0;
}