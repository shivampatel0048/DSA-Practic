import java.util.Arrays;

public class Lec_3_1 {
    public static void main(String[] args) {
        int arr[] = { 5, 20, 12, 30,10, 12, 45, 4 };

        // Print the original integer array using Arrays.toString()
        System.out.println("Original Integer Array (arr): " + Arrays.toString(arr));

        // Sort a portion of the integer array (from index 1 to 2) in ascending order
        // The range to be sorted is from index 1 (inclusive) to index 3 (exclusive)
        Arrays.sort(arr, 1, 6);

        // Print the sorted integer array (arr) in ascending order
        System.out.println("Sorted Portion of Integer Array (arr) in Ascending Order: " + Arrays.toString(arr));
    }
}
