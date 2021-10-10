class Switch_case 
{
    public static void main(String [] args)
    {
        float a=12,b=21,c;
        int ch=3;
        System.out.println("Press 1. for Addition ");
        System.out.println("Press 2. for Subtraction ");
        System.out.println("Press 3. for Multiplication ");
        System.out.println("Press 4. for Division ");

        switch(ch)
        {
                case 1:
                {
                    c=a+b;
                    System.out.println("The Addition is "+c);
                    break;
                }
                case 2:
                {
                    c=a-b;
                    System.out.println("The Subtraction is "+c);
                    break;
                }
                case 3:
                {
                    c=a*b;
                    System.out.println("The Multiplication is "+c);
                    break;
                }
                case 4:
                {
                    float f;
                    f=a/b;
                    System.out.println("The Division is "+f);
                    break;
                }
                default:
                {
                    System.out.println("Wrong Input.");
                    break;
                }
        }
    }   
}
