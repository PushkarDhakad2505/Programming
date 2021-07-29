n=int(input())
while(n):
    n=n-1
    a=input()
    b=input()
    flag=0
    for i in a:
        if i in b:
            print("YES")
            flag=1
            break
    if flag==0:
        print("NO")
