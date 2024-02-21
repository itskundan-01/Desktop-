package Java_Basics.Loops.PatternPrinting;
import java.util.Scanner;
public class opp_triangle {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number of Rows: ");
        int a = scan.nextInt();
        for(int i=1;i<=a;i++){
            for(int j=i;j<=a;j++){
                System.out.print("*");
            }
            System.out.println();
        }
        scan.close();
    }
}
