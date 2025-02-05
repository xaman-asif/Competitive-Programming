//https://codeforces.com/contest/431/problem/A
import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);

    int[] calories = new int[4];
    for (int i = 0; i < 4; i++) {
      calories[i] = in.nextInt();
    }

    String str = in.next();
    int sum = 0;

    for (char ch: str.toCharArray()) {
      sum += calories[Integer.parseInt(
          ch + ""
      ) - 1];
    }

    System.out.println(sum);
  }
}
