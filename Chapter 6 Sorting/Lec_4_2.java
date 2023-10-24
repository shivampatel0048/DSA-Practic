import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

class Point {
    int x, y;

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

class MyCmp implements Comparator<Point> {
    public int compare(Point p1, Point p2) {
        return Integer.compare(p1.x, p2.x); // or -> (p1.x - p2.x)
    }
};

public class Lec_4_2 {
    public static void main(String[] args) {
        // Create a list to hold Point objects
        List<Point> list = new ArrayList<Point>();

        // Add Point objects to the list
        list.add(new Point(3, 4));
        list.add(new Point(1, 2));
        list.add(new Point(2, 3));
        list.add(new Point(5, 1));

        // Sort the list of Point objects based on x-coordinates using the Comparator
        Collections.sort(list, new MyCmp());

        // Print the sorted list
        System.out.println("Sorted Points:");
        for (Point p : list) {
            System.out.println(p.x + " " + p.y);
        }
    }
}
