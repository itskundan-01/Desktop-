package Apna_College.Array;

import java.util.Scanner;

public class searchElement {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("\033[H\033[2J");
        System.out.println("Enter the size of array: ");
        int n = scan.nextInt();
        int array[] = new int[n];
        System.out.println("Enter the array elements: ");
        for(int i=0;i<n;i++){
            array[i] = scan.nextInt();
        }
        System.out.println("Enter the element to search:");
        int srch = scan.nextInt();
        int found=0,l=0;
        for(int i=0;i<n;i++){
            if(srch==array[i]) {
                found = i;
                l++;
                break;
            }
        }
        if(l==1) System.out.println("The element is found on index: "+found);
        else System.out.println("Element not found.");
        scan.close();
    }
}
