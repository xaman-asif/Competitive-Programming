import java.util.HashMap;

public class TwoSum {

  public int[] twoSum(int[] nums, int target) {
    HashMap<Integer, Integer> hashMap = new HashMap<>();

    for (int index = 0; index < nums.length; index++) {
      hashMap.put(nums[index], index);
    }

    for (int index = 0; index < nums.length; index++) {
      int remaining = target - nums[index];
      int val = hashMap.getOrDefault(remaining, -1);
      if (index != val && val != -1) {
        return new int[] {index, val};
      }
    }
    return null;
  }
}
