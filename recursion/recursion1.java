public class recursion1 {
    public static void main(String[] args) {
      nto1(5);
      System.out.println("reverse of a number");
      nto1rev(5);
      System.out.println("factorial of a number");
      int output = factorial(5);
      System.out.println(output);
      System.out.println("sum of a digit");
      int sum = sumofdigit(345);
      System.out.println(sum);
    }
    static void nto1(int n){
        if(n==0)
        {
            return;
        }
        System.out.println(n);
        nto1(n-1);
    }
    
    static void nto1rev(int n){
        if(n==0)
        {
            return;
        }
        nto1rev(n-1);
        System.out.println(n);
    }
    static int factorial(int n){

        if(n<=1) //for zero factorial is also one
        {
          return 1;
        }
       return n*factorial(n-1);
    }
    //sum of the digits
    static int sumofdigit(int n)
    {
        if(n==0)
        {
            return 0;
        }
        return (n%10)+sumofdigit(n/10);
    }
    
}