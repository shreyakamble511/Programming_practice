#include"header.h"

/////////////////////////////////////////////////////
//
//Entry point of the application 
//
/////////////////////////////////////////////////////
int main()
{

    int ivalue1 = 0 , ivalue2 = 0 , iresult =0  ;

    printf("Enter First number: \n");
    if (scanf("%d", &ivalue1) !=1)
    {
        fprintf(stderr , " unable to proceed as input is invalid  \n");

        return EXIT_FAILURE;
    }

    printf("Enter second number: \n");
    if (scanf("%d", &ivalue2) !=1)
    {
        fprintf(stderr , " unable to proceed as input is invalid  \n");

        return EXIT_FAILURE;
    }


    
    iresult= addition(ivalue1 , ivalue2 );  
    printf("addition is : %d\n", iresult);

    return EXIT_SUCCESS;
}

