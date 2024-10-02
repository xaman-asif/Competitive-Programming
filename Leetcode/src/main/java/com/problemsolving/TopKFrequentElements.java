package com.problemsolving;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;

public class TopKFrequentElements {
  public int[] topKFrequent(int[] nums, int k) {

    HashMap<Integer, Integer> keyToVal = new HashMap<>();
    HashMap<Integer, List<Integer>> valToKeys = new HashMap<>();

    for (int i = 0; i < nums.length; ++i) {
      if (!keyToVal.containsKey(nums[i])) {
        keyToVal.put(nums[i], 1);
      } else {
        keyToVal.put(nums[i], keyToVal.get(nums[i]) + 1);
      }
    }

    for (int i : keyToVal.keySet()) {
      if (!valToKeys.containsKey(keyToVal.get(i))) {
        List<Integer> tempListA = new ArrayList<>();
        tempListA.add(i);
        valToKeys.put(keyToVal.get(i), tempListA);
      } else {
        List<Integer> tempListB = valToKeys.get(keyToVal.get(i));
        tempListB.add(i);
        valToKeys.put(keyToVal.get(i), tempListB);
      }
    }

    List<Integer> freqList = new ArrayList<>(valToKeys.keySet());
    Collections.sort(freqList, Collections.reverseOrder());

    List<Integer> result = new ArrayList<>();

    for (int i : freqList) {
      result.addAll(valToKeys.get(i));
    }

    return result.stream().limit(k).mapToInt(i -> i).toArray();
  }
}
