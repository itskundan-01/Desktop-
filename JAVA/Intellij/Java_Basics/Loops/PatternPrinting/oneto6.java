package Java_Basics.Loops.PatternPrinting;

import java.util.Scanner;

public class oneto6 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the number of Rows: ");
        int a = scan.nextInt();
        for(int i=1;i<=a;i++){
            for(int j=1;j<=6;j++){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}
