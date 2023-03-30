import java.io.*;
import java.util.*;
public class Solution 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        int i;
        char ch;
        String rev="";
        for(i=0;i<A.length();i++)
        {
            ch=A.charAt(i);
            rev=ch+rev;
        }
        if(A.equals(rev))
        {
            System.out.println("Yes");
        }
        else
        {
            System.out.println("No");
        }
        sc.close();
    }
}
