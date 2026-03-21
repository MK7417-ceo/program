public class sum_2_1d_array_foreach {
    public static void main(String[] args) {
        int[] array1 = { 1, 2, 3, 4, 5 };
        int[] array2 = { 10, 20, 30, 40, 50 };

        // Approach 1: Element-wise sum of two arrays into a third array
        int[] sumArray = new int[array1.length];
        int index = 0;

        // Using for-each loop to iterate through the first array
        for (int num : array1) {
            // Adding elements from both arrays and storing in sumArray
            sumArray[index] = array1[index] + array2[index];
            index++;
        }

        System.out.print("Element-wise Sum Array: ");
        for (int num : sumArray) {
            System.out.print(num + " ");
        }
        System.out.println();

        // Approach 2: Total sum of all elements in both arrays
        int totalSum = 0;

        for (int num : array1) {
            totalSum += num;
        }

        for (int num : array2) {
            totalSum += num;
        }

        System.out.println("Total sum of all elements in both arrays: " + totalSum);
    }
}
