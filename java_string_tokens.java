import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine().trim();
        // Write your code here.
        if(s.length()==0)
        {
            System.out.println(0);
            return;
        }
        String[] remo= s.split("[ !,?._'@]+");
        System.out.println(remo.length);
        for(String x:remo)
        {
            System.out.println(x);
        }
        scan.close();
    }
}

