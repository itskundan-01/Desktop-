import java.util.Scanner;
public class simpleinterest {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t;
        float p,i,si;
        System.out.print("Enter the Principal Amount: ");
        p = scan.nextFloat();
        System.out.print("Enter the Interest rate: ");
        i = scan.nextFloat();
        System.out.print("Enter the Time in Years: ");
        t = scan.nextInt();
        si = (p*i*t)/100;
        System.out.println("The Simple Interest is: "+si+"\nFinal amount is: "+(si+p));
        scan.close();
    }
}
