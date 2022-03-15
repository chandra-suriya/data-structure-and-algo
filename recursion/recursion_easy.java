public class recursion_easy {
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
      System.out.println("reverse of digit");
      reversedigit(0,233);
      //palindrome of a number
      System.out.println("palindrome");
      palindrome(33233);
      //count steps
      System.out.println("count steps");
      int out = steps(14);
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
    //reverse a number
    static void reversedigit(int reve,int n)
    {
        if(n==0)
        {
            System.out.println(reve);
            return ;

        }
        int val =(reve*10+(n%10)); 
        reversedigit(val,n/10);
    }

    static int rev(int reve,int n)
    {
        if(n==0)
        {
            return reve;
        }
        int val = (reve*10+(n%10));
        return rev(val,n/10);
    }
    //palindrome
    static void palindrome(int val)
    {
        if(val == rev(0,val))
        {
            System.out.println("It is palindrome");
        }
        else
        {
            System.out.println("it is not");
        }
    }
    static int steps(int n)
    {
        if(n==0)
        {
            return 0;
        }
        if(n%2==0){
            return 1+steps(n/2);
        }
        return 1+steps(n-1);
    }
}