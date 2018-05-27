import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the climbingLeaderboard function below.
    static int[] climbingLeaderboard(int[] scores, int[] alice) {
        

        List<Integer> nonRepetiveScores = new ArrayList<>();
        nonRepetiveScores.add(scores[0]);
        
        for (int i = 1; i < scores.length; i++)
        {
            if (scores[i] != nonRepetiveScores.get(nonRepetiveScores.size() - 1))
            {
                nonRepetiveScores.add(scores[i]);
            }
        }
        
        scores = nonRepetiveScores.stream().mapToInt(i->i).toArray();
        
        int [] alicesPositions = new int[alice.length];
        
        for (int i = 0; i < alice.length; i++)
        {
            int low = 0;
            int high = scores.length - 1;
            int mid = (int) (high + low) / 2;
            
            while(low <= high)
            {
                mid = (int) (high + low) / 2;
                if (scores[mid] == alice[i])
                {
                    alicesPositions[i] = mid + 1;
                    break;
                }
            
                else if (scores[mid] > alice[i])
                {
                    low = mid + 1;
                    mid++;
                }
            
                else
                {
                    high = mid-1;
                }
            }
 
            alicesPositions[i] = mid + 1;
        }
        
        return alicesPositions;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int scoresCount = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] scores = new int[scoresCount];

        String[] scoresItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < scoresCount; i++) {
            int scoresItem = Integer.parseInt(scoresItems[i]);
            scores[i] = scoresItem;
        }

        int aliceCount = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] alice = new int[aliceCount];

        String[] aliceItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < aliceCount; i++) {
            int aliceItem = Integer.parseInt(aliceItems[i]);
            alice[i] = aliceItem;
        }

        int[] result = climbingLeaderboard(scores, alice);

        for (int i = 0; i < result.length; i++) {
            bufferedWriter.write(String.valueOf(result[i]));

            if (i != result.length - 1) {
                bufferedWriter.write("\n");
            }
        }

        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

