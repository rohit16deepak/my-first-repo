a=int(input())
i=0
b=0
c=10
while i<len(str(a)):
    z=a%c
    b= (b*c)+z
    z=0
    a=a//10
    i+=1
print(b)


