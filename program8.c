/*
    step 1 : understand the problem statement 
    step 2 :write the algorithm 
    step 3 :decide the programming language 
    step 4 :write the program.
    step 5 : test the program.

*/

//////////////////////////////////////////////////////////
// 
// step 1 : understand the problem statement 
//          user is going to enter any two integers 
//          and we have to perform addition 
/////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
// step 2 :write the algorithm 
/*
    start
        accept first number as no1
        accept second number as no2
        create the variable as ans to store the result 
        perform the addition and store into ans 
        display the result from ans 
    end 
*/
////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
//
// step 3 :decide the programming language 
//          we select C programming.
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////
//
// step 4 :write the program.
//
/////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////
// Function name  : addition 
// Input          : integer, integer
// Output         : integer
// Description    : performs addition
// Date           : 04/10/2026
// Author         : Shreya Sudhir Kamble

/////////////////////////////////////////////////////
int addition(int ino1, int ino2 )
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

    return 0;
}

/////////////////////////////////////////////////////
// step 5 : test the program.
//
//  tested test cases 
//---------------------------------------------
//  input1      input2    output 
//---------------------------------------------
//  10           11         21
//  11            0         11
//   0           11         11
//  20           -9         11
//  -9           20         11
//  -20          -9        -29
/////////////////////////////////////////////////////