n=int(input())
l1=[]
l2=[]
for i in range (1,n+1,1):
    if (i%2==0):
        l1.append(i)
    else :
        l2.append(i)
print("even",l1,"odd",l2)

