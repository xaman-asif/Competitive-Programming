import java.io.*;
import java.math.*;
import java.util.*;

public final class Main {
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
    SystemIn = new BufferedReader(new InputStreamReader(new FileInputStream("./inputf.in")));
    SystemOut = new BufferedOutputStream(new FileOutputStream("./outputf.in"));
  }

  private static BufferedReader SystemIn = new BufferedReader(new InputStreamReader(System.in));
  private static BufferedOutputStream SystemOut = new BufferedOutputStream(System.out);
  private final static String space = " ";
  private final static String endl = "\n";

  public static void main(String[] args) throws IOException {
    fileIO();

    var sc = Scanner(SystemIn);

    int n = sc.nextInt();

    List<Long> temp = factorialNumbers(n);

    SystemOut.flush();
  }

  public static ArrayList<Long> factorialNumbers(long n) {

    ArrayList<Long> array = new ArrayList<>();

    return factors(n, 2, 1, array);
  }

  public static ArrayList<Long> factors(long n, long i, long multiples, ArrayList<Long> array) {
    if (multiples <= n)
      array.add(multiples);
    return (multiples <= n) ? factors(n, i + 1, multiples * i, array) : array;
  }
}