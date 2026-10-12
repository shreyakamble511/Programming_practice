import java.util.Scanner;

class Program21
{
    public static void main(String A[])
    {
        Scanner scanner = null;  
        scanner =  new Scanner(System.in);

        System.out.println(" Enter your name ");
        String sName = null; 
        sName = scanner. nextLine();

        System.out.println("welcome " +sName);
    }
}