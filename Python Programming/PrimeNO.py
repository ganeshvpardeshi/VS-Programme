a=5
i=2
while(i<a):
    if a%i==0:
        print("number is not prime")
        break
    i=i+1

if i==a:
    print("Number is Prime")