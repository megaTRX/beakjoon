import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int [] a = new int [6];

        for (int i = 0; i < 6; i++) {
            a[i] = scanner.nextInt();
        }

        int t = scanner.nextInt();
        int p = scanner.nextInt();

        int count = 0;

        for (int i = 0; i < 6; i++) {
            count += a[i] / t;
            if(a[i] % t != 0) {
                count++;
            }
        }
        System.out.println(count);
        System.out.println(n / p + " " + n % p);
        scanner.close();
    }
}