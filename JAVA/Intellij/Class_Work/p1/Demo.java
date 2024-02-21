package Class_Work.p1;
import Class_Work.p2.*;

import java.util.*;
public class Demo
{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        while(true){
            int ch,nn;
            long n;
            System.out.print("\t\t\t\tMain Menu\n1. Find Reverse\t\t\t2. Is Armstrong\n3. Is Palindrome\t\t4. Generate Palindrome\n5. Generate Armstrong\t6. Exit\n\n");
            System.out.print("Enter Your Choice: ");
            ch = scan.nextInt();
            switch(ch){
                case 1: long x = Utility.findreverse(n=scann());
                                    System.out.println("\nThe Reversed Value is: "+x+"\n");
                        break;
                case 2: boolean b = Checker.isArmstrong(nn=scannn());
                                    if(b) System.out.println("\n"+nn+" is an Armstrong Number\n");
                                    else System.out.println("\n"+nn+" is not an Armstrong Number\n");
                                    break;
                case 3: boolean c = Checker.isPalindrome(n=scann());
                                    if(c) System.out.println("\n"+n+" is a Palindrome Number\n");
                                    else System.out.println("\n"+n+" is not a Palindrome Number\n");
                                    break;
                case 4: DisplayAll.displayPalindromeNOs(n=scann());
                        break;
                case 5: DisplayAll.displayArmstrong(nn=scannn());
                        break;
                case 6:
                    System.out.println("\nThank You!!");
                        System.exit(0);
                default:
                    System.out.println("\n\nInvalid Choice Entered ! Please Try Again...\n\n");
            }
        }
    }

    public static long scann(){
        long n;
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the Number: ");
        return n = scan.nextLong();
    }
    public static int scannn(){
        Scanner scan = new Scanner(System.in);
        int n;
        System.out.print("Enter the Number: ");
        return n = scan.nextInt();
    }
}
