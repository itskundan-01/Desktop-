package Class_Work.p2;

public class Utility
{
    public static long findreverse(long n){
        long r,a,x=0;
        while(n>0){
            r=n%10;
            n /=10;
            x=x*10+r;
        }
        return x;
    }
}
