import java.util.Scanner;
import java.util.Arrays;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a, b, c, max = 0;
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        if(a+b+c > max) max = a+b+c;
        if((a+b)*c > max) max = (a+b)*c;
        if(a*(b+c) > max) max = a*(b+c);
        if(a+(b*c) > max) max = a+(b*c);
        if((a*b)+c > max) max = (a*b)+c;
        if(a*b*c > max) max = a*b*c;
        System.out.println(max);
    }
}
