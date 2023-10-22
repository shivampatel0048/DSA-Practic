import java.util.Arrays;
import java.util.Comparator;

public class Lec_3_2 {
    public static void main(String[] args) {
        Integer[] arr = { 5, 20, 12, 30, 3, 45, 10, 7 };

        // Create a custom comparator to sort even numbers first, followed by odd
        // numbers
        Arrays.sort(arr, new Comparator<Integer>() {
            @Override
            public int compare(Integer a, Integer b) {
                if (a % 2 == 0 && b % 2 != 0) {
                    return -1; // 'a' is even, 'b' is odd, so 'a' comes first
                } else if (a % 2 != 0 && b % 2 == 0) {
                    return 1; // 'a' is odd, 'b' is even, so 'b' comes first
                } else {
                    return a - b; // Both 'a' and 'b' are either both even or both odd, sort them normally
                }
            }
        });

        System.out.println("Sorted Array with Even Numbers First: " + Arrays.toString(arr));
    }
}
