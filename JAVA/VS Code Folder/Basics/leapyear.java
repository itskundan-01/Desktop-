import java.util.Scanner;

public class leapyear {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.printf("Enter the Year: ");
        int year = scan.nextInt();
        if(year%4==0 && (year%400==0 || year%100!=0)){
            System.out.println("Leap Year");
        }
        else System.out.println("Not a leap Year");
        scan.close();
    }
}
