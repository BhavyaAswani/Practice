a=int(input("Enter the position of fibonacci no.="))
def fib(a):
    if a<1:
        print("error")
    elif(a==1 or a==2):
        return 1
    else:
        return fib(a-1)+fib(a-2)
print (fib (a))