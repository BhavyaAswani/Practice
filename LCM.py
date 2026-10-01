# import pandas as pd
# df=pd.read_csv("C://Users//admin//Desktop//Book1.csv")
# numbers = df['Numbers'].tolist()

# # Check consecutive numbers
# found = False
# for i in range(len(numbers)-1):
#     if abs(numbers[i] - numbers[i+1]) == 1:
#         found = True
#         break

# # Print result
# if found:
#     print("Yes")
# else:
#     print("No")

# import pandas as pd
# df=pd.read_csv("C://Users//admin//Desktop//Book1.csv")
# num=df['Numbers'].tolist()
# sum=0
# for i in range(len(num)):
#     if num[i]%2==0:
#         sum+=num[i]
# print(sum)

a=int(input("Enter the no. of values:"))
l=[]
for i in range(a):
    b=int(input("Enter the value="))
    l.append(b)
max=l[0]
for i in range(a-1):
    if l[i]>max:
        max=l[i]
print(max)
