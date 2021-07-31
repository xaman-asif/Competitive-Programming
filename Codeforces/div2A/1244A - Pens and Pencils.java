import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main
{
    //@---Imagine there's no heaven. It's easy if you try---@//
    public static void main(String args[]) {
        FastReader in = new FastReader();

        int caseno = in.nextInt();

        while (caseno-- > 0) {
            int a = in.nextInt();
            int b = in.nextInt();
            int c = in.nextInt();
            int d = in.nextInt();
            int k = in.nextInt();

            int x = 0, y = 0;

            if (a/c > 0 && a%c == 0) {
                x = a/c;
            } else if (a/c >= 0 && a%c > 0) {
                x = a/c + 1;
            }

            if (b/d > 0 && b%d == 0) {
                y = b/d;
            } else if (b/d >= 0 && b%d > 0) {
                y = b/d + 1;
            }

            //System.out.println(x);
            //System.out.println(y);

            if ( x + y <= k) {
                System.out.println(k-y + " " + y);
            } else {
                System.out.println(-1);
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