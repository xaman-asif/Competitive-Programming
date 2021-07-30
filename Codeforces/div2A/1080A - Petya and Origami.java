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

        int n = in.nextInt();
        int k = in.nextInt();

        int red = (int) Math.ceil((2.0*n) / k);
        int green = (int) Math.ceil((5.0*n) / k);
        int blue = (int) Math.ceil((8.0*n) / k);

        System.out.println(red + green + blue);
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