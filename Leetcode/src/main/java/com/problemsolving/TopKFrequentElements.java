package com.problemsolving;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class TopKFrequentElements {
  public int[] topKFrequent(int[] nums, int k) {

    HashMap<Integer, Integer> numFreq = new HashMap<>();



    for (int i = 0; i < nums.length; ++i) {
      if (!numFreq.containsKey(nums[i])) {
        numFreq.put(nums[i], 1);
      } else {
        numFreq.put(nums[i], numFreq.get(nums[i]) + 1);
      }
    }

    List<Integer> result = new ArrayList<>();

    for (int i: numFreq.keySet()) {
      if (numFreq.get(i) == k) {
        result.add(i);
      }
    }

    return result.stream().mapToInt(i -> i) .toArray();
  }
}
