t=int(input())
while(t):
    t=t-1
    n=int(input())
    a=0
    b=1
    sum=0
    while(b<n):
        temp=b
        b=a+b
        a=temp
        if(b%2==0):
            if(b<n):
                sum=sum+b
    print(sum)
