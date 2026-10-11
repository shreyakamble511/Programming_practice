#include <stdio.h>
#include <stdlib.h>

void CheckEven(int ino)
{
    if( (ino % 2) == 0)
    {
        printf(" its even number \n");

    }
    else
    {
        printf(" its odd number \n");
    }

}

int main()
{
    int ivalue = 0;
    printf(" enter number \n");

    scanf("%d" , &ivalue);

    CheckEven(ivalue);

    
    return EXIT_SUCCESS;
}