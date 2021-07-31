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
        int m = in.nextInt();

        int[] nara = new int[10];
        for (int i=0; i < n; i++) {
            nara[i] = in.nextInt();
        }

        int[] mara = new int[10];
        for (int i = 0; i < m; i++) {
            int temp = in.nextInt();
            mara[temp] = 1;
        }

        for (int i = 0; i < n; i++) {
            if (mara[nara[i]]==1) {
                System.out.print(nara[i] + " ");
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