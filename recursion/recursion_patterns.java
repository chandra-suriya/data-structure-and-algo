import java.util.Arrays;

// import java.util.Scanner;
public class recursion_patterns {
    public static void main(String[] args) {
       //1.star pattern problem reverse
       printstarrev(3,3,0,0);
       //2.star pattern original
       printstarori(3,3,0,0);
    //    Scanner input = new Scanner(System.in);
    //    System.out.println(input.nextLine());
    //    input.close();
      //3. bubble sort
      System.out.println();
      int ar[]={4,3,2,8,1};
      //bubblesort(ar, 4, 4, 0, 0);
      System.out.println(Arrays.toString(ar));

      // 4. selection sort
      selectionsort(ar,4,4,0,0,-1,0);
      System.out.println(Arrays.toString(ar));
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
           // bubble sort
    }
    static void bubblesort(int ar[], int r,int c,int i,int j){
        if(j==r){
            return;
        }
        if(i<c){
            if(ar[i]>ar[i+1]){
                int temp = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = temp;
            }
         bubblesort(ar,r,c,i+1,j);
        }
        else{
         bubblesort(ar,r,c-1,0,j+1);
    }
      // selection sort
    }
    static void selectionsort(int ar[],int r, int c, int i, int j, int max,int ind){
        if(j==r){
            return;
        }
        if(i<=c){
           if(max < ar[i]){
               max = ar[i];
               ind = i;
           }
         selectionsort(ar,r,c,i+1,j,max,ind);
        }
        else{
            int temp = ar[c];
            ar[c] = ar[ind];
            ar[ind] = temp;
         selectionsort(ar,r,c-1,0,j+1,-1,ind);
    }
    }
}
