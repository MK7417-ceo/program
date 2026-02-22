import java.util.ArrayList;
 class Autoboxing { public static void main (String []args){ 
    char ch ='a';
    //Autoboxing: char ->character
    Character c =ch;
    ArrayList<Integer> list = new ArrayList<>();
 // Autoboxing: int -> Integer
    list.add(10);
    System.out.println("the primitive char ch is :" + ch);
    System.out.println("the character object c is :" + c);
    System.out.println("the primitive int num is :" + 10);
    System.out.println("the Integer object in list is :" + list.get(0));
 }

    
}
