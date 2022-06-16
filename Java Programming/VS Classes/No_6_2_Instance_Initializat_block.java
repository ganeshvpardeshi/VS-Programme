class Sample
{
    static int x;
    Sample()
    {
        System.out.println("Constructor called.");
    }

    static
    {
        System.out.println("Static Initialization block called and value of x is "+x);
    }
    

    static void hii()
    {
        System.out.println("Static void function and value of x is "+x);


    }
}
public class No_6_2_Instance_Initializat_block
{   
    public static void main(String [] args)
    {

            Sample.x = 5565;
            Sample.hii();
        System.out.println("Value of x :"+Sample.x);

    }
}