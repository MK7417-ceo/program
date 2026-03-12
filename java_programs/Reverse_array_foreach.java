public class Reverse_array_foreach {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5 };
        int[] rev = new int[arr.length];
        int index = arr.length - 1;
        for (int num : arr) {
            rev[index] = num;
            index--;
        }
        for (int num : rev) {
            System.out.println(num);
        }
    }
}
