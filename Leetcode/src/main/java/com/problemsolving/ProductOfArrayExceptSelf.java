package com.problemsolving;

public class ProductOfArrayExceptSelf {
  public int[] productExceptSelf(int[] nums) {
    int[] right = new int[nums.length];
    int[] left = new int [nums.length];

    int product = 1;

    for (int i = 0; i < nums.length; i++) {
      product *= nums[i];
      right[i] = product;
    }

    product = 1;

    for (int i = nums.length - 1; i >= 0; i--) {
      product *= nums[i];
      left[i] = product;
    }

    for (int i = 0; i < nums.length; i++) {
      if (nums.length == 1) {
        return nums;
      } else if (i == 0) {
        nums[i] = left[i + 1];
      } else if (i == nums.length - 1) {
        nums[i] = right[nums.length - 2];
      } else {
        nums[i] = right[i - 1] * left[i + 1];
      }
    }

    return nums;
  }
}
