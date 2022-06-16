class Sample_1{

    Sample_1()
    {
        /*  This is Default Constructor.
            Constructor has no return value and has no datatype.
            COnstructor Called when you declared the Object of that class.
            If you not declared the Constructor then compiler will automatically
            declared its own.
         */

        System.out.println("\nThis is the Constructor and Constructor Called.\n"); 
    }
    Sample_1(int a)
    {
        /*  This is Parameterized Constructor.
            When you declared the object like this : 
                Sample_1 s = new Sample_1(in this u need to pass value);
         */

        System.out.println("This is the Parameterized Constructor and Parameterized Constructor Called.\n"); 
    }
}
public class No_3_Consturctor {
    public static void main(String [] args)
    {
        Sample_1 s = new Sample_1();    // This Declaration call the Default Constructor
        Sample_1 c = new Sample_1(4);   // This Declaration call the Parameterized Constructor
    }    
}
