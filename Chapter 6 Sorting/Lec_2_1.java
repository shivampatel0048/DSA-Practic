import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Lec_2_1 {
    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>();
        list.add(10);
        list.add(20);
        list.add(5);
        list.add(7);

        System.out.print("Original List: ");
        for (int num : list) {
            System.out.print(num + " ");
        }
        System.out.println();

        Collections.sort(list); // Sort the list in ascending order

        System.out.print("Sorted List in Ascending Order: ");
        for (int num : list) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
