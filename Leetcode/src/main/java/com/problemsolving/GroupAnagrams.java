package com.problemsolving;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;

public class GroupAnagrams {
  public List<List<String>> groupAnagrams(String[] strs) {

    List<String> listOfSortedString = new ArrayList<>();

    for (String s : strs) {
      char[] charArray = s.toCharArray();

      Arrays.sort(charArray);

      listOfSortedString.add(Arrays.toString(charArray));
    }

    HashMap<String, List<String>> stringListHashMap = new HashMap<>();

    for (int i = 0; i < listOfSortedString.size(); i++) {
      if (!stringListHashMap.containsKey(listOfSortedString.get(i))) {

        List<String> tempArrayList = new ArrayList<>();
        tempArrayList.add(strs[i]);

        stringListHashMap.put(listOfSortedString.get(i), tempArrayList);
      } else {
        stringListHashMap.get(listOfSortedString.get(i)).add(strs[i]);
      }
    }

    List<List<String>> finalResult = new ArrayList<>();

    for (String var : stringListHashMap.keySet()) {
      List<String> temp1 = stringListHashMap.get(var);
      finalResult.add(temp1);
    }

    return finalResult;
  }
}
