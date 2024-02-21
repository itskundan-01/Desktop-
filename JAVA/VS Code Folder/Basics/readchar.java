import java.util.Scanner;
public class readchar {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the Character: ");
        char ch = scan.next().charAt(0);
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
        {
            System.out.println("Character is: "+ch);
        }
        else System.out.println("Invalid Input");
        scan.close();
    }
}
