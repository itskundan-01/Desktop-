package Java_Basics.Loops.PatternPrinting;

import java.util.Scanner;

public class hollowPyramid {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the number of Rows: ");
        int n = scan.nextInt();
        for(int i=1;i<=n;i++)
        {
//            int a=1;
            for(int j=1;j<=n-i;j++)
            {
                System.out.print(" ");
            }
                for(int k=1;k<=2*i-1;k++)
                {
                    if((k==1||k==2*i-1)||i==n)
                    {
                        System.out.print(i);
                    }
                    else System.out.print(" ");
                }
            System.out.println();
        }
    }
}
