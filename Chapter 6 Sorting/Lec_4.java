import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Lec_4 {
    public static void main(String[] args) {
        // Create an ArrayList of integers
        List<Integer> list = new ArrayList<>();

        // Add some integers to the list
        list.add(5);
        list.add(20);
        list.add(12);
        list.add(30);
        list.add(3);
        list.add(45);
        list.add(10);
        list.add(7);

        System.out.println("ArrayList of integers : " + list);
        // Use Collections.sort() to sort the list in ascending order
        Collections.sort(list);

        // Print the sorted list
        System.out.println("Sorted List in Ascending Order: " + list);

        // You can also use Collections.reverse() to sort in descending order
        Collections.reverse(list); // Or -> Collections.sort(list,Collections.reverseOrder());

        // Print the sorted list in descending order
        System.out.println("Sorted List in Descending Order: " + list);
    }
}
