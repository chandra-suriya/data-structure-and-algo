public class recursion_patterns {
    public static void main(String[] args) {
       //1.star pattern problem
       printstarrev(3,3,0,0);
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
}
