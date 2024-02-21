package Class_Work;

import java.util.Scanner;

public class CSIT {
    public static void main(String[] args) {
        CSE o_cse = new CSE();
        ECE o_ece = new ECE();
        o_cse.network();
        o_ece.embedded();
    }
}
class CSE{
    public void network() {
        Scanner scan = new Scanner(System.in);
        int a,b;
        System.out.print("Enter the 1st number: ");
        a = scan.nextInt();
        System.out.print("Enter the 2nd number: ");
        b = scan.nextInt();
        if(a>b) System.out.println(a+" is Greatest.");
        else System.out.println(b+" is Greatest.");
//        scan.close();
    }
}

class ECE{
    public void embedded(){
        Scanner can = new Scanner(System.in);
        int v,u,a,t;
        System.out.print("Enter the Initial Velocity: ");
        u = can.nextInt();
        System.out.print("Enter the acceleration: ");
        a = can.nextInt();
        System.out.print("Enter the Time: ");
        t = can.nextInt();
        v= u+a*t;
        System.out.println("The Final Velocity is: "+v);
        can.close();
    }
}