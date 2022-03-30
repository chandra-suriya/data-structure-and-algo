import java.util.Scanner;

public class function_programs {
    public static void main(String[] args) {
        // sum of two numbers
        sum();
    }
    static void sum(){
           Scanner sc = new Scanner(System.in);
           System.out.print("ENter number 1");
           int fir = sc.nextInt();
           System.out.print("enter number 2");
           int sec = sc.nextInt();
           sc.close();
           System.out.println("the sum value is "+ (fir+sec));
    }
}
