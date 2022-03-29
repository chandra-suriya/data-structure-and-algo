import java.util.Scanner;
public class recursion_patterns {
    public static void main(String[] args) {
       //1.star pattern problem reverse
       printstarrev(3,3,0,0);
       //2.star pattern original
       printstarori(3,3,0,0);
       Scanner input = new Scanner(System.in);
       System.out.println(input.nextLine());
       input.close();
    }
    static void printstarrev(int r,int c,int i, int j){
        // base case
        if(j==r){
            return;
        }
        if(i<c){
        System.out.print("* ");
        printstarrev(r,c,i+1,j);
        }
        else{
        System.out.println();
        printstarrev(r,c-1,0,j+1);}
    }
    static void printstarori(int r,int c,int i,int j){
        if(j==r){
            return;
        }
        if(i<c){
         printstarori(r,c,i+1,j);
         System.out.print("* ");
        }
        else{
        printstarori(r,c-1,0,j+1);
        System.out.println();
    }

    }
}
