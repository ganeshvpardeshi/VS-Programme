n=121
r=0
sum = 0
temp=0
print("The Number is ",n)
temp = n
while (n > 0):
    r = n % 10
    sum = (sum * 10) + r
    n = n / 10
              
if (temp == sum):
    print("palindrome number ")
else:
    print("not palindrome")
