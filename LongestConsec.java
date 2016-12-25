// Code was written for CodeWars task
// Consecutive Strings

class LongestConsec {

    public static String longestConsec(String[] strarr, int k) {
        StringBuilder sb = new StringBuilder();
        StringBuilder temp = new StringBuilder();
        int startOfString = 0, maxSize = 0;

        if (strarr.length == 0 || k > strarr.length || k <= 0)
            return "";

        for (int i = 0; i <= strarr.length - k; i++) {
            for (int j = 0; j < k; j++)
                temp.append(strarr[i + j]);
            if (temp.length() > maxSize) {
                startOfString = i;
                maxSize = temp.length();
            }
            temp.delete(0, temp.length());
        }

        for (int i = startOfString; i < startOfString + k; i++)
            sb.append(strarr[i]);

        return sb.toString();
    }
}