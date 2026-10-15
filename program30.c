#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge= 0 ;
    float fmarks = 0.0f ;

    printf(" enter your name \n");
    scanf("% [^'\n'] s", sName);   // ENTER remains in input buffer

    printf("enter your age \n ");
    scanf("%d" , &iAge);

    printf("enter your marks \n ");
    scanf("%f" , &fmarks);

    printf("welcome %s\n " , sName);
    printf("your age is %d \n " ,iAge);
    printf("your marks %d" , fmarks);
    
    return EXIT_SUCCESS;
}