package Class_Work.p2;

public class Checker
{
    public static boolean isArmstrong(int n){
        int r,a=n,x=0;
        while(n>0){
            r=n%10;
            n /=10;
            x=x+r*r*r;
        }
        if(a==x){
            return true;
//            System.out.println(a+" is an Armstrong Number");
        }
        else return false;
//        System.out.println(a+" is not an Armstrong Number");
    }

    public static boolean isPalindrome(long n){
        long x = Utility.findreverse(n);
        if(x==n) return true;
        else return false;
    }


}
