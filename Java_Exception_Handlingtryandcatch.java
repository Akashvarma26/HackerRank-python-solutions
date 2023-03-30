import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
public class Solution 
{

    public static void main(String[] args) 
    {
        int x,y;
        Scanner sc=new Scanner(System.in);
        try
        {
            x=sc.nextInt();
            y=sc.nextInt();
            System.out.println(x/y);
        }
        catch(ArithmeticException abc)
        {
            System.out.println("java.lang.ArithmeticException: / by zero");
        }
        catch(InputMismatchException ab)
        {
            System.out.println("java.util.InputMismatchException");
        }
        sc.close();
    }
}
