import java.util.Scanner;

public class UserInput {
    public static void main(String[] args) {
        // Scanner class ka use karke hum user se input le sakte hain
        Scanner scanner = new Scanner(System.in);

        // User ko ek message dikhayenge
        System.out.print("Apna naam enter karein p: ");

        // User jo bhi likhega, usko 'name' variable ke andar save kar lenge
        String name = scanner.nextLine();

        // Naya message
        System.out.print("Apni umar (age) enter karein: ");
        int age = scanner.nextInt();

        // Output print karenge
        System.out.println("\n--- RESULT ---");
        System.out.println("Namaste " + name + "! Aapki age " + age + " saal hai.");

        // Scanner ko band kar denge
        scanner.close();
    }
}
