package com.problemsolving;

import java.util.Set;
import java.util.TreeSet;

public class LongestConsecutiveSequence {
  public int longestConsecutive(int[] nums) {

    Set<Integer> set = new TreeSet<>();

    for (int num : nums) {
      set.add(num);
    }

    nums = set.stream().mapToInt(i -> i).toArray();

    int prevIdx = 0;
    int nextIdx = 0;

    int highestVal = Integer.MIN_VALUE;

    if (nums.length == 1) {
      return 1;
    } else if (nums.length == 0) {
      return 0;
    }

    for (int i = 0; i < nums.length; i++) {
      if (i + 1 != nums.length && ((nums[i] + 1 == nums[i + 1]))) {
        nextIdx = i + 1;
      } else {
        if (nextIdx - prevIdx + 1 > highestVal) {
          highestVal = nextIdx - prevIdx + 1;
        }
        nextIdx = prevIdx = i + 1;
      }
    }
    return highestVal;
  }
}
