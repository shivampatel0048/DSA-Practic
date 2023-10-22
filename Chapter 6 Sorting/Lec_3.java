import java.util.Arrays;

public class Lec_3 {
    public static void main(String[] args) {
        // Integer Array Example
        int arr1[] = {5, 20, 12, 30};

        System.out.println("Original Integer Array (arr1): " + Arrays.toString(arr1));
        // Print the original integer array using Arrays.toString()

        Arrays.sort(arr1);
        // Sort the integer array arr1 in ascending order

        System.out.println("Sorted Integer Array (arr1) in Ascending Order: " + Arrays.toString(arr1));
        // Print the sorted integer array using Arrays.toString()

        // Character Array Example
        char arr2[] = {'B', 'B', 'A', 'C', 'A'};

        System.out.println("Original Character Array (arr2): " + Arrays.toString(arr2));
        // Print the original character array using Arrays.toString()

        Arrays.sort(arr2);
        // Sort the character array arr2 in lexicographical (alphabetical) order

        System.out.println("Sorted Character Array (arr2) in Lexicographical Order: " + Arrays.toString(arr2));
        // Print the sorted character array using Arrays.toString()
    }
}
