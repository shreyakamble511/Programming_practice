// approach 2

import java.util.Scanner;

class Program35
{
    public static int Addition( int ino1 , int ino2)
    {
        int iAns = 0;
        iAns = ino1 + ino2 ;
        return iAns;
    }

    public static void main(String A[])
    {
        Scanner scanner = null; 
        int iValue1 = 0 , iValue2 = 0 , iResult =0 ;

        System.out.println("enter first number");
        iValue1 = scanner.nextInt();

        System.out.println("enter second number");
        iValue2 = scanner.nextInt();

        iResult = Addition(iValue1, iValue2) ;   
        System.out.println(" addition is " + iResult); 


        scanner =  new Scanner(System.in);

    }
}