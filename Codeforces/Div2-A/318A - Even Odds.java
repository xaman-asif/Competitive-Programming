import java.lang.Math;
import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n, k;
        n = input.nextLong();
        k = input.nextLong();
        if(n%2 == 0) {
        	if(k <= n/2) {
        		System.out.println(1+(k-1)*2);
        	}
        	else {
        		System.out.println(2+(k-n/2-1)*2);
        	}
        }
        else {
        	if(k <= n/2 + 1) {
        		System.out.println(1+(k-1)*2);
        	}
        	else {
        		System.out.println(2+(k-n/2-1-1)*2);
        	}
        }
    }
}
