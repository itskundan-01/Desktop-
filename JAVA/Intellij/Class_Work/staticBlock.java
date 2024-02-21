package Class_Work;
import Class_Work.*;
public class staticBlock
{
    public static void main(String[] args){
//        System.out.println("Hello Main");
//        CSE.network();

    }

    static {
        System.out.println("Hello Static");
        staticBlock k = new staticBlock();
        k.sumoftwo();
        CSE x = new CSE();
        x.network();
    }

    public void sumoftwo(){
        System.out.println(2+3);
    }

}
