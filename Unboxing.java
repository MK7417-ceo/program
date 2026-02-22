import java.util.ArrayList;
public class Unboxing {
    public static void main (String [] args){
        Character ch = 'a';
        //Unboxing:character -> char
        char c = ch;
        ArrayList<Integer> list = new ArrayList <>();
        list .add(24);
        //Unboxing: Integer -> int
        int num = list.get(0);
        System.out.println (num);
    }
    
}
