class AddingDigits
{
    public static void main(String [] args)
    {
        int m,n=1234,sum=0;
        System.out.println("The Number is "+n);
        while(n>0)
        {
            m=n%10;
            sum =sum +m;
            n=n/10;
        }
        System.out.println("The Addition of digits is "+sum);
    }
}