package Class_Work.demo;
import Class_Work.cabApp.*;
import java.util.*;
public class Solution
{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the Name: ");
        String name = scan.nextLine();
        System.out.println("Enter the Mobile Number: ");
        long mobile = scan.nextLong();
        System.out.println("Enter the Distance: ");
        double distance = scan.nextDouble();
        cab c = new cab(name,mobile,distance);
        System.out.println(c);
    }
}
