class Sample{

    Sample()
    {
        /*  This is Instance Initialization Block, If you do not create the object of the class that time they not going to execute.
            All initialization block will copied in the first means before any execution of the constructor code they will execute.
            And if you initialize the 4-5 initilization block they will execute sequentially one-by-one. */
        System.out.println("this is Sample Construtor.");
    }
    {
        System.out.println("this is Sample Initialization block I-1.");
    }
    {
        System.out.println("this is Sample Initialization block I-2.");
    }
    {
        System.out.println("this is Sample Initialization block I-3.");
    }
    {
        System.out.println("this is Sample Initialization block I-4.");
    }
}
public class No_6_1_Instance_Initializat_block {
    
    public static void main(String [] args)
    {
        Sample s = new Sample();
        /* when you declare the object of class that hav initialization block that time compiler will goes to constructor to execute it 
            but when we compile the code that time initilization block automatically copied in constructor.
            And then compiler goes to execute constructor that time initialization block are there then, compiler 
            will execute them first and then it will execute the rest of the code. */

    }
}
