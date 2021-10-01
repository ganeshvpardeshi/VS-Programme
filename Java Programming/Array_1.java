class Array_1
{
    
    public static void main(String [] args)
    {
        int i,j;
        int a[][]={{1,1,1},{1,1,1},{1,1,1}};
        int b[][]={{2,2,2},{2,2,2},{2,2,2}};
        int c[][]=new int[3][3];
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
    }
}

