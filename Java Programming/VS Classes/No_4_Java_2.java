import java.util.Scanner;
class Sample
{
    private double x,y,sum;     // This is Instance Member Variables
    void setData(double a,double b)     // This is Instance Member Functions
    {
        x=a;
        y=b;
    }
    void calculate()     // This is Instance Member Functions
    {
        double d;      /* This is Local Variable and you cannot use it 
                                outside of the a function or a class */
        sum = x * y;
    }
    void displaY()     // This is Instance Member Functions
    {
        System.out.println("The Area of Rectangle is : "+sum);
    }
}
public class No_4_Java_2 {
    public static void main(String [] args){
        Sample s = new Sample();

        Scanner sc = new Scanner(System.in);
        System.out.println("\nEnter the 1st Number : ");
        double a = sc.nextDouble();
        System.out.println("\nEnter the 2nd Number : ");
        double b = sc.nextDouble();

        sc.close();
        s.setData(a, b);
        s.calculate();
        s.displaY();
    }
}
