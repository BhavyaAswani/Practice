l1 = [8,1,7]
l2 = [1,5,9]
num1=0
num2=0
for x in reversed(l1):
    num1 = num1 * 10 + x
for y in range(len(l2)-1,-1,-1):
    num2 = num2 * 10 + l2[y]
num=num1+num2 
l3=[]
while num > 0 :
    l3.append(num%10)
    num //= 10
print(l3)