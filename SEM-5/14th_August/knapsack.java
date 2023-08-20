import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

class Obj {
    int p;
    int w;
    double r;

    public Obj(int p, int w) {
        this.p = p;
        this.w = w;
        this.r = (double) p / w;
    }
}

public class knapsack {
    static class ObjComparator implements Comparator<Obj> {
        @Override
        public int compare(Obj o1, Obj o2) {
            if (o1.r < o2.r) {
                return 1;
            } else if (o1.r == o2.r) {
                return 0;
            } else {
                return -1;
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter n value:");
        int n = scanner.nextInt();
        Obj[] ob = new Obj[n];

        System.out.println("\nEnter profits and weights of every object:");
        for (int i = 0; i < n; i++) {
            int p = scanner.nextInt();
            int w = scanner.nextInt();
            ob[i] = new Obj(p, w);
        }

        Arrays.sort(ob, new ObjComparator());

        System.out.println("\nEnter capacity of the bag:");
        int m = scanner.nextInt();
        double profit = 0.0;
        int i;

        for (i = 0; i < n; i++) {
            if (ob[i].w <= m) {
                profit += ob[i].p;
                m -= ob[i].w;
            } else {
                break;
            }
        }

        if (i != n && m > 0) {
            profit += (m * ob[i].r);
        }

        System.out.println("\n" + profit);
        scanner.close();
    }
}
