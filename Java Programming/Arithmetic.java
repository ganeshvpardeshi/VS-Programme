//here we wrtiting a code for addition , subtraction , dividion , multiplication ..
class Arithmetic
{
    void add(int x, int y)
    {
            int z=0;
            z=x+y;
            System.out.println("The Addition is "+z);
    }
    void sub(int m, int n)
    {
            int l=0;
            l=m-n;
            System.out.println("The Subtraction is "+l);
    }
    void mul(int c, int d)
    {
            int e=0;
            e=c*d;
            System.out.println("The Multiplication is "+e);
    }
    void div(int g, int h)
    {
            float i=0;
            i=g/h;
            System.out.println("The Division is "+i);
    }
    
};
class Sum extends Arithmetic
{
    public static void main(String [] args)
    {
            int a=11,b=22;

            Sum s = new Sum();
            s.add(a, b);
            s.sub(a, b);
            s.mul(a, b);
            s.div(a, b);       
            
    }
}
