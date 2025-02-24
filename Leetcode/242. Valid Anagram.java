import java.util.Set;

public class ValidAnagram {

  public boolean isAnagram(String s, String t) {

    int[] array = new int[26];

    char[] sCharArray = s.toCharArray();
    char[] tCharArray = t.toCharArray();

    for (int i = 0; i < sCharArray.length; i++) {
      array[sCharArray[i] - 'a']++;
    }

    for (int i = 0; i < tCharArray.length; i++) {
      array[tCharArray[i] - 'a']--;
    }

    for (int i= 0; i < 26; i++) {
      if (array[i] != 0)
        return false;
    }

    return true;
  }
}
