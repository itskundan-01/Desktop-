package Apna_College.Array;

import java.util.Scanner;

public class largestElement {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("\033[H\033[2J");
        System.out.println("Enter the size of array:");
        int n = scan.nextInt();
        int array[] = new int[n];
        int max = array[0];
        System.out.println("Enter the array elements:");
        for(int i=0;i<n;i++){
            array[i] = scan.nextInt();
            if(array[i]>max) max = array[i];
        }
        System.out.println("The Largest element of array is: "+max);
        scan.close();
    }
}
