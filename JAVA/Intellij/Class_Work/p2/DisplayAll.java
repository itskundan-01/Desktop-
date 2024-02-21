package Class_Work.p2;

public class DisplayAll
{
    public static void displayPalindromeNOs(long n){
        long x=0,r,a,p=0;
        for(int i=1;i<=n;i++){
            x=0; p=i;
            while(p>0){
                r=p%10;
                p = p/10;
                x = x*10+r;
            }
            if(x==i) System.out.println(i);
        }
    }

    public static void displayArmstrong(int n){
        int x,r,p;
        for(int i=1;i<=n;i++){
            x=0; p=i;
            while(p>0){
                r=p%10;
                p = p/10;
                x = x+r*r*r;
            }
            if(x==i) System.out.println(i);
        }
    }


}
