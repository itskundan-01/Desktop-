package Class_Work.cabApp;

public class cab
{
    private String name;
    private long mobile;
    private double distance;
    private double fare;
    public cab(String name, long mobile, double distance){
        this.name = name;
        this.mobile = mobile;
        this.distance = distance;
    }

    public double computeFare(){
        return fare = distance*10;
    }


    @Override
    public String toString() {
        return "Name: "+name+"\nMobile Number: "+mobile+"\nDistance: "+distance+"\nFare: "+computeFare();
    }
}
