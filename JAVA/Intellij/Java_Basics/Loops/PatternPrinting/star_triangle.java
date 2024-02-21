package Java_Basics.Loops.PatternPrinting;

import java.util.Scanner;

public class star_triangle {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.printf("Enter the no. of rows of triangle: ");
        int a = scan.nextInt();
        for(int i=1;i<=a;i++){
            for(int j=1;j<=i;j++){
                System.out.printf("*");
            }
            System.out.println("");
        }
        scan.close();
    }
}
/*
a = 5
*
**
***
****
*****

 */