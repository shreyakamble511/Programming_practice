/*
    step 1 : understand the problem statement 
    step 2 :write the algorithm 
    step 3 :decide the programming language 
    step 4 :write the program.
    step 5 : test the program.

*/

///////////////////////////////////////////
// 
// step 1 : understand the problem statement 
//          user is going to enter any two integers 
//          and we have to perform addition 
///////////////////////////////////////////

///////////////////////////////////////////
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
///////////////////////////////////////////

///////////////////////////////////////////
//
// step 3 :decide the programming language 
//          we select C programming.
///////////////////////////////////////////

///////////////////////////////////////////
//
// step 4 :write the program.
//
///////////////////////////////////////////

#include<stdio.h>

int main()
{

    int ivalue1 = 10 , ivalue2 = 11 , iresult = 0 ;
    
    iresult= ivalue1 + ivalue2;  // business logic 

    printf("%d\n", iresult);

    return 0;
}