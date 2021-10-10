class Factorial 
{
    public static void main(String [] rgs)
    {
        int i,n=5,sum=1;
        System.out.println("The number is "+n);
        for(i=1;i<=n;i++)
        {
            sum*=i;
        }
        System.out.println("The Factorial is "+sum);
    }    
}
