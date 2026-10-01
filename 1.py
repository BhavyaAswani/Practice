l=[4, 2, 7, 2, 5, 2]
a=len(l)
def find(lst,n,index=None):
    if index==None:
        index=len(lst)-1
    if index>=0:
        if lst[index]==n:
            return index
        else:
            return find(lst,n,index-1)
    else:
        return -1
print (find(l,2))
