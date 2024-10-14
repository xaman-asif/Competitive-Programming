package com.problemsolving;

public class TwoSumII {
  public int[] twoSum(int[] numbers, int target) {
    int leftPointer = 0;
    int rightPointer = numbers.length - 1;

    while (leftPointer < rightPointer) {
      int sum = numbers[leftPointer] + numbers[rightPointer];
      if (sum < target) {
        leftPointer++;
      } else if (sum > target) {
        rightPointer--;
      }
      if (sum == target) {
        break;
      }
    }
    return new int[]{leftPointer + 1, rightPointer + 1};
  }
}
