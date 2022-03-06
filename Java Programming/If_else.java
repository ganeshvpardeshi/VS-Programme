import java.util.Scanner;
class If_else
{

    public static void main(String [] args)
    {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter the value of A : ");
            int a = sc.nextInt();
            System.out.println("Enter the value of b : ");
            int b = sc.nextInt();

            sc.close();

            if(a>b)
            {
                System.out.println("A is Greater.");
            }
            else
            {
                System.out.println("B is Greater.");
            }

    }

}