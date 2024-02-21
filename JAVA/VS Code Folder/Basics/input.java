import java.util.Scanner;
public class input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Your Number: ");
        int input =   sc.nextInt(); 
        sc.nextLine();
        System.out.println("Your Input is: "+input);
        System.out.print("Enter Your Name: ");
        String name = sc.nextLine();
        System.out.println("Your Name is: "+name);   
        sc.close();
    }
}
