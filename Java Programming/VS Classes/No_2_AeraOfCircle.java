import java.util.Scanner;
class Circle{
    private double Aoc,pi = 3.14, r;
    
    void setData(double ra){
        r = ra;
    }
    void calculateA()
    {
        Aoc = pi * r * r;
    }
    void display()
    {
        System.out.println("The Value is "+r);
        System.out.println("\nThe Aera of Circle is : "+Aoc);
    }
}
public class No_2_AeraOfCircle {
    public static void main(String [] args)
    {
        Circle c = new Circle();
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Value for Calculation.");
        double a = sc.nextDouble();
        sc.close();

        c.setData(a);
        c.calculateA();
        c.display();

    }    
}
