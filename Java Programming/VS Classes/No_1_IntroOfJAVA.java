class Sample
{
    void function_1()    // Non-Static/Instance Member Function
    {

    }
    static void Function_2(int a)    // Static Member Function
    {
        System.out.println("The Value is : "+a);
    }
}
class No_1_IntroOfJAVA extends Sample
{
    static class Ganesh{    // static Class
        void function_3()    // Static Member Function
        {
            System.out.println("Hii Ganesh this is me Latop.");
        }
    };
    public static void main(String [] args)
    {
        int x;     // Instance Member Variable
        x = 10;
        // HII.function_3();
        Ganesh g = new Ganesh();
        g.function_3();
        Sample.Function_2(x);   
    }
}