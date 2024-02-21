package Java_Basics.Loops;

import java.util.Scanner;

public class sum_of_input {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.printf("Enter The no. of Inputs: ");
        int n = scan.nextInt();
        int sum = 0;
        for(int i=0;i<n;i++){
            System.out.printf("Enter the "+(i+1)+"number: ");
            int a = scan.nextInt();
            sum +=a;
        }
        System.out.printf("The sum of inputs: "+sum);
        scan.close();
    }
}
