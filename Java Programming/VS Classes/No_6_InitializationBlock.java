class Sample{
    Sample()
    {   //right here(initialization block places here by the constrcutor )
        System.out.println("This is Sample Class's Constrcutor.");
    }
    /*  Basically compiler put the initialization block in the first line of constrcutor code so, that's why 
        Initialiazation block will execute first after constrcutor will do it's work.
        
        And you can many of Initiazation block in a class.

        And if you declare many of initialization block in a class they will execute sequentially
        BEFORE the execution of the constructor.  
     */
    {    
        System.out.println("This is Sample Class's Initialization Block.");
    }
}
public class No_6_InitializationBlock {

    public static void main(String [] args)
    {
        Sample s = new Sample();
    }
    
}
