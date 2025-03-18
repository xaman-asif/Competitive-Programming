import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.LinkedList;

public class Main {
  private static final class tokens extends LinkedList<String> {
    tokens(String line) {
      super(new LinkedList<String>());
      for (var token : line.split(" ")) {
        add(token);
      }
    }

    String nextStr() {
      return remove();
    }

    int nextInt() {
      return Integer.parseInt(remove());
    }

    long nextLong() {
      return Long.parseLong(remove());
    }

    double nextDbl() {
      return Double.parseDouble(remove());
    }

    BigInteger nextBigInt() {
      return new BigInteger(remove());
    }
  }

  private static tokens Scanner(BufferedReader cin) {
    String line = null;
    try {
      line = cin.readLine();
    } catch (IOException e) {
      e.printStackTrace();
    }
    return new tokens(line);
  }

  private static void print(String s) {
    try {
      SystemOut.write(s.getBytes());
    } catch (IOException e) {
      e.printStackTrace();
    }
  }

  private static void print(Integer i) {
    print(i.toString());
  }

  private static void print(Long l) {
    print(l.toString());
  }

  private static void print(String f, Object... args) {
    print(String.format(f, args));
  }

  private static void print(BigInteger ii) {
    print(ii.toString());
  }

  private static void fileIO() throws FileNotFoundException {
    SystemOut = new BufferedOutputStream(new FileOutputStream("CP/outputf.in"));
    SystemIn = new BufferedReader(new InputStreamReader(new FileInputStream("CP/inputf.in")));
  }

  private static BufferedReader SystemIn = new BufferedReader(new InputStreamReader(System.in));
  private static BufferedOutputStream SystemOut = new BufferedOutputStream(System.out);
  private final static String space = " ";
  private final static String endl = "\n";

  public static void main(String[] args) throws IOException {
    // fileIO();
    // var sc = Scanner(SystemIn);
    // int n = sc.nextInt();
    Main main = new Main();

    main.maxProduct(new int[] {-1, 4, -4, 5, -2, -1, -1, -2, -3});

    SystemOut.flush();
  }

  public int maxProduct(int[] nums) {

    int prefix = 1;
    int suffix = 1;

    int max = Integer.MIN_VALUE;

    for (int i = 0; i < nums.length; i++) {
      if (prefix == 0) prefix = 1;
      if (suffix == 0) suffix = 1;

      prefix *= nums[i];
      suffix *= nums[nums.length - i - 1];

      max = Math.max(max, Math.max(prefix, suffix));
    }

    return 0;
  }
}