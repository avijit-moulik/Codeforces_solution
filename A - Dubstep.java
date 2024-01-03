import java.util.Scanner;

public class a {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.next();
        scanner.close();

        
        String[] w = input.split("WUB");

        System.out.println(String.join(" ", w));
    }
}
