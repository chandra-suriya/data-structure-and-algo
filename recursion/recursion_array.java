import java.util.ArrayList;

public class recursion_array {
    public static void main(String[] args) {
        System.out.println("check the array is sorted");
        int[] arr = {1,2,4,6,4,5,9};
        if(sorted(arr,0)){
            System.out.println("the array is sorted");
        }
        else{
            System.out.println("the array is not sorted");
        }
        // Searching the array
        if(search(arr,4,0)){
            System.out.println("the value is there");
        }
        else{
            System.out.println("the value is not there");
        }
        //Search with multiple values in array
       ArrayList<Integer> list = new ArrayList<>();
       System.out.println(findallindex(arr,4,0,list));
       //Search with multiple values in array part2
       System.out.println(findallindex1(arr,4,0));
    }
    static boolean sorted(int[] arr,int ind){
        if(ind == arr.length-1){
            return true;
        }
        return arr[ind]<arr[ind+1] && sorted(arr,ind+1);
    }
    static boolean search(int[] arr, int tar, int ind){
        if(ind==arr.length-1){
            return false;
        }
        return arr[ind]==tar || search(arr, tar, ind+1);
    }

    static ArrayList<Integer> findallindex(int[] arr, int tar, int ind,ArrayList<Integer> list){
        if(ind==arr.length-1){
            return list;
        }
        if(arr[ind]==tar){
            list.add(ind);
        }
        return findallindex(arr,tar,ind+1,list);

    }
    //with array important 
    static ArrayList<Integer> findallindex1(int[] arr,int tar,int ind){
        ArrayList<Integer> list1=new ArrayList<>();
        if(ind==arr.length-1){
            return list1;
        }
        if(arr[ind]==tar){
            list1.add(ind);
        }
        ArrayList<Integer> output=findallindex1(arr,tar,ind+1);
        list1.addAll(output);
        return list1;
    }

}
