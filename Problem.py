# n=int(input())
# for i in range(n):
#     a,b,c=map(int, input().split())
#     if (a<b<c):
#         print("STAIR")
#     elif (a<b>c
#         print("PEAK")
#     else:
#         print("NONE")
# t=int(input())
# for i in range(t):
#     a,b,c= map(int,input().split())
#     diff=max(a,b)-min(a,b)
#     if c>=1 and c<=2*diff:
#         if c<=diff:
#             print(c+diff)
#         else:
#             print(c-diff)
#     else:
#         print(-1)


# t=int(input())
# for i in range(t):
#     a,b,c= map(int,input().split())
#     Min=min(min(a,b),min(a,c))
#     if a%Min + b%Min + c%Min == 0:
#         if a/Min + b/Min + c/Min <=6 :
#             print("YES")
#     else:
#         print("NO")


print(((-9)**3+4*(-9)**2+4*(-9)-14)%65)

