
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////
// Function name  : addition 
// Input          : integer, integer
// Output         : integer
// Description    : performs addition
// Date           : 04/10/2026
// Author         : Shreya Sudhir Kamble

/////////////////////////////////////////////////////
int addition(
                int ino1,   //first number
                int ino2   //second number
            )
{
    int ians  = 0; 
    ians = ino1 + ino2 ;   // business logic 
    return ians;

}
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

/////////////////////////////////////////////////////
// step 5 : test the program.
//
//  tested test cases 
//---------------------------------------------
//  input1      input2      output 
//---------------------------------------------
//  10           11          21
//  11          0.89         11
//   0           11          11
//  20           -9          11
//  -9           20          11
// -20           -9         -29
/////////////////////////////////////////////////////