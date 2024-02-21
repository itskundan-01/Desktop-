package Class_Work;
import java.util.Scanner;
class projector {
     public void light() {
         Scanner scan = new Scanner(System.in);
         int a, b, c;
         System.out.print("Enter the 1st Value: ");
         a = scan.nextInt();
         System.out.print("Enter the 2nd Value: ");
         b = scan.nextInt();
         c = a + b;
         System.out.println("The Sum is: " + c);
     }
}
public class light_projector {
    public static void main(String[] args) {
        projector sum = new projector();
        sum.light();
    }
}
