import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

class Point implements Comparable<Point> {
    int x, y;

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    // Implement the compareTo method to define how Points are compared
    public int compareTo(Point obj) {
        // Compare Points based on their x-coordinates
        return Integer.compare(this.x, obj.x); // or (this.x - obj.x)
    }
}

public class Lec_4_1 {
    public static void main(String[] args) {
        // Create a list to hold Point objects
        List<Point> list = new ArrayList<Point>();

        // Add Point objects to the list
        list.add(new Point(3, 4));
        list.add(new Point(1, 2));
        list.add(new Point(2, 3));
        list.add(new Point(5, 1));

        // Sort the list of Point objects based on their x-coordinates
        Collections.sort(list);

        // Print the sorted list
        System.out.println("Sorted Points:");
        for (Point p : list) {
            System.out.println(p.x + " " + p.y);
        }
        // Print the formated sorted list
        System.out.print("Sorted Points: ");
        for (Point p : list) {
            System.out.print("(" + p.x + ", " + p.y + ") ");
        }
    }
}
