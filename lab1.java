public class lab1{
    public static void main (String []args){
        // 1. Data types 
        int a = 10;
        int b = 5;
        double result = 0.0;
        char grade = 'A';
        boolean flag = true;

        System.out.println( "Data Types :");
        System.out.println("Integer a = "+ a);
        System.out.println("Double result = " + result);
        System.out.println( "Character grade = " + grade);
        System.out.println("Boolean flag ="+ flag );

        //2.OPERATIONS
        System.out.println("\nOperatos : ");
        System.out.println("Addition :" + (a+b));
        System.out.println("Subtraction :" + (a-b));
        System.out.println("multiplication" + (a*b));
        System.out.println("Division :" + (a/b));
        System.out.println("Modules :" + (a%b));

        //3. CONTROL STATEMENTS (IF - ELSE)
        System.out.println("\n Control Statement (if-else):" );
        if ( a>b){
            System.out.println(" a is greater than b");
                }
        else{
             System.out.println("b is greater than or equal to a " );
        }
        //4. For loop
        System.out.println( "\n For loop :");
        for(int i=1;i<=5; i++){
            System.out.println("i=" + i);
        }
        // 5. Array ( predefined vlues)
        int[] arr = {1,2,3,4,5};
         System.out.println("\n Array elements are :");
         for (int i = 0; i< arr.length; i++)
         {
            System.out.println(arr[i]);
         }
    }
    
}