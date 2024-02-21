import java.util.Scanner;

public class sumof2num {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the First Number: ");
        int num1 = scan.nextInt();
        System.out.print("Enter the Second Number: ");
        int num2 = scan.nextInt();
        int sum = num1+num2;
        System.out.println("\nThe sum of "+num1+" and "+num2+" is: "+sum);
        scan.close();
    }
}
