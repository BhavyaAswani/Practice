h=[]
n=int(input("Enter the no. of values to take hcf of="))
for i in range(n):
    no=int(input("Enter the no.="))
    h.append(no)
c=min(h)
l=[]
for k in range(1,c+1):
     if all(num%k==0 for num in h):
         l.append(k)
hcf=max(l)
print(hcf)