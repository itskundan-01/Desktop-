package Class_Work;
import java.util.*;
public class fibonacci
{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the value of N: ");
        int n=scan.nextInt();
        int a=0,b=1,c;
        System.out.println(a+"\n"+b);
        for(int i=0;i<n-2;i++){
            c=a+b;
            System.out.println(c);
            a=b;
            b=c;
        }
        scan.close();
    }
}
