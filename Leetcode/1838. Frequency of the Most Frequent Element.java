import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Set;

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

    main.maxFrequency(new int[] {1, 4, 8, 13}, 5);

    SystemOut.flush();
  }

  public int maxFrequency(int[] nums, int k) {
    int left = 0, right = 0, ans = 0;
    Arrays.sort(nums);

    long sum = nums[0];

    while (right < nums.length) {
      if ((long) (right - left + 1) * nums[right] <= k + sum) {
        ans = Math.max(ans, right - left + 1);
        right++;

        if (right < nums.length) {
          sum += nums[right];
        }
      } else {
        sum -= nums[left];
        left++;
      }
    }
    return ans;
  }
}