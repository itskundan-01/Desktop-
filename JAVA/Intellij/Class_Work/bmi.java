package Class_Work;
import java.util.*;
public class bmi
{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter Your Weight in Kgs: ");
        float weight = scan.nextFloat();
        System.out.print("Enter Your height in Meters: ");
        float height = scan.nextFloat();
        float bmi=(weight/(height*height));
        if(bmi<18.5) System.out.println("Underweight");
        if(bmi>=18.5 && bmi<=24.9) System.out.println("Normal weight");
        if(bmi>=25 && bmi<=29.9) System.out.println("Overweight");
        if(bmi>=30) System.out.println("Obesity");
    }
}
