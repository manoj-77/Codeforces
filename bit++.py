n=int(input())
x=0
while(n!=0):
    op=input()
    if "++" in op:
        x+=1
    elif "--" in op:
        x-=1
    n-=1
print(x)
