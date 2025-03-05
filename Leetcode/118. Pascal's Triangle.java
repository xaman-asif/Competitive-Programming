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
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

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

    main.generate(5);

    SystemOut.flush();
  }

  public List<List<Integer>> generate(int numRows) {
    List<List<Integer>> arrayList = new ArrayList<>(numRows);

    for (int i = 0; i < numRows; i++) {
      arrayList.add(new ArrayList<>());
    }

    arrayList.set(0, Arrays.asList(1));

    for (int i = 1; i < numRows; i++) {
      List<Integer> tempList = new ArrayList<>();
      for (int j = 0; j <= i; j++) {

        int left = 0, right = 0;
        if (!(j==0)) {
          left = arrayList.get(i - 1).get(j - 1);
        }

        if (!(j == arrayList.get(i - 1).size())) {
          right = arrayList.get(i - 1).get(j);
        }

        tempList.add(left + right);
      }

      arrayList.set(i, tempList);
    }
    return arrayList;
  }
}