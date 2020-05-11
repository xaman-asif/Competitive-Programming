import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.Stack;
import java.util.StringTokenizer;
import java.math.BigInteger;

public class Main
{
    //@---Imagine there's no heaven. It's easy if you try---@//
    public static void main(String args[])
    {
        FastReader fr = new FastReader();
        
        int tc, kount = 0; 
        tc = fr.nextInt();
        Stack <String> back = new Stack <>();
        Stack <String> forw = new Stack <>();
        while(tc-- > 0){
            System.out.println("Case " + ++kount + ":");
            back.clear();
            forw.clear();
            back.push("http://www.lightoj.com/");
            while(true)
            {
                String s; s = fr.next();
                if(s.equals("QUIT"))
                    break;
                else if(s.equals("VISIT")){
                    back.push(fr.next());
                    System.out.println(back.peek());
                    forw.clear();
                }
                else if(s.equals("BACK")){
                    if(back.size()==1){
                        //System.out.println(back.peek());
                        System.out.println("Ignored");
                    }
                    else{
                        forw.push(back.pop());
                        System.out.println(back.peek());
                    }
                }
                else if(s.equals("FORWARD")){
                    if(forw.isEmpty())
                        System.out.println("Ignored");
                    else{
                        back.push(forw.pop());
                        System.out.println(back.peek());
                    }
                }
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