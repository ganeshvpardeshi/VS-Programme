class Sample {
    int a;
    Sample(int a)
    {
        this.a = a;
        System.out.println("The Value of class's a is "+a);
    }
    void display()
    {
        System.out.println("The Value of class's a is "+a);

    }
}
class Sample1 extends Sample
{

    int a;
    Sample1(int a)
    {
        super(a);
        System.out.println("The Value of class's a is "+super.a);
    }
    void display(Sample1 s1)
    {
        System.out.println("The Value of class's a is "+super.a);

    }
}
public class No_5_UseOf_This_Super {
    public static void main(String [] args)
    {

            Sample s = new Sample(553);
            s.display();
            System.out.println("\n\n\n");

            Sample1 s2 = new Sample1(12);
    }
}
