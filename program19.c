#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool CheckEven(int ino)
{
    if( (ino % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue = 0;
    bool bret = false;

    printf(" enter number \n");

    scanf("%d" , &ivalue);

    bret =  CheckEven(ivalue);

    if ( bret == true)
    {
        printf("its even ");
    }

    else
    {
        printf("its odd");
    }


    
    return EXIT_SUCCESS;
}