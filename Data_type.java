public class Data_type {
    public static void main(String[] args) {
        boolean isJavaFun = true;
        boolean isFishTasty = false;
        System.out.println("isJavaFun" + isJavaFun);
        System.out.println("isFishTasty" + isFishTasty);
        byte age = 30;
        byte temperature = 25;
        System.out.println("age" + age);
        System.out.println("temperature" + temperature);
        short student = 5000;
        short distance = 10000;
        System.out.println("student" + student);
        System.out.println("distance" + distance);
        int population = 1000000;
        int salary = 50000;
        System.out.println("population" + population);
        System.out.println("salary" + salary);
        long  worldPopulation = 7800000000L;
        long lightyear = 9460730472580800L;
        System.out.println("worldPopulation" + worldPopulation);
        System.out.println("lightyear" + lightyear);
        float pi = 3.14f;
        float gravity = 9.8f;
        System.out.println("pi " + pi);
        System.out.println("gravity" + gravity);
        double pii = 3.141592653589793;
        double avogadro= 6.02214076e23;
        System.out.println("pi" + pi);
        System.out.println("avogadro" + avogadro);
        char grade = 'A';
        char symbol = '$';
        System.out.println("grade" + grade);
        System.out.println("symbol" + symbol);
        String name = "John";
        String message = "Hello, World!";       
        System.out.println("name" + name);
        System.out.println("message" + message); 
        car myCar = new car("toyota " ,2020);
        myCar.display();
        System.out.println("Model: " + myCar.model);
        System.out.println("Year: " + myCar.year);

    }

}
class car {
    String brand = "Toyota";
    String model = "Camry";
    int year = 2020;

    public car(String model,int year) {
        this.model = model;
        this.year = year;}
        void display() {
        System.out.println(model +"" + year);

    }
    
}
