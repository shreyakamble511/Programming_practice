import java.util.Scanner;

class Program27
{
    public static void main(String A[])
    {
        Scanner scanner = null; 
        int iAge = 0;
        float fMarks = 0.0;    //error 


        scanner =  new Scanner(System.in);

        System.out.println(" Enter your name ");
        String sName = null; 
        sName = scanner. next();
        System.out.println("enter your age ");
        iAge = scanner.nextInt();
        System.out.println("enter marks");
        fMarks = scanner. nextFloat();

        System.out.println("welcome " +sName);
        System.out.println("your age is " + iAge);
        System.out.println("your marks are" +fMarks);
    }
}