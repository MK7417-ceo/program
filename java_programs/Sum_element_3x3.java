public class Sum_element_3x3 {
    public static void main(String[] args) {
        int[][] matrix = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
        };

        int sum = 0;

        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                sum += matrix[i][j];
                System.out.println(matrix[i][j] + "\n");
            }
        }

        System.out.println("The sum of all elements in the 3x3 matrix is: " + sum);
    }
}
