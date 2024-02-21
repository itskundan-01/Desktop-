package Java_Basics.Loops.PatternPrinting;
import java.util.Scanner;
public class num_pyramid {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int n = scan.nextInt();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                System.out.print(" ");
            }
            for(int k=1;k<=i;k++){
                System.out.print(k);
            }
            for(int l=i-1;l>0;l--){
                System.out.print(l);
            }
            System.out.println();
        }
    }
}
