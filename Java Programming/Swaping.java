import java.util.Scanner;
class Swaping 
{
        public static void main(String [] args)
        {
            Scanner sc = new Scanner(System.in);
            int a = sc.nextInt();
            int b = sc.nextInt();
            int temp;
            System.out.println("Before swaping a="+a);
            System.out.println("Before swaping b="+b);
            temp=a;
            a=b;
            b=temp;
            System.out.println("After swaping a="+a);
            System.out.println("After swaping b="+b);
            
        }    
}
