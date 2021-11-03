class Palimdrome {
    
        public static void main(String [] args)
        {
            int n=101, r, sum = 0, temp;
            System.out.println("The Number is "+n);
            temp = n;
            while (n > 0)
            {
                r = n % 10;
                sum = (sum * 10) + r;
                n = n / 10;
            }
            if (temp == sum)
                System.out.println("palindrome number ");
            else
                System.out.println("not palindrome");

        
        }
}
