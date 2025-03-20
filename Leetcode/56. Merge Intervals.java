import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Map;
import java.util.TreeMap;

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

    main.merge(new int[][] {{1, 6}, {2, 5}, {1, 3}, {3, 7}, {2, 3}, {8, 10}});

    SystemOut.flush();
  }

  public int[][] merge(int[][] intervals) {
    TreeMap<Integer, Integer> treeMap = new TreeMap<>();

    for (int i = 0; i < intervals.length; i++) {
      if (treeMap.containsKey(intervals[i][0])) {
        if (intervals[i][1] > treeMap.get(intervals[i][0])) {
          treeMap.put(intervals[i][0], intervals[i][1]);
        }
      } else {
        treeMap.put(intervals[i][0], intervals[i][1]);
      }
    }

    ArrayList<int[]> tempList = new ArrayList<>();

    for (Map.Entry<Integer, Integer> entry : treeMap.entrySet()) {
      if (tempList.isEmpty()) {
        tempList.add(new int[] {entry.getKey(), entry.getValue()});
      } else if (tempList.get(tempList.size() - 1)[0] <= entry.getKey() &&
          entry.getKey() <= tempList.get(tempList.size() - 1)[1]) {
        if (tempList.get(tempList.size() - 1)[1] < entry.getValue()) {
          tempList.get(tempList.size() - 1)[1] = entry.getValue();
        }
      } else {
        tempList.add(new int[] {entry.getKey(), entry.getValue()});
      }
    }

    int[][] resultArray = new int[tempList.size()][];

    for (int i = 0; i < tempList.size(); i++) {
      resultArray[i] = tempList.get(i);
    }

    return resultArray;
  }
}