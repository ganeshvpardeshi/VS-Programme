class Fibonacci_series {
    
    public static void main(String [] args)
    {
        int a=0,b=1,c,r=10,i;
        System.out.println("The Range : "+r);
        System.out.print(""+a+" "+b);
        for(i=0;i<r;i++)
        {
            c=a+b;
            System.out.print(" "+c);
            a=b;
            b=c;
        }
    }
}
