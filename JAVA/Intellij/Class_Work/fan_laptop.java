package Class_Work;

public class fan_laptop {
    public static void main(String[] args) {
        F303 first_object = new F303();
        F303 second_object = new F303();
        first_object.fan();
        second_object.laptop();
    }
}

class F303{
    public void fan(){
        System.out.println("Hello Fan");
    }
    public void laptop(){
        System.out.println("Hello Laptop");
    }
}