import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.StringTokenizer;

public class Main
{
    //@---Imagine there's no heaven. It's easy if you try---@//
    public static void main(String[] args) {
        FastReader in = new FastReader();
        String s1 = in.next();
        String s2 = in.next();

        Map<Character, Character> map = new HashMap<>();

        for (int i = 0; i < s1.length(); i++) {
            map.put(s1.charAt(i),s2.charAt(i));
        }

        //System.out.println(map);

        String s3 = in.next();

        for (int i = 0; i < s3.length(); i++) {
            if ('a' <= s3.charAt(i) && s3.charAt(i) <= 'z') {
                //System.out.println(s3.charAt(i));
                System.out.print(map.get(s3.charAt(i)));
            } else if ('A' <= s3.charAt(i) && s3.charAt(i) <= 'Z') {
                //System.out.println((char) (s3.charAt(i) - 'A' + 'a'));
                System.out.print((char) ((map.get((char) (s3.charAt(i) - 'A' + 'a'))) - 'a' + 'A'));
            } else {
                System.out.print(s3.charAt(i));
            }
        }
    }
    //@---No hell below us. Above us only sky---@//
    static class FastReader
    {
        BufferedReader br;
        StringTokenizer st;
        public FastReader() {br = new BufferedReader(new InputStreamReader(System.in));}
        int nextInt() {return Integer.parseInt(next());}
        long nextLong() {return Long.parseLong(next());}
        double nextDouble() {return Double.parseDouble(next());}
        String next()
        {
            while (st == null || !st.hasMoreElements())
            {try {st = new StringTokenizer(br.readLine());}catch (IOException e) {e.printStackTrace();}}
            return st.nextToken();
        }
        String nextLine()
        {
            String str = "";
            try {str = br.readLine();}catch (IOException e) {e.printStackTrace();}
            return str;
        }
    }
}