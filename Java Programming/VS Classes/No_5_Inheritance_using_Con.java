class Sample{
    Sample(int a)
    {
        System.out.println("Hello this is Parent Construtor."+a);
    }
    /* private SAmple(){

    } if you make this type of constructor then youa re not able to make the class's object
        */
    Sample()
    {
        System.out.println("Hello this is Parent Construtor.");
    }
}
class Sample1 extends Sample
{
    Sample1(int a)
    {
        super(2);   /* If your Parent's Constructor is Parameterized then you need declare "super(your_parameter);"
                        maually. */
        // super();     if you need to declare supper(); line u can if u do not declare then compiler will.
        /* And Most Important this "super();" line must be in the first line of child's constructor code.  */
        System.out.println("Hello this child Construtor."+a);
    }
    Sample1()
    {
        System.out.println("Hello this child Construtor.");

    }
} 
public class No_5_Inheritance_using_Con 
{
 
    public static void main(String [] args)
    {
        Sample ss = new Sample();
        Sample1 s = new Sample1(4);     /* When u declare the onject of the child class the compiler runs the constructor 
            of the child's class but child class is inherited then, compiler writer there in the first line of code in child's 
            constructor "super();" then, this line run the parent constuctor. */ 
            System.out.println("\n\n\n");

        Sample1 s2 = new Sample1();
    }
    

}
