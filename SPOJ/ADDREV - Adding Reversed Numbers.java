import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main
{
    //@---Imagine there's no heaven. It's easy if you try---@//
    public static void main(String args[])
    {
        FastReader fr = new FastReader();
        
        int tc; tc = fr.nextInt();
        while (tc-- > 0) {
            int m, n;
            m = fr.nextInt();
            n = fr.nextInt();
            System.out.println(reverse(reverse(m)+reverse(n)));
        }
        
    }
    public static int reverse(int num) {
        int ret = 0;
        while(num > 0)
        {
            ret = ret * 10 + num % 10;
            num /= 10;
        }
        return ret;
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