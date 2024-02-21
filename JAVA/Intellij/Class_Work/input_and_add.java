package Class_Work;

import java.util.*;

public class input_and_add {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a,b,c;
        System.out.print("Enter the 1st number: ");
        a = scan.nextInt();
        System.out.print("Enter the 2nd number: ");
        b  = scan.nextInt();
        c = a+b;
        System.out.println("The sum of "+a+" and "+b+" is: "+c);
    }
}
