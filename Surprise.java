import java.util.Scanner;

public class Surprise {
    public static void main(String[] args) throws InterruptedException {
        // Scanner for user input
        Scanner scanner = new Scanner(System.in);

        System.out.println("=========================================");
        System.out.println("       S Y S T E M   H A C K E D . . .   ");
        System.out.println("=========================================\n");

        // 2 second pause
        Thread.sleep(2000);

        System.out.println("> Initializing Terminal...");
        // 1.5 second pause
        Thread.sleep(1500);

        System.out.println("> Fetching IP Address...");
        Thread.sleep(1000);

        System.out.println("> Bypassing Security Protocols...");
        Thread.sleep(1500);

        System.out.println("\n[!] WARNING: Device is compromised!\n");
        Thread.sleep(1000);

        System.out.print("> Enter your name to recover your device: ");
        String name = scanner.nextLine();

        System.out.println("\n> Matching Data... Please Wait...");
        Thread.sleep(2000);

        System.out.println("> Match Found!");
        Thread.sleep(1500);

        System.out.println("\n-----------------------------------------");
        System.out.println("Hello " + name + "!");
        System.out.println("Dar mat bhai, mai tera dost hu! XD");
        System.out.println("Kaisa laga mera Java ka program? Bhoot bana diya tha na abhi!");
        System.out.println("-----------------------------------------\n");

        scanner.close();
    }
}
