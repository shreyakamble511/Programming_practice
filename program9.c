
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
    scanf("%d", &ivalue1);

    printf("Enter second number: \n");
    scanf("%d", &ivalue2);

    
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
//  10           11
//  11            0
//   0           11
//  20           -9
//  -9           20
// -20          -9 
/////////////////////////////////////////////////////