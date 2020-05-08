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
        while(tc-- > 0)
        {
            int x, y;
            x = fr.nextInt();
            y = fr.nextInt();
            if (x%2 + y%2==0 && x==y)
                System.out.println(x*2);
            else if (x%2 + y%2==2 && x==y)
                System.out.println(2*x-1);
            else if (x%2==0 && x-2==y)
                System.out.println(2*x-2);
            else if (x%2!=0 && x-2==y)
                System.out.println(2*x-3);
            else
                System.out.println("No Number");
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