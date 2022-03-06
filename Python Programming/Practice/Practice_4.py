isA = [2,4,6,10,21,4,45,66,93,1,11,31,56,22,58,62]
even,odd=0,0
for i in isA:
    if i%2==0:
        even +=1
    else:
        odd+=1

print("Even: ",even)
print("Odd : ",odd)
