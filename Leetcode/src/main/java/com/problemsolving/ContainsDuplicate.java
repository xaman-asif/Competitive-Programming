package com.problemsolving;

//https://leetcode.com/problems/contains-duplicate/description/

import java.util.HashSet;
import java.util.Set;

public class ContainsDuplicate {
  public boolean containsDuplicate(int[] nums) {
    Set<Integer> set = new HashSet<>();
    int arraylength = nums.length;

    for (int i = 0; i < arraylength; i++) {
      if (!set.add(nums[i])) {
        return true;
      }
    }
    return false;
  }
}
