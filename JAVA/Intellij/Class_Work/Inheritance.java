package Class_Work;
class cuboid{
    final int id=23;
     public void car(){

    }
}
class square extends cuboid{
    public void car(){

    }
}
public class Inheritance
{
    public static void main(String[] args) {
        cuboid c = new cuboid();
        square s = new square();
        System.out.println(s.id);
    }
}
