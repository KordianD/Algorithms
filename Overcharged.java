import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String args[] ) throws Exception {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        List<Integer> prices = new ArrayList<Integer>();
        
        for (int i = 0; i < n; ++i)
        {
            prices.add(in.nextInt());
        }
        
        int annaOvercharged = in.nextInt();
        
        int sum = prices.stream().mapToInt(Integer::intValue).sum();
        
        sum -= prices.get(k);
        
        int result = annaOvercharged - sum/2;
        
        if (result == 0)
            System.out.println("Bon Appetit");
        else
            System.out.println(result);
        
    }
}
