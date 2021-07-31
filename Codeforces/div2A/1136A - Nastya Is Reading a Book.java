import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main
{
    //@---Imagine there's no heaven. It's easy if you try---@//
    public static void main(String[] args) {
        FastReader in = new FastReader();

        int n = in.nextInt();
        int[][] ara = new int[n][2];

        for (int i=1; i<=n; i++) {
            ara[i-1][0] = in.nextInt();
            ara[i-1][1] = in.nextInt();
        }

        int mark = in.nextInt();
        for (int i=1; i<=n; i++) {
            if (ara[i-1][0] <= mark && mark <= ara[i-1][1]) {
                System.out.println(n - i + 1);
                break;
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