package Class_Work;
import java.util.*;
public class Interview {
    public static void main(String[] args) {
        int[] arr = new int[args.length];
        for (int i = 0; i < args.length; i++) {
            arr[i] = Integer.parseInt(args[i]);
        }
        System.out.print("Enter the ID to Search: ");
        Scanner scan = new Scanner(System.in);
        int s = scan.nextInt();
        boolean res = Interview.searchId(arr, s);
        if(res==true)
        System.out.println("True");
        else System.out.println("False");
    }

    public static boolean searchId(int[] arr, int s) {
        for(int i=0;i<arr.length;i++){
            if(arr[i]==s) return true;
        }
        return false;
    }


}