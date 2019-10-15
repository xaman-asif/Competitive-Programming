import java.util.Scanner;
import java.util.Arrays;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m, n, t = 1001;
        n = input.nextInt();
        m = input.nextInt();
        int [] ara = new int[m];
        for(int i=0; i<m; i++){
            ara[i] = input.nextInt();
        }
        Arrays.sort(ara);
        for(int i=0; i+n<=m; i++){
            if(ara[i+n-1]-ara[i]<t){
                t = ara[i+n-1] - ara[i];
            }
        }
        System.out.println(t);
    }
}
