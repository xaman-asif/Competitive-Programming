package com.problemsolving;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;

class ValidSudoku {
  public boolean isValidSudoku(char[][] board) {

    List<HashSet<Character>> row = new ArrayList<>(9);
    List<HashSet<Character>> col = new ArrayList<>(9);

    HashMap<List<Integer>, HashSet<Character>> square = new HashMap<>();

    for (int i = 0; i < 9; i++) {
      row.add(new HashSet<>());
      col.add(new HashSet<>());
    }

    for (int i = 0; i < 9; ++i) {
      for (int j = 0; j < 9; ++j) {
        char current = board[i][j];
        if (current != '.') {

          List<Integer> squareKey = Arrays.asList(i / 3, j / 3);

          if (row.get(i).contains(current) || col.get(j).contains(current) ||
              (square.get(squareKey)) != null &&
                  square.get(squareKey).contains(current)) {
            return false;
          }
          row.get(i).add(current);
          col.get(j).add(current);

          if (square.get(squareKey) == null) {
            square.put(squareKey, new HashSet<Character>());
            square.get(squareKey).add(current);
          } else {
            square.get(squareKey).add(current);
          }
        }
      }
    }

    return true;
  }
}