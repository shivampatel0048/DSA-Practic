import java.util.Arrays;

class Lec_2 {
    public static void main(String[] args) {
        int[] arr = { 10, 20, 5, 7 };

        System.out.print("Original Array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();

        Arrays.sort(arr); // Sort the array in ascending order

        System.out.print("Sorted Array in Ascending Order: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
