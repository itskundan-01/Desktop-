package Apna_College.Array;

import java.util.Scanner;

public class sumOfElements 
{
    public static void main(String[] args) {
        System.out.print("\033[H\033[2J");
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the size of Array: ");
        int n = scan.nextInt();
        int array[] = new int[n],sum = 0;
        System.out.println("Enter the array elements:");
        for(int i=0;i<n;i++){
            array[i] = scan.nextInt();
            sum +=array[i];
        }
        System.out.println("The sum of Array elements is: "+sum);
        scan.close();
    }    
}
