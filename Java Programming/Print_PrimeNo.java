class Print_PrimeNo {

    public static void main(String [] args)
    {

        int i,j,r=10;
        System.out.println("The Range is "+r);
        System.out.println("Prime is from 1 to "+r+" is :");
        for(j=2;j<r;j++)
        {
            for(i=2;i<j;i++)
            {
                if(j%i==0)
                {
                    break;
                }
            }
            if(i==j)
            {
                System.out.print(" "+i);
            }
        }

    }
}
