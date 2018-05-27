import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the pickingNumbers function below.
    static int pickingNumbers(int[] a) {
        
        int max = 0;
        for (int elem : a)
        {
            if (elem > max)
            {
                max = elem;
            }
        }
        
        int [] map = new int[max+1];
        
        for (int elem : a)
        {
            map[elem] = map[elem] + 1;
        }
        
        int result = 0;
        
        for (int i = 0; i+1 < max+1; i++)
        {
            if (map[i] + map[i+1] > result)
            {
                result = map[i] + map[i+1];
            }
        }
        
        return result;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] a = new int[n];

        String[] aItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int aItem = Integer.parseInt(aItems[i]);
            a[i] = aItem;
        }

        int result = pickingNumbers(a);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

