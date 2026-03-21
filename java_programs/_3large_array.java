import java.util.Arrays;

class _3large_array {
    public static void main(String[] args) {
        // 1. Create the array
        int[] numbers = { 10, 4, 3, 50, 23, 90 };

        System.out.println("Array: " + Arrays.toString(numbers));

        if (numbers.length < 3) {
            System.out.println("Array must have at least 3 elements.");
            return;
        }

        // Initialize first, second, and third largest elements
        int first = Integer.MIN_VALUE;
        int second = Integer.MIN_VALUE;
        int third = Integer.MIN_VALUE;

        // 2. Find the 3rd largest element
        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] > first) {
                third = second;
                second = first;
                first = numbers[i];
            } else if (numbers[i] > second && numbers[i] != first) {
                third = second;
                second = numbers[i];
            } else if (numbers[i] > third && numbers[i] != second && numbers[i] != first) {
                third = numbers[i];
            }
        }

        if (third == Integer.MIN_VALUE) {
            System.out.println("The array doesn't have a 3rd distinct largest element.");
        } else {
            System.out.println("The 3rd largest element is: " + third);
        }
    }
}
