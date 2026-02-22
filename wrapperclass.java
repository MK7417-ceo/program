public class wrapperclass {
    public static void main (String[] args) {
        int num = 10;
        //Autoboxing :primitive int->Integer object 
        Integer a = num; // Autoboxing
        Integer wrapperNum = Integer.valueOf(num);
        System.out.println(" the primitive int b is :" + num);
        System.out.println(" the integrer object a is :" + a);
    }
}
