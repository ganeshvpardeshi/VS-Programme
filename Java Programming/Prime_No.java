class Prime_No {

    public static void main(String [] rags)
    {
        int a=5,i;
        System.out.println("The Number is "+a);
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                System.out.println("the Number is not Prime ");
                break;
            }
        }
        if(i==a)
        {
            System.out.println("The Number is Prime ");
        }
    }
}
